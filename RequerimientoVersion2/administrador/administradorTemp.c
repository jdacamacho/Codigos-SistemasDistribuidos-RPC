/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface2.h"


void
gestion_productos_2(char *host)
{
	CLIENT *clnt;
	bool_t  *result_1;
	nodo_producto  administradorregistrarproductoofertar_2_arg;
	void  *result_2;
	char *listarproductosofertarcliente_2_arg;
	bool_t  *result_3;
	int  abrircerrarsubasta_2_arg;
	void  *result_4;
	char *listarproductoscliente_2_arg;
	nodo_producto  *result_5;
	char * consultarproducto_2_arg;
	void  *result_6;
	char *consultardatosproductoactualsubastando_2_arg;
	void  *result_7;
	char *ofreceroferta_2_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_productos, gestion_productos_version_1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = administradorregistrarproductoofertar_2(&administradorregistrarproductoofertar_2_arg, clnt);
	if (result_1 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = listarproductosofertarcliente_2((void*)&listarproductosofertarcliente_2_arg, clnt);
	if (result_2 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = abrircerrarsubasta_2(&abrircerrarsubasta_2_arg, clnt);
	if (result_3 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = listarproductoscliente_2((void*)&listarproductoscliente_2_arg, clnt);
	if (result_4 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = consultarproducto_2(&consultarproducto_2_arg, clnt);
	if (result_5 == (nodo_producto *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = consultardatosproductoactualsubastando_2((void*)&consultardatosproductoactualsubastando_2_arg, clnt);
	if (result_6 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = ofreceroferta_2((void*)&ofreceroferta_2_arg, clnt);
	if (result_7 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	gestion_productos_2 (host);
exit (0);
}
