typedef char cadena [30];

/** \brief da alta a un socio
 *
 * \param legajos[] int
 * \param nombres[] cadena
 * \param apellidos[] cadena
 * \param edades[] int
 * \param sexos[] char
 * \param deportes[] int
 * \param estados[] int
 * \param tam int tamanio de array
 * \param cont int contador para establecer el numero de legaje autoincrementable
 * \return void
 *
 */
void alta(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int cont);
/** \brief da la baja de un socio
 *
 * \param legajos[] int
 * \param nombres[] cadena
 * \param apellidos[] cadena
 * \param edades[] int
 * \param sexos[] char
 * \param deportes[] int
 * \param estados[] int
 * \param tam int tamanio de array
 * \param valorInicial int para verificar si esta vacio
 * \return void
 *
 */
void baja(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int valorInicial);


/** \brief da alta a un socio
 *
 * \param legajos[] int
 * \param nombres[] cadena
 * \param apellidos[] cadena
 * \param edades[] int
 * \param sexos[] char
 * \param deportes[] int
 * \param estados[] int
 * \param tam int tamanio de array
 * \param cont int contador para establecer el numero de legaje autoincrementable
 * \return void
 *
 */
void alta(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int cont);
/** \brief da la baja de un socio
 *
 * \param legajos[] int
 * \param nombres[] cadena
 * \param apellidos[] cadena
 * \param edades[] int
 * \param sexos[] char
 * \param deportes[] int
 * \param estados[] int
 * \param tam int tamanio de array
 * \param valorInicial int para verificar si esta vacio
 * \return void
 *
 */
void baja(int legajos[], cadena nombres[],cadena apellidos[],int edades[],char sexos[],int deportes[], int estados[],int tam, int valorInicial);


/** \brief establecer nombre
 *
 * \param legajos[] int
 * \param nombres[] cadena
 * \param tam int
 * \return void
 *
 */
void setNombre(int legajos[], cadena nombres[], int tam);

/** \brief establecer apellido
 *
 * \param legajos[] int
 * \param apellidos[] cadena
 * \param tam int
 * \return void
 *
 */
void setApellido(int legajos[], cadena apellidos[], int tam);
/** \brief establecer edad
 *
 * \param legajos[] int
 * \param edades[] int
 * \param tam int
 * \return void
 *
 */
void setEdad(int legajos[], int edades[], int tam);

/** \brief establecer deporte segun numero en menu
 *
 * \param legajos[] int
 * \param edades[] int
 * \param tam int
 * \return void
 *
 */
void setDeporte(int legajos[], int edades[], int tam);
