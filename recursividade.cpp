#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n){
    if(n < 0){
        return 0;
    }
	else if(n % 2 == 0){
        return n + soma(n - 2);
    }
	else{
        return soma(n - 1);
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Fun��o Recursiva\n\n");

    int n;
    printf("Insira um n�mero: ");
    scanf("%d", &n);
    
    int resultado = soma(n);
    printf("\nA soma dos n�meros pares at� %d �: %d\n", n, resultado);
    
    return 0;
}
