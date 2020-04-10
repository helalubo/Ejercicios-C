
/** \brief Inicializar el array
 *
 * \param numeros[] int array a ser inicializado
 * \param cant int tamanio de array
 * \param valorDeInicio int valor con el cual inicializar
 * \return void
 *
 */
void inicializarArray(int numeros[], int cant, int valorDeInicio);
/** \brief
 *
 * \param numeros[] int array a mostrar
 * \param cant int tamanio del array
 * \return void
 *
 */
void mostrarArray(int numeros[], int cant);

/** \brief Muestra la cantidad cargada en el array
 *
 * \param numeros[] int array a verificar
 * \param cant int tamanio del array
 * \param valorDeInicio int valor con el cual fue inicializado
 * \return int cantidad cargada
 *
 */
int CantidadCargadaArray(int numeros[], int cant,int valorDeInicio);
/** \brief
 *
 * \param numeros[] int Muestra la cantidad no cargada en el array
 * \param cant int tamanio de array
 * \param valorDeInicio int valor con el cual fue inicializado
 * \return int cantidad no cargada del array
 *
 */
int CantidadNoCargadaArray(int numeros[], int cant,int valorDeInicio);
/** \brief Retornar mayor de un array
 *
 * \param numeros[] int array a verificar
 * \param cant int tamanio del array
 * \return int numero mayor
 *
 */
int retornarMayor(int numeros[], int cant);
/** \brief Retornar menor de un array
 *
 * \param numeros[] int array a verificar
 * \param cant int tamanio del array
 * \return int numero menor
 *
 */
int retornarMenor(int numeros[], int cant,int valorDeInicio);
/** \brief Busca cual es el indice libre del array y devuelve posicion
 *
 * \param numeros[] int array a verificar
 * \param cant int tamanio
 * \return int indice libre
 *
 */
int indiceLibre(int numeros[],int cant);
/** \brief Saca el promedio del array
 *
 * \param numeros[] int Array a verificar
 * \param cant int tamanio
 * \param valorDeInicio int valor de inicio del array
 * \return float
 *
 */
float promedio(int numeros[],int cant, int valorDeInicio );

//tarea
//void mostrarArrayTodos(int numeros[],int cant);
//void mostrarArrayCargados(int numeros[],int cant, int valorDeInicio );
