/*Declaracion de datos a transferir entre el cliente y el servidor*/

/*Declaracion de constantes*/
const MAXNOM = 20;

/*Declaracion de la estructura que permite almacenar los datos de un producto*/
struct nodo_producto{
	int codigoProducto;
	char nombre[MAXNOM];	
	float valor;	
};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_productos{
	version gestion_productos_version_1{
		bool registrarProducto(nodo_producto objProducto)=1;
		nodo_producto consultarProducto(string nombre)=2;
	}=2;
}=0x20000002;
