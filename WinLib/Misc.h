#ifndef	__MISC_H__
#define	__MISC_H__

#include <mbctype.h>

#ifndef	_MAX_PATH
#define	_MAX_PATH	260
#endif

#define	UC(c)	(unsigned char)(c)

typedef	unsigned char	byte_t;

const	COLORREF	WhitePixel = RGB(255, 255, 255);
const	COLORREF	BlackPixel = RGB(0, 0, 0);
const	COLORREF	GrayPixel = RGB(128, 128, 192);
const	COLORREF	RedPixel = RGB(255, 96, 96);

BOOL	FullPath(char *path, const char *file);

inline int Rand(int fact) { return rand() % fact; }

class CSecurityAttributes: public _SECURITY_ATTRIBUTES {
  public:
	CSecurityAttributes(void *sd=NULL, BOOL ih=FALSE)
	{
		nLength = sizeof(SECURITY_ATTRIBUTES);
		lpSecurityDescriptor = sd;
		bInheritHandle = ih;
	}
} ;

#ifdef _DEBUG

void __cdecl DebugPrintf(const char *fmt, ...);
#define	TRACE	::DebugPrintf

bool AssertFailed(const char *expr, const char *file, unsigned line);

#define	ASSERT(exp)	\
	do \
		if (!(exp) && AssertFailed(#exp, __FILE__, __LINE__)) \
			DebugBreak(); \
	while (0)

#else

inline void __cdecl DebugPrintf(const char *, ...) { }
#define	TRACE	1? (void)0: ::DebugPrintf

#define ASSERT(exp)	(void)(0)

#endif

#pragma warning(disable: 4127)

#endif
