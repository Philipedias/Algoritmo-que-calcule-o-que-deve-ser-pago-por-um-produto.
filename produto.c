#include <stdio.h>
#include <locale.h>

int main(void) {
    float preco;
    int codPag;
    setlocale(LC_ALL, "Portuguese");

   printf("Código    Condição de Pagamento\n");
   printf("  1        À vista em dinheiro, recebe 10% desconto\n");
   printf("  2        À vista no cartão de crédito, recebe 5% desconto\n");
   printf("  3        Em duas vezes no cartão de crédito, preço normal de etiqueta sem juros\n");
   printf("  4        Em três vezes no cartão de crédito, preço normal de etiqueta mais juros de 10%\n");

    printf("Digite o preço do produto em R$: ");
    scanf("%f", &preco);
    printf("Digite a forma de pagamento: ");
    scanf("%d", &codPag);

    switch (codPag){
    case 1 :
        printf("O valor final do produto será de R$ %.2f ", preco - preco * 0.1);
        break;
    case 2 :
        printf("O valor final do produto será de R$ %.2f" , preco - preco * 0.05); 
        break;
    case 3 :
        printf("O valor final do produto será de R$ %.2f em duas vezes no cartão de crédito", preco); 
        break;
    case 4 :
        printf("O valor final do produto será de R$ %.2f em três vezes no cartão", preco + preco * 0.1);          
        
    break;

        
    }
    
    
}