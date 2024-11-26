# MB_Caso_Final_Integrador_Tema_3

https://github.com/MarcBaleiron/MB_Caso_Final_Integrador_Tema_3.git

# 1. Carga de scripts en tiny-lisp
El módulo Labmain.cpp define la función load_script(), que se utiliza para cargar un script en la memoria y aplicarle la coloración sintáctica. Esta función se basa en la librería estándar de C.

Implementa las funciones load_script() y load_script(filename, true) en CLion, de tal manera que puedas abrir y leer archivos de texto. El primer método toma el nombre de un archivo como entrada del usuario, mientras que el segundo muestra el contenido del archivo. Ambos métodos deben cargar el script en la consola.

void load_script(const char* filename, bool show_script = false);
void load_script();


# 2. Asegurando la robustez del código
Asegúrate de que tu código pueda manejar diferentes tipos de errores de entrada. Esto incluye, pero no se limita a:

El usuario proporciona un nombre de archivo que no existe.
El archivo proporcionado no se puede abrir por alguna razón.
Se produce un error de lectura durante la lectura del archivo.
Para manejar estos y otros errores potenciales, es posible que desees agregar comprobaciones de errores adicionales y manejar los fallos de manera más sofisticada.


# 3. Corrije el ejercicio de tu compañero y sub tu valoración a tu readme
Notas
Este ejercicio no requiere el uso de funciones seguras específicas de Microsoft (las funciones con sufijo _s). En cambio, deberías usar las funciones estándar de C/C++ disponibles en todas las plataformas y compiladores, como fopen, printf y scanf.


Rúbrica
Carga de scripts (50 puntos)

Se proporciona una implementación correcta de load_script(const char* filename, bool show_script = false) que carga correctamente el archivo dado y muestra su contenido si show_script es verdadero. (25 puntos)
Se proporciona una implementación correcta de load_script() que solicita al usuario un nombre de archivo, llama a la función load_script(const char* filename, bool show_script = false) y maneja cualquier error de manera apropiada. (25 puntos)
Manejo de errores (50 puntos)

El código tiene un manejo de errores sólido y completo para el caso de que el nombre del archivo proporcionado no exista. (15 puntos)
El código tiene un manejo de errores sólido y completo para el caso de que el archivo proporcionado no se pueda abrir por alguna razón. (15 puntos)
El código tiene un manejo de errores sólido y completo para el caso de que se produzca un error de lectura durante la lectura del archivo. (20 puntos)


# Pautas finales
Este código debería compilar y funcionar en CLion sin necesidad de agregar la directiva _CRT_SECURE_NO_WARNINGS, ya que no se están utilizando las versiones seguras específicas de Microsoft de las funciones de la biblioteca estándar de C.

Por último, ten en cuenta que este código no realiza una comprobación completa de errores y no es robusto contra varios tipos de errores de entrada. Dependiendo de tu caso de uso específico, es posible que desees agregar comprobaciones de errores adicionales y manejar los fallos de manera más sofisticada.



# Correción del código de Leo Seguín Sánchez
## Readme: 
Toda la información del ejercicio está presente y organizada correctamente, pudiendo entender el objetivo del mismo.

El Readme.md está espléndidamente organizado.

## Código General:
El código cumple con todo lo pedido en el enunciado.

Se manejan los posibles errores de una manera adecuada mediante el uso de try y catch.

El código está magníficamente comentado, explicando cada parte del código de manera detellada.

## Código Específico:
finalintegrador.h define correctamente las funciones.

finalintegrador.cpp usa correctamente las dos variantes de load_script(), tanto la que hace uso de la entrada del usuario como la que hace uso de valores predeterminados.

main.cpp es calro y conciso, llamando coreectamente a la función.

## Conclusión
El código se ha completado de manera precisa, completando todas las tareas requeridas excelentemente.

No es necesario el hacer nungún cambio en el código.
