#include <stdio.h>

typedef struct
{
    char nombre[20];
    int edad;

}ePersona;

// firmas
int apertura_archivo(FILE* archivo, ePersona persona);
int lectura_archivo(FILE* archivo, ePersona persona);

int main()
{
    printf("Archivos con estructuras");

    FILE *archivoBinario;
    ePersona unaPersona;
   // int sePudo;

    apertura_archivo(archivoBinario, unaPersona);
    lectura_archivo(archivoBinario, unaPersona);
    //apertura de archivo
    /*archivoBinario= fopen("personas.bin","wb");
    if(archivoBinario==NULL)
    {
        printf("NO se pudo con el archivo");
    }else
    {
        printf("\ningrese nombre :");

        printf("\ningrese edad :");

        fwrite(&unaPersona,sizeof(unaPersona),1,archivoBinario);

    }

    fclose(archivoBinario);*/




    //lectura
    /*archivoBinario= fopen("personas.bin","rb");
   // fread(&unaPersona,sizeof(unaPersona),1,archivoBinario);
   // printf("\n %s  %d ",unaPersona.nombre,unaPersona.edad);



    if(archivoBinario==NULL)
    {
        printf("\nNO se pudo con el archivo");
    }else
    {
        sePudo= fread(&unaPersona,sizeof(unaPersona),1,archivoBinario);
        if(sePudo!=1)
        {
            if(feof(archivoBinario))
            {
                printf("\nse termino el archivo");
            }else
            {
                printf("\nno se pudo");
            }

        }else
        {
            printf("\n %s  %d ",unaPersona.nombre,unaPersona.edad);
        }

    }

    fclose(archivoBinario);*/









    return 0;
}
// apertura
int apertura_archivo(FILE* archivo, ePersona persona)
{
    int retorno;

    archivo= fopen("personas.bin","wb");
    if(archivo==NULL)
    {
        printf("NO se pudo con el archivo");
        retorno =-1;
    }else
    {
        printf("\ningrese nombre :");
        scanf("%s",persona.nombre);
        printf("\ningrese edad :");
        scanf("%d",&persona.edad);
        fwrite(&persona,sizeof(persona),1,archivo);

        retorno = 0;

    }

    fclose(archivo);
    return retorno;
}

// lectura
int lectura_archivo(FILE* archivo, ePersona persona)
{

    int exito;
 archivo= fopen("personas.bin","rb");
   // fread(&unaPersona,sizeof(unaPersona),1,archivoBinario);
   // printf("\n %s  %d ",unaPersona.nombre,unaPersona.edad);



    if(archivo==NULL)
    {
        printf("\nNO se pudo con el archivo");
        exito = -1;
    }else
    {
        exito = fread(&persona,sizeof(persona),1,archivo);
        if(exito!=1)
        {
            if(feof(archivo))
            {
                printf("\nse termino el archivo");
                exito = -2;
            }else
            {
                printf("\nno se pudo");
                exito = -3;
            }

        } else
        {
            printf("\n %s  %d ",persona.nombre,persona.edad);
            exito = 0;
        }

    }

    fclose(archivo);

    return exito;
}
