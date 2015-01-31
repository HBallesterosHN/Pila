// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{

    return mi_pila.top();
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    //funcion size: devuelve el tamaño de una pila
    return mi_pila.size() ;
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    //Se recorre la pila hasta que este vacia
    //se va comparando cada elemento a ver si es igual a "str"
    while(!mi_pila.empty())
    {
        if (mi_pila.top() == str)
            {
            return true;
            }
        mi_pila.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor =0;//Variable donde se almacenara el mayor elemento de la pila
    while(!mi_pila.empty())//recorre la pila hasta que este vacia
        {
            if (mi_pila.top()> mayor)
                {
                mayor = mi_pila.top();//if compara elemento con mayor y hace asignacion
                }
            mi_pila.pop();
        }
    return mayor;
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor = mi_pila.top(); //variable donde se guarda el menor elemento de la pila
    while(!mi_pila.empty())
        {
            if (mi_pila.top()< menor)
                {
                menor = mi_pila.top();//in compara con menor y hace los cambios de ser necesarios
                }
            mi_pila.pop();
        }
    return menor;
}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
    int contador = mi_pila.size(); //Guarda el tamaño de la pila
    int promedio =0;
            while(!mi_pila.empty())
                {
                    promedio += mi_pila.top();//suma los elementos de la pila
                    mi_pila.pop();
                }
                promedio = promedio / contador;//calcula el promedio
    return promedio;
}
int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
