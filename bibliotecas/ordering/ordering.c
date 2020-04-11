void ordenamientoBurbuja(int desordenado[], int tam){

int i;
int j;




    for(i = 0; i<tam-1; i++){



        for(j = i+1;j<tam;j++){

            if(desordenado[i]> desordenado[j]){

                int aux;

                aux = desordenado[i];
                desordenado[i] = desordenado[j];
                desordenado[j] = aux;

            }


        }


    }




 }
