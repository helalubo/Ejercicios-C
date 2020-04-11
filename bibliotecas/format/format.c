void formatoNombres(char nombre[], char apellido[], char nombreYApellido[]){


 int tam;

  strcpy(nombreYApellido,apellido);
    strcat(nombreYApellido, ", ");
    strcat(nombreYApellido,nombre);

    tam = strlen(nombreYApellido);
    strlwr(nombreYApellido);

    nombreYApellido[0] -= 32;

    for(int i = 0; i<tam; i++)
    {

        if(nombreYApellido[i] == ' ')
        {
            nombreYApellido[i+1] -=  32;
        }



    }


}