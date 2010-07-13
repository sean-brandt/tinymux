#ifndef _T6HGAME_H_
#define _T6HGAME_H_

#define T6H_V_MASK          0x000000ffUL
#define T6H_V_ZONE          0x00000100UL
#define T6H_V_LINK          0x00000200UL
#define T6H_V_GDBM          0x00000400UL
#define T6H_V_ATRNAME       0x00000800UL
#define T6H_V_ATRKEY        0x00001000UL
#define T6H_V_PERNKEY       0x00001000UL
#define T6H_V_PARENT        0x00002000UL
#define T6H_V_COMM          0x00004000UL
#define T6H_V_ATRMONEY      0x00008000UL
#define T6H_V_XFLAGS        0x00010000UL
#define T6H_V_POWERS        0x00020000UL
#define T6H_V_3FLAGS        0x00040000UL
#define T6H_V_QUOTED        0x00080000UL
#define T6H_V_TQUOTAS       0x00100000UL
#define T6H_V_TIMESTAMPS    0x00200000UL
#define T6H_V_VISUALATTRS   0x00400000UL
#define T6H_V_CREATETIME    0x00800000UL
#define T6H_V_DBCLEAN       0x80000000UL

#define T6H_MANDFLAGS_V1  (T6H_V_LINK|T6H_V_PARENT|T6H_V_XFLAGS|T6H_V_ZONE|T6H_V_POWERS|T6H_V_3FLAGS|T6H_V_QUOTED)
#define T6H_OFLAGS_V1     (T6H_V_GDBM|T6H_V_ATRKEY|T6H_V_ATRNAME|T6H_V_ATRMONEY)

#define A_USER_START    256     // Start of user-named attributes.

// Object types
//
#define T6H_TYPE_ROOM     0x0
#define T6H_TYPE_THING    0x1
#define T6H_TYPE_EXIT     0x2
#define T6H_TYPE_PLAYER   0x3
#define T6H_TYPE_GARBAGE  0x5
#define T6H_NOTYPE        0x7
#define T6H_TYPE_MASK     0x7

#define ATR_INFO_CHAR 0x01

// Attribute flags.
//
#define T6H_AF_ODARK        0x00000001UL
#define T6H_AF_DARK         0x00000002UL
#define T6H_AF_WIZARD       0x00000004UL
#define T6H_AF_MDARK        0x00000008UL
#define T6H_AF_INTERNAL     0x00000010UL
#define T6H_AF_NOCMD        0x00000020UL
#define T6H_AF_LOCK         0x00000040UL
#define T6H_AF_DELETED      0x00000080UL
#define T6H_AF_NOPROG       0x00000100UL
#define T6H_AF_GOD          0x00000200UL
#define T6H_AF_IS_LOCK      0x00000400UL
#define T6H_AF_VISUAL       0x00000800UL
#define T6H_AF_PRIVATE      0x00001000UL
#define T6H_AF_HTML         0x00002000UL
#define T6H_AF_NOPARSE      0x00004000UL
#define T6H_AF_REGEXP       0x00008000UL
#define T6H_AF_NOCLONE      0x00010000UL
#define T6H_AF_CONST        0x00020000UL
#define T6H_AF_CASE         0x00040000UL
#define T6H_AF_STRUCTURE    0x00080000UL
#define T6H_AF_DIRTY        0x00100000UL
#define T6H_AF_DEFAULT      0x00200000UL
#define T6H_AF_NONAME       0x00400000UL
#define T6H_AF_RMATCH       0x00800000UL
#define T6H_AF_NOW          0x01000000UL
#define T6H_AF_TRACE        0x02000000UL

// Attribute numbers
//
#define T6H_A_QUOTA          49
#define T6H_A_MAILCC        198
#define T6H_A_MAILBCC       199
#define T6H_A_NEWOBJS       213
#define T6H_A_LCON_FMT      214
#define T6H_A_LEXITS_FMT    215
#define T6H_A_LASTIP        218
#define T6H_A_LDARK         219
#define T6H_A_NAME_FMT      222
#define T6H_A_LKNOWN        223
#define T6H_A_LHEARD        224
#define T6H_A_LMOVED        225
#define T6H_A_LKNOWS        226
#define T6H_A_LHEARS        227
#define T6H_A_LMOVES        228
#define T6H_A_SPEECHFMT     229
#define T6H_A_PAGEGROUP     230
#define T6H_A_PROPDIR       231

// Object Flagword 1
//
#define T6H_SEETHRU         0x00000008UL
#define T6H_WIZARD          0x00000010UL
#define T6H_LINK_OK         0x00000020UL
#define T6H_DARK            0x00000040UL
#define T6H_JUMP_OK         0x00000080UL
#define T6H_STICKY          0x00000100UL
#define T6H_DESTROY_OK      0x00000200UL
#define T6H_HAVEN           0x00000400UL
#define T6H_QUIET           0x00000800UL
#define T6H_HALT            0x00001000UL
#define T6H_TRACE           0x00002000UL
#define T6H_GOING           0x00004000UL
#define T6H_MONITOR         0x00008000UL
#define T6H_MYOPIC          0x00010000UL
#define T6H_PUPPET          0x00020000UL
#define T6H_CHOWN_OK        0x00040000UL
#define T6H_ENTER_OK        0x00080000UL
#define T6H_VISUAL          0x00100000UL
#define T6H_IMMORTAL        0x00200000UL
#define T6H_HAS_STARTUP     0x00400000UL
#define T6H_OPAQUE          0x00800000UL
#define T6H_VERBOSE         0x01000000UL
#define T6H_INHERIT         0x02000000UL
#define T6H_NOSPOOF         0x04000000UL
#define T6H_ROBOT           0x08000000UL
#define T6H_SAFE            0x10000000UL
#define T6H_ROYALTY         0x20000000UL
#define T6H_HEARTHRU        0x40000000UL
#define T6H_TERSE           0x80000000UL

// Object Flagword 2
//
#define T6H_KEY             0x00000001UL
#define T6H_ABODE           0x00000002UL
#define T6H_FLOATING        0x00000004UL
#define T6H_UNFINDABLE      0x00000008UL
#define T6H_PARENT_OK       0x00000010UL
#define T6H_LIGHT           0x00000020UL
#define T6H_HAS_LISTEN      0x00000040UL
#define T6H_HAS_FWDLIST     0x00000080UL
#define T6H_AUDITORIUM      0x00000100UL
#define T6H_ANSI            0x00000200UL
#define T6H_HEAD_FLAG       0x00000400UL
#define T6H_FIXED           0x00000800UL
#define T6H_UNINSPECTED     0x00001000UL
#define T6H_ZONE_PARENT     0x00002000UL
#define T6H_DYNAMIC         0x00004000UL
#define T6H_NOBLEED         0x00008000UL
#define T6H_STAFF           0x00010000UL
#define T6H_HAS_DAILY       0x00020000UL
#define T6H_GAGGED          0x00040000UL
#define T6H_HAS_COMMANDS    0x00080000UL
#define T6H_STOP_MATCH      0x00100000UL
#define T6H_BOUNCE          0x00200000UL
#define T6H_CONTROL_OK      0x00400000UL
#define T6H_CONSTANT_ATTRS  0x00800000UL
#define T6H_VACATION        0x01000000UL
#define T6H_PLAYER_MAILS    0x02000000UL
#define T6H_HTML            0x04000000UL
#define T6H_BLIND           0x08000000UL
#define T6H_SUSPECT         0x10000000UL
#define T6H_WATCHER         0x20000000UL
#define T6H_CONNECTED       0x40000000UL
#define T6H_SLAVE           0x80000000UL

// Object Flagword 3
//
#define T6H_REDIR_OK        0x00000001UL
#define T6H_HAS_REDIRECT    0x00000002UL
#define T6H_ORPHAN          0x00000004UL
#define T6H_HAS_DARKLOCK    0x00000008UL
#define T6H_DIRTY           0x00000010UL
#define T6H_NODEFAULT       0x00000020UL
#define T6H_PRESENCE        0x00000040UL
#define T6H_HAS_SPEECHMOD   0x00000080UL
#define T6H_HAS_PROPDIR     0X00000100UL
#define T6H_MARK_0          0x00400000UL
#define T6H_MARK_1          0x00800000UL
#define T6H_MARK_2          0x01000000UL
#define T6H_MARK_3          0x02000000UL
#define T6H_MARK_4          0x04000000UL
#define T6H_MARK_5          0x08000000UL
#define T6H_MARK_6          0x10000000UL
#define T6H_MARK_7          0x20000000UL
#define T6H_MARK_8          0x40000000UL
#define T6H_MARK_9          0x80000000UL

class P6H_LOCKEXP;

class T6H_LOCKEXP
{
public:
    typedef enum
    {
        le_is,
        le_carry,
        le_indirect,
        le_owner,
        le_and,
        le_or,
        le_not,
        le_attr,
        le_eval,
        le_ref,
        le_text,
        le_none,
    } T6H_OP;

    T6H_OP m_op;

    T6H_LOCKEXP *m_le[2];
    int          m_dbRef;
    char        *m_p[2];

    void SetIs(T6H_LOCKEXP *p)
    {
        m_op = le_is;
        m_le[0] = p;
    }
    void SetCarry(T6H_LOCKEXP *p)
    {
        m_op = le_carry;
        m_le[0] = p;
    }
    void SetIndir(T6H_LOCKEXP *p)
    {
        m_op = le_indirect;
        m_le[0] = p;
    }
    void SetOwner(T6H_LOCKEXP *p)
    {
        m_op = le_owner;
        m_le[0] = p;
    }
    void SetAnd(T6H_LOCKEXP *p, T6H_LOCKEXP *q)
    {
        m_op = le_and;
        m_le[0] = p;
        m_le[1] = q;
    }
    void SetOr(T6H_LOCKEXP *p, T6H_LOCKEXP *q)
    {
        m_op = le_or;
        m_le[0] = p;
        m_le[1] = q;
    }
    void SetNot(T6H_LOCKEXP *p)
    {
        m_op = le_not;
        m_le[0] = p;
    }
    void SetAttr(T6H_LOCKEXP *p, T6H_LOCKEXP *q)
    {
        m_op = le_attr;
        m_le[0] = p;
        m_le[1] = q;
    }
    void SetEval(T6H_LOCKEXP *p, T6H_LOCKEXP *q)
    {
        m_op = le_eval;
        m_le[0] = p;
        m_le[1] = q;
    }
    void SetRef(int dbRef)
    {
        m_op = le_ref;
        m_dbRef = dbRef;
    }
    void SetText(char *p)
    {
        m_op = le_text;
        m_p[0] = p;
    }

    void Write(FILE *fp);
    char *Write(char *p);

    bool ConvertFromP6H(P6H_LOCKEXP *p);

    T6H_LOCKEXP()
    {
        m_op = le_none;
        m_le[0] = m_le[1] = NULL;
        m_p[0] = m_p[1] = NULL;
        m_dbRef = 0;
    }
    ~T6H_LOCKEXP()
    {
        delete m_le[0];
        delete m_le[1];
        free(m_p[0]);
        free(m_p[1]);
        m_le[0] = m_le[1] = NULL;
        m_p[0] = m_p[1] = NULL;
    }
};

class T6H_ATTRNAMEINFO
{
public:
    bool  m_fNumAndName;
    int   m_iNum;
    char *m_pName;
    void  SetNumAndName(int iNum, char *pName);

    void Validate(int ver) const;

    void Write(FILE *fp, bool fExtraEscapes);

    T6H_ATTRNAMEINFO()
    {
        m_fNumAndName = false;
        m_pName = NULL;
    }
    ~T6H_ATTRNAMEINFO()
    {
        free(m_pName);
        m_pName = NULL;
    }
};

class T6H_ATTRINFO
{
public:
    bool m_fNumAndValue;
    int  m_iNum;
    char *m_pValue;
    void SetNumAndValue(int iNum, char *pValue);

    bool m_fIsLock;
    T6H_LOCKEXP *m_pKeyTree;

    void Validate() const;

    void Write(FILE *fp, bool fExtraEscapes) const;

    T6H_ATTRINFO()
    {
        m_fNumAndValue = false;
        m_fIsLock = false;
        m_pValue = NULL;
        m_pKeyTree = NULL;
    }
    ~T6H_ATTRINFO()
    {
        free(m_pValue);
        delete m_pKeyTree;
        m_pValue = NULL;
        m_pKeyTree = NULL;
    }
};

class T6H_OBJECTINFO
{
public:
    bool m_fRef;
    int  m_dbRef;
    void SetRef(int dbRef) { m_fRef = true; m_dbRef = dbRef; }

    char *m_pName;
    void SetName(char *p);

    bool m_fLocation;
    int  m_dbLocation;
    void SetLocation(int dbLocation) { m_fLocation = true; m_dbLocation = dbLocation; }

    bool m_fContents;
    int  m_dbContents;
    void SetContents(int dbContents) { m_fContents = true; m_dbContents = dbContents; }

    bool m_fExits;
    int  m_dbExits;
    void SetExits(int dbExits) { m_fExits = true; m_dbExits = dbExits; }

    bool m_fNext;
    int  m_dbNext;
    void SetNext(int dbNext) { m_fNext = true; m_dbNext = dbNext; }

    bool m_fParent;
    int  m_dbParent;
    void SetParent(int dbParent) { m_fParent = true; m_dbParent = dbParent; }

    bool m_fOwner;
    int  m_dbOwner;
    void SetOwner(int dbOwner) { m_fOwner = true; m_dbOwner = dbOwner; }

    bool m_fZone;
    int  m_dbZone;
    void SetZone(int dbZone) { m_fZone = true; m_dbZone = dbZone; }

    bool m_fPennies;
    int  m_iPennies;
    void SetPennies(int iPennies) { m_fPennies = true; m_iPennies = iPennies; }

    bool m_fFlags1;
    int  m_iFlags1;
    void SetFlags1(int iFlags1) { m_fFlags1 = true; m_iFlags1 = iFlags1; }

    bool m_fFlags2;
    int  m_iFlags2;
    void SetFlags2(int iFlags2) { m_fFlags2 = true; m_iFlags2 = iFlags2; }

    bool m_fFlags3;
    int  m_iFlags3;
    void SetFlags3(int iFlags3) { m_fFlags3 = true; m_iFlags3 = iFlags3; }

    bool m_fPowers1;
    int  m_iPowers1;
    void SetPowers1(int iPowers1) { m_fPowers1 = true; m_iPowers1 = iPowers1; }

    bool m_fPowers2;
    int  m_iPowers2;
    void SetPowers2(int iPowers2) { m_fPowers2 = true; m_iPowers2 = iPowers2; }

    bool m_fLink;
    int  m_dbLink;
    void SetLink(int dbLink) { m_fLink = true; m_dbLink = dbLink; }

    bool m_fAttrCount;
    int  m_nAttrCount;
    vector<T6H_ATTRINFO *> *m_pvai;
    void SetAttrs(int nAttrCount, vector<T6H_ATTRINFO *> *pvai);

    T6H_LOCKEXP *m_ple;
    void SetDefaultLock(T6H_LOCKEXP *p) { free(m_ple); m_ple = p; }

    bool m_fAccessed;
    int  m_iAccessed;
    void SetAccessed(int iAccessed) { m_fAccessed = true; m_iAccessed = iAccessed; }

    bool m_fModified;
    int  m_iModified;
    void SetModified(int iModified) { m_fModified = true; m_iModified = iModified; }

    bool m_fCreated;
    int  m_iCreated;
    void SetCreated(int iCreated) { m_fCreated = true; m_iCreated = iCreated; }

    void Validate() const;

    void Write(FILE *fp, bool bWriteLock, bool fExtraEscapes);

    T6H_OBJECTINFO()
    {
        m_fRef = false;
        m_pName = NULL;
        m_fLocation = false;
        m_fContents = false;
        m_fExits = false;
        m_fNext = false;
        m_fParent = false;
        m_fOwner = false;
        m_fZone = false;
        m_fPennies = false;
        m_fFlags1 = false;
        m_fFlags2 = false;
        m_fFlags3 = false;
        m_fPowers1 = false;
        m_fPowers2 = false;
        m_fAttrCount = false;
        m_fAccessed = false;
        m_fModified = false;
        m_fCreated = false;
        m_pvai = NULL;
        m_ple = NULL;
    }
    ~T6H_OBJECTINFO()
    {
        free(m_pName);
        delete m_ple;
        m_pName = NULL;
        m_ple = NULL;
        if (NULL != m_pvai)
        {
            for (vector<T6H_ATTRINFO *>::iterator it = m_pvai->begin(); it != m_pvai->end(); ++it)
            {
               delete *it;
            }
            delete m_pvai;
            m_pvai = NULL;
        }
    }
};


class T6H_GAME
{
public:
    int  m_flags;
    void SetFlags(int flags) { m_flags = flags; }
    int  GetFlags()          { return m_flags;  }

    bool m_fSizeHint;
    int  m_nSizeHint;
    void SetSizeHint(int nSizeHint) { m_fSizeHint = true; m_nSizeHint = nSizeHint; }

    bool m_fNextAttr;
    int  m_nNextAttr;
    void SetNextAttr(int nNextAttr) { m_fNextAttr = true; m_nNextAttr = nNextAttr; }

    bool m_fRecordPlayers;
    int  m_nRecordPlayers;
    void SetRecordPlayers(int nRecordPlayers) { m_fRecordPlayers = true; m_nRecordPlayers = nRecordPlayers; }

    vector<T6H_ATTRNAMEINFO *> m_vAttrNames;
    void AddNumAndName(int iNum, char *pName);

    map<int, T6H_OBJECTINFO *, lti> m_mObjects;
    void AddObject(T6H_OBJECTINFO *poi);

    void Validate() const;
    void ValidateFlags() const;
    void ValidateAttrNames(int ver) const;
    void ValidateObjects() const;

    void Write(FILE *fp);

    void ConvertFromP6H();

    void ResetPassword();

    T6H_GAME()
    {
        m_flags = 0;
        m_fSizeHint = false;
        m_fNextAttr = false;
        m_fRecordPlayers = false;
    }
    ~T6H_GAME()
    {
        for (vector<T6H_ATTRNAMEINFO *>::iterator it = m_vAttrNames.begin(); it != m_vAttrNames.end(); ++it)
        {
            delete *it;
        }
        m_vAttrNames.clear();
        for (map<int, T6H_OBJECTINFO *, lti>::iterator it = m_mObjects.begin(); it != m_mObjects.end(); ++it)
        {
            delete it->second;
        }
        m_mObjects.clear();
    }
};

extern T6H_GAME g_t6hgame;
extern int t6hparse();
extern FILE *t6hin;

char *t6h_ConvertAttributeName(const char *);

#endif