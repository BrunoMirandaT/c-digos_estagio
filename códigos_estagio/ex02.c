#include <stdio.h>

int main(){
	int i, a = 0, aux = 1, num, res = 0;
	
	printf("Informe o valor que deseja encontrar: ");
	scanf("%d", &num);
	
	for (i = 0; i <num && a < num ; i++){
		a = res;
  		printf("%d, ", res);
  		res = a + aux;
  		aux = a;
	}
	
	if(a == num){
		printf("\n\nNumero %d pertence a sequencia Fibonnaci", num);
	}else{
		printf("\n\nNumero %d nao pertence a sequencia Fibonnaci", num);
	}
}
