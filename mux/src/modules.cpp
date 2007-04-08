/*! \file modules.cpp
 * \brief Module support
 *
 * $Id$
 *
 */

#include "copyright.h"
#include "autoconf.h"
#include "config.h"
#include "externs.h"

#ifdef HAVE_DLOPEN
#include <dlfcn.h>
#endif // HAVE_DLOPEN

#include "modules.h"

extern "C"
{
    typedef MUX_RESULT FPGETCLASSOBJECT(UINT64 cid, UINT64 iid, void **ppv);
};

MUX_RESULT mux_CreateInstance(UINT64 cid, UINT64 iid, void **ppv)
{
#ifdef WIN32
    HINSTANCE hInst = LoadLibrary(L"bin\\sample.dll");
    if (hInst)
    {
        FPGETCLASSOBJECT *fpGetClassObject = (FPGETCLASSOBJECT *)GetProcAddress(hInst, "mux_GetClassObject");
        if (NULL != fpGetClassObject)
        {
            mux_IClassFactory *pIClassFactory = NULL;
            MUX_RESULT mr = fpGetClassObject(cid, mux_IID_IClassFactory, (void **)&pIClassFactory);
            if (  MUX_SUCCEEDED(mr)
               && NULL != pIClassFactory)
            {
                mr = pIClassFactory->CreateInstance(iid, ppv);
                pIClassFactory->Release();
            }
            return mr;
        }
    }
#else // !WIN32
#ifdef HAVE_DLOPEN
    void *mh = dlopen("bin/sample.so", RTLD_LAZY);
    if (NULL != mh)
    {
        FPGETCLASSOBJECT *fpGetClassObject = (FPGETCLASSOBJECT *)dlsym(mh, "mux_GetClassObject");
        if (NULL != fpGetClassObject)
        {
            mux_IClassFactory *pIClassFactory = NULL;
            MUX_RESULT mr = fpGetClassObject(cid, mux_IID_IClassFactory, (void **)&pIClassFactory);
            if (  MUX_SUCCEEDED(mr)
               && NULL != pIClassFactory)
            {
                mr = pIClassFactory->CreateInstance(iid, ppv);
                pIClassFactory->Release();
            }
            return mr;
        }
    }
#endif // HAVE_DLOPEN
#endif // !WIN32
    return MUX_E_CLASSNOTAVAILABLE;
}
