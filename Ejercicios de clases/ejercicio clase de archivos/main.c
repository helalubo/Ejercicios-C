#include <stdio.h>

typedef struct
{
    char nombre[20];
    int edad;

}ePersona;

int main()
{
    printf("Archivos con estructuras");

    FILE *archivoBinario;
    ePersona unaPersona;
    int sePudo;
    //apertura de archivo
    archivoBinario= fopen("personas.bin","wb");
    if(archivoBinario==NULL)
    {
        printf("NO se pudo con el archivo");
    }else
    {
        printf("\ningrese nombre :");
        scanf("%s",unaPersona.nombre);

        printf("\ningrese edad :");
        scanf("%d",&unaPersona.edad);

        fwrite(&unaPersona,sizeof(unaPersona),1,archivoBinario);

    }

    fclose(archivoBinario);


    //lectura
    archivoBinario= fopen("personas.bin","rb");
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
            printf("\n %s %d ",unaPersona.nombre,unaPersona.edad);
        }

    }

    fclose(archivoBinario);









    return 0;
}
