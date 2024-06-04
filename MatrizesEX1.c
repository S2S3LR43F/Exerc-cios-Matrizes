#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[2][2];
    int valormin, i, j;

    printf("Insira os elementos da matriz: ");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
            }
        }
    //valor minimo
    valormin = matriz[0][0];
    for(i = 0; i < 2; i++){
        for(j = 0;  j < 2; j++){
                if(matriz[i][j] < valormin){
                    valormin = matriz[i][j];
                }
     }

}
printf("O menor numero e: %d", valormin);
return 0;
}
