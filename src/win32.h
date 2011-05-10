/* win32.h
 *
 */

#ifndef WIN32_H
#define WIN32_H

#undef  _WIN32_WINNT
#define _WIN32_WINNT    0x0501        /* Needed to resolve getaddrinfo et al. */

#include <winsock2.h>
#include <ws2tcpip.h>

#include <sys/types.h>
#include <stdio.h>
#include <io.h>
#include <time.h>
#include <fcntl.h>
#include <errno.h>
#include <stdint.h>
#include <process.h>

#if !defined(strtok_r)
#define strtok_r( _s, _sep, _lasts ) \
        ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif /* strtok_r */

#if !defined(localtime_s)
#define localtime_s(_s, _t) \
     ( memcpy((_s), localtime((_t)), sizeof(*(_s))) )
#endif

#if !defined(gmtime_s)
#define gmtime_s(_s, _t) \
     ( memcpy((_s), gmtime((_t)), sizeof(*(_s))))
#endif

#endif

