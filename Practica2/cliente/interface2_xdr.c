/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "interface2.h"

bool_t
xdr_nodo_producto (XDR *xdrs, nodo_producto *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->codigoProducto))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->valor))
		 return FALSE;
	return TRUE;
}
