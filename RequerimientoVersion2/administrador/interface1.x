/*Definicion de las operaciones que se pueden realizar*/

const MAXNOM = 20;

struct nodo_usuario{	
	char login[MAXNOM];	
	char contrasenia[MAXNOM];	
};


program gestion_usuarios{
	version gestion_usuarios_version_1{
		bool registrarAdministrador(nodo_usuario objUsuario)=1;
		bool registrarCliente(nodo_usuario objUsuario)=2;
		bool enviarDatosSesionAdministrador(nodo_usuario objUsuario)=3;	
		bool enviarDatosSesionCliente(nodo_usuario objUsuario)=4;	
	}=1;
}=0x20000001;
