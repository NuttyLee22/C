#include <stdio.h>

int lsearch(int x,int v[],int n){
	if(n==0){
		return 0;
	}

	if(x==v[n]){
		return 1;
	}

	lsearch(x,v,n-1);
	
}

int main(void){
	int v[8] = {66,80,31,48,27,75,19,52};
	printf("27: %d\n",lsearch(27,v,8));
	printf("51: %d\n",lsearch(51,v,8));
	return 0;
}
