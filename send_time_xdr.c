/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "send_time.h"

bool_t
xdr_datetime (XDR *xdrs, datetime *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->year))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->month))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->day))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->hour))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->minute))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sec))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->year);
			IXDR_PUT_LONG(buf, objp->month);
			IXDR_PUT_LONG(buf, objp->day);
			IXDR_PUT_LONG(buf, objp->hour);
			IXDR_PUT_LONG(buf, objp->minute);
			IXDR_PUT_LONG(buf, objp->sec);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->year))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->month))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->day))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->hour))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->minute))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->sec))
				 return FALSE;
		} else {
			objp->year = IXDR_GET_LONG(buf);
			objp->month = IXDR_GET_LONG(buf);
			objp->day = IXDR_GET_LONG(buf);
			objp->hour = IXDR_GET_LONG(buf);
			objp->minute = IXDR_GET_LONG(buf);
			objp->sec = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->year))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->month))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->day))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->hour))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->minute))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sec))
		 return FALSE;
	return TRUE;
}
