# GetNextLine
## Sinopsis

#include "get_next_line.h"

int get_next_line(int fd, char **str);

int ft_count_lines(int fd, char **str);

## Descripción

La función get_next_line se encarga de leer una línea de un archivo especificado en el file descriptor (fd). Utilizado en un bucle te permite leer un archivo entero o incluso un libro mientras el archivo del que lea se un archivo de texto.

La función ft_count_lines sirve de apoyo a la función anterior para saber el número de líneas del archivo especificado en el file descriptor (fd).

## Valores de retorno

La función get_next_line devuelve 1 si ha leído correctamente una línea, 0 en caso de que haya llegado al final del archivo o -1 si ha ocurrido algún error.

La función ft_count_lines devuelve el número de líneas del texo que conforma el archivo.

## EXTRAS
Se incluyen también un par de extras cada uno en una carpeta
* ### Bonus
Incluye las mismas funciones y se comportan de la misma manera, pero éste te permite leer varios ficheros al mismo tiempo (Utiliza varios file descriptor a la vez).
* ### Prueba
Son archivos .txt de prueba para probar el funcionamiento de las funciones junto con un main.c que se encarga de ello.
