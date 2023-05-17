//archivo de cabecera  pilalineal.h 
#include <pilalineal.h>



typedef tipo TipoDeDato; //tipo de elementos en la pila
const int TAMPILA = 49;
class PilaLineal{
	private:
		int cima;
		TipoDeDato listaPila[TAMPILA];
	public:
		PilaLineal(){
			cima = -1 //condicion pila vacia
		}
		//operaciones que modifican la pila
		void insertar(TipoDeDato elemento);
		TipoDeDato quitar();
		void limpiarPila();
		//operacion acceso a la pila
		TipoDeDato cimaPila();
		//verficacion estado de la pila
		bool pilaVacia();
		bool pilaLlena();
};


