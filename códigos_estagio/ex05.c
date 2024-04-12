#include <stdio.h>

int main(){
	char string[20] = "obrigado";
	int i;
	
	
	for(i = sizeof(string) ; i >= 0 ; i--){
		if(string[i] != '\0'){
			printf("%c", string[i]);
		}
	}
}
