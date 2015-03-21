
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las columnas y las filas se representan en el arreglo de la siguiente manera: [columnas][filas]
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{
    return grafo[inicio][destino]; // obtenemos el peso directo entre el nodo inicial y el destino
}

vector<int> obtenerListaDeAristas(int grafo[5][5], int inicio)
{
    vector<int> respuesta;
    return respuesta;
}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
    if(profundidad <0) // seteamos la profundidad y si es menos que cero no encontra nada y sale del ciclo
      return false;

    if(inicio==destino) // checamos que el inicio sea igual destino
      return true;

      for(int i=0; i<5; i++) // creamos un ciclo para verificar en las otras aristas
      {
          if(grafo[inicio][i]!=infinito)// verificamos que exista el camino
             {
                if(existeCamino(grafo,i,destino,profundidad-1))// hacemos recursion comnprobando si existe el camino
                    return true;
             }
      }
      return false; // retorna falso si no encuentra nada
}

int main ()
{
    evaluar();

    return 1;
}
