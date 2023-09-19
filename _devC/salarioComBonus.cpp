#include <stdio.h>
 
int main() {
 
    char nomeVendedor[10];
    double sFixo, tVendas, comissao, total;
    
    scanf("%c", &nomeVendedor);
    scanf("%lf", &sFixo);
    scanf("%lf", &tVendas);
    
    comissao = 0.15 * tVendas;
    total = comissao + sFixo;
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
