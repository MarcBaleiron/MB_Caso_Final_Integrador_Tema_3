#include "tinylisp.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// Implementacion de los colores
struct ColorConsole
{
    static constexpr auto fg_blue = "\033[34m";   // Azul
    static constexpr auto reset = "\033[0m";      // Resetear color
};


// Implementacion de la clase ConsoleBox
struct ConsoleBox
{
    void new_text () {/*...*/}
    void set_text (const string &text) { cout << text << endl; }
};

ConsoleBox* consoleBox = new ConsoleBox;

// Implementacion de la función load_script
void load_script (const char* filename, bool show_script)
{
    string script;
    FILE* f = nullptr;

    try
    {
        // Abrir el archivo
        f = fopen (filename, "rb");
        if (!f)
        {
            cerr << "Error: No se pudo abrir el archivo '" << filename << endl;
            return;
        }

        // Leer el contenido del archivo
        char buf [4001];
        int c;
        while ((c = fread (buf, 1, 4000, f)) > 0)
        {
            buf [c] = 0;
            script.append (buf);
        }

        // Cerrar el archivo
        fclose (f);
        f = nullptr;

        // Mostrar el contenido si show_script es true
        if (show_script)
        {
            cout << ColorConsole::fg_blue << "Contenido del archivo:\n" << script << ColorConsole::reset << endl;
        }

        // Simular cargar el texto en un editor
        consoleBox -> new_text ();
        consoleBox -> set_text (script);

    }
    catch (...)
    {
        // Manejo de errores genericos
        cerr << "Error: Se produjo un error durante la lectura del archivo." << endl;
        if (f) fclose (f);
    }
}

// Implementacion de la función load_script sin argumentos
void load_script ()
{
    char filename [500];  // Buffer para almacenar el nombre del archivo
    printf ("Introduce el nombre del archivo: ");
    scanf ("%499s", filename);

    // Llamar a la funcion principal con show_script = true
    load_script (filename, true);
}