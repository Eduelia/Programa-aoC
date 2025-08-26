#include <stdio.h>
int main(){
    
    float temperatura, umidade;
    unsigned int produto, produtomin = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com umidade:\n");
    scanf("%f", &umidade);
    printf("Entre com estoque:\n");
    scanf("%u", &produto);
    
    if (temperatura >=30){
        printf("Temperatura muito alta, ATENÇÃO!\n");
    }else {

        printf("Temperatura ideal!!\n");
    }
    if (umidade >= 40){
        printf("Elevada!!\n");
    }else {
        printf("Umidade dentro dos parametros\n");
    }
    if (produto < produtomin){
        printf("Estoque do minimo.\n");
    }else {
        printf("Estoque normal. \n");
    }
}
    








        
    
    
    
    





