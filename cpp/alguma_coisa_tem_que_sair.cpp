#include <stdio.h>
int main(int argc, char *argv[]){

    char produto[50];
    int quantidade;
    float valorUnitario;
    float valorTotal;
    printf("Digite o nome do produto: ");
    scanf("%s", produto);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);
    printf("Digite o valor unitário: ");
    scanf("%f", &valorUnitario);
    return 0;
}
