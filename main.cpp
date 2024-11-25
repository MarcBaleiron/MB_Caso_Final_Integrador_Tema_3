#include <iostream>
#include "tinylisp.h"

using namespace std;

int main ()
{
    cout << "Probando con un archivo especifico:\n";
    load_script ("script_prueba.txt", true);

    cout << "\nProbando pidiendo el nombre del archivo al usuario:\n";
    load_script ();

    return 0;
}