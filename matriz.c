#include <stdio.h>
#include <stdlib.h>
int numeros[20][10];


int main(){
    //scanf("%d", &numeros[20][10]);
    printf("%d", numeros[2][2]);
for(int i = 0; i < 20; i++){ //pecorre as colunas da matriz enquanto i for menor que 20
    for(int j = 0; j < 10; j ++){
        printf("%d", numeros[i][j]);
    }
    printf("\n");
}

}





// alocando espaço para as linhas,
// que guardam ponteiro de inteiro.
matriz = malloc(sizeof(int*) * linhas);

// agora, para cada linha, alocamos
for(int i = 0; i < linhas; i++) {
    matriz[i] = malloc(sizeof(int) * colunas);
}

