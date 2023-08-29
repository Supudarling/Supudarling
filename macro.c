#ifndef _DEFAULT
#define _DEFAULT

 

#if defined(__WIN32__) || defined(_WIN32)
#   include "tkWinDefault.h"
#else
#   if defined(MAC_TCL)
#       include "tkMacDefault.h"
#   else
#       include "tkUnixDefault.h"
#   endif
#endif

 

#endif /* _DEFAULT */
