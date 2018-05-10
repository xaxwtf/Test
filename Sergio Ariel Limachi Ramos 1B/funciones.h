typedef struct{
    int id;
    char nombre[20];
    char tarjeta[20];
    char direccion[20];
}eprop;
/** \brief inicializa un array en el valor que indique el programador
 *
 * \param vector: es el array al cual se le asiganara el dato
 * \param tam es el tamaño del array al cual se le asignara el dato
 * \param es el dato que se le asiganara a cada pocicion del array
 * \param desde el Indice a partir del cual le Asignara el valor indicado
 * \return
 *
 */
void inizArray(int vector[],int tam,int valor,int desde);

/** \brief pide un dato, da el mensaje y lo retorna
 *
 * \param mensaje es el mensaje a ser mostrado
 * \return el dato Ingresado por Teclado
 *
 */
int ingrInt(char mensaje[]);


/** \brief solicita una cadena de caracteres al usuario y la guarda en la variable indicada ademas muestra el mensaje indicado
 *
 * \param mensaje: es el mensaje a ser mostrado
 * \param  dato es donde se guardara el dato solicitado al usuario
 * \return
 *
 */
void solCadena(char mensaje[],char dato[]);
/** \brief busca el valor indicado dentro del array
 *
 * \param vector es el array en el cual se reliza la busqueda
 * \param tam es el tamaño del array
 * \param valor es el dato a ser buscando dentro del arrays
 * \return devuelve -1 si no se encuentra el dato o devuelve el indice en el cual se encontro el dato indicado
 *
 */
int busPrimeraOcurrencia(int vector[],int tam, int valor);

/** \brief recibe una cadena de caracteres y devuelve 0 si es una tarjeta y 1 si no lo es
 *
 * \param es el vector a ser analizado
 * \param es el tamaño del vector
 * \return devuelve 0 si es una tarjeta y 1 si no lo es
 *
 */
int esTarjeta(char vec[],int tam);


