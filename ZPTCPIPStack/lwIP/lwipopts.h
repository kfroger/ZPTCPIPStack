#ifndef LWIP_CUSTOM_LWIPOPTS_H
#define LWIP_CUSTOM_LWIPOPTS_H

//  NO SYS
#define NO_SYS                  1
#define LWIP_TIMERS             0

//  IPv4 & IPv6 options
#define LWIP_IPV4                  1
#define LWIP_IPV6                  1

//  Core locking
#define LWIP_TCPIP_CORE_LOCKING 0
#define SYS_LIGHTWEIGHT_PROT    0

//  Memory options
#define MEM_LIBC_MALLOC         1
#define MEMP_MEM_MALLOC         1
/*
 https://developer.apple.com/library/content/documentation/Performance/Conceptual/ManagingMemory/Articles/MemoryAlloc.html
 */
#define MEM_ALIGNMENT           16 /* or 8 ? uncertainly... */

//  IP options
#define IP_FRAG                 0

//  ARP options
#define LWIP_ARP                0

//  ICMP options
#define LWIP_ICMP               0

//  UDP options
#define LWIP_UDP                0

/* ---------- TCP options ---------- */
#define LWIP_TCP                1
#define TCP_TTL                 255
#define LWIP_HAVE_MBEDTLS 1
#ifndef LWIP_MBEDTLSDIR
#define LWIP_MBEDTLSDIR "../../mbedtls/"
#endif

#define LWIP_ALTCP              (LWIP_TCP)
#ifdef LWIP_HAVE_MBEDTLS
#define LWIP_ALTCP_TLS          (LWIP_TCP)
#define LWIP_ALTCP_TLS_MBEDTLS  (LWIP_TCP)
#endif

/*
 * `65535`: the maximum IP packet size
 * `60`: max IP header length
 * `60`: max TCP header length
 */
#define TCP_WND                 (20* 1024)
// #define TCP_MSS                 (TCP_WND / 2)
// #define TCP_SND_BUF             (TCP_WND)
#define TCP_MSS                 1024
#define TCP_SND_BUF             2048
#define LWIP_EVENT_API          0
#define LWIP_CALLBACK_API       1

//  LOOPIF options
#define LWIP_NETIF_LOOPBACK     0

//  Sequential layer options
#define LWIP_NETCONN            0

//  Socket options
#define LWIP_SOCKET             0
#define LWIP_TCP_KEEPALIVE      1

//  Statistics options
#define LWIP_STATS              0

//  PPP options
#define PPP_SUPPORT             0

//  Other
#define LWIP_DONT_PROVIDE_BYTEORDER_FUNCTIONS

//  Debug
#define LWIP_DEBUG              LWIP_DBG_ON
#define IP_DEBUG                LWIP_DBG_ON

#endif /* LWIP_CUSTOM_LWIPOPTS_H */
