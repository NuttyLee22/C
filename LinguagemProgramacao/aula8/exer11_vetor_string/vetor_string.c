#include <stdio.h>
#include <string.h>

void exibe(char v[][7], int n){
	for(int i=0; i<4; i++){
		printf("%s\n",v[i]);
	}

}

int main(void){
	char v[][7]={"Nucci",
				"Bhelyn",
				"Shiina",
				"Lunna"};
	exibe(v,7);
	return 0;
}
