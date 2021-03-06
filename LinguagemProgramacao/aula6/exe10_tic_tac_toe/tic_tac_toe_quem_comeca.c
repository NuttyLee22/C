#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define iguais(a,b,c) (a!=' ' && a==b && b==c)

void exibe(char m[3][3]){
	_clrscr();
	for(int i=0;i<3;i++){
		printf("%c | %c | %c \n",m[i][0],m[i][1],m[i][2]);
		if(i<2) puts("--+---+--");
	}
}

int vencedor(char m[3][3]){
	for(int i=0;i<3;i++){
		if(iguais(m[i][0],m[i][1],m[i][2])) return m[i][0];
		if(iguais(m[0][i],m[1][i],m[2][i])) return m[0][i];
	}

	if(iguais(m[0][0],m[1][1],m[2][2])) return m[0][0];
	if(iguais(m[0][2],m[1][1],m[2][0])) return m[0][2];
	return ' ';
}

void usuario(char m[3][3]){
	int l,c;
	do{
		printf("Posicao: ");
		scanf("%d %d",&l,&c);
	}while(l>2 && c>2 && m[l][c]!=' ');
	
	m[l][c]='x';
}

void computador(char m[3][3]){
	int l,c;
	do{
		srand(time(NULL));
		l=rand()%3;
		c=rand()%3;

	}while(m[l][c]!=' ');
	
	m[l][c]='o';
}



int main (void){
	char m[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int j=0,e,s;
	char v;
	printf("Par (0) ou impar(1)?");
	scanf("%d",&e);
	srand(time(NULL));
	s=rand()%2;
	printf("Sorteado: %d\n",s);
	if(e==s)puts("Voce comeca!");
	else puts("Eu comeco!");
	printf("Pressione enter...");
	_getch();
	do{
		exibe(m);
		if(e==s)usuario(m);
		else computador(m);
		v=vencedor(m);
		s=!s;
	}while(++j<9 && v==' ');
	switch(v){
		case ' ':puts("\nEmpate\n");break;
		case 'x':puts("\nVoce venceu\n");break;
		case 'o':puts("\nEu venci\n");break; 
	}
	return 0;
}
