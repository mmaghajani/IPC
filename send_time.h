/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SEND_TIME_H_RPCGEN
#define _SEND_TIME_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct datetime {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int sec;
};
typedef struct datetime datetime;

#define SEND_TIME 0x2fffffff
#define SEND_TIME_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define SEND 1
extern  datetime * send_1(void *, CLIENT *);
extern  datetime * send_1_svc(void *, struct svc_req *);
extern int send_time_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SEND 1
extern  datetime * send_1();
extern  datetime * send_1_svc();
extern int send_time_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_datetime (XDR *, datetime*);

#else /* K&R C */
extern bool_t xdr_datetime ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SEND_TIME_H_RPCGEN */
