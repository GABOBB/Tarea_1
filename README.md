este proyecto funciona en dos partes,

generador de numeros random:
este programa sirve para generar un archivo binario con tamano predeterminado de numeros enteros.
para correr este programa deve usarse el siguiente comando:
./generator -size <T> -output <F>
en T {tamano} se selecciona el tamano del archivo las opciones a escoger son: SMALL, MEDIUM or LARGE.
en F {file} se seleccion la direccion del directorio donde se va a generar el archivo.

ordenador(beta):
este programa sirve para organizar archivos generados por el <<generator>>
para correr este programa deve usarse el siguiente comando:
./sorter -input <IF> -output <OF> -alg <SA>
en IF {input file path} se introduce la direccion del archivo que se debe ordenar.
en OF {output file path} se introduce el directorio donde el archivo ordenado se va a guardar.
en SA {sort algorithm} se introduce uno de los algoritmos a escoger: QS{quick sort}, IS{insertion sort} or BS{bubble sort}.
