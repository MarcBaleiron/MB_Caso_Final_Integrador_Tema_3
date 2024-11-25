#include <iostream>
#include "tinylisp.h"
using namespace std;

int main ()
{
    // Llamada a la funcion load_script con valores determinados
    cout << "Probando con un archivo especifico:\n";
    load_script ("script_prueba.txt", true);

    //Llamada a la funcion load_script con input del usuario
    cout << "\nProbando pidiendo el nombre del archivo al usuario:\n";
    load_script ();

    return 0;
}