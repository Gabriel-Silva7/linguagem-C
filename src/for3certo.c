#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");

int b,e,t,i;

printf("digite um numero base:\n");
scanf("%d",&b);

printf("digite um numero para o expoente\n");
scanf("%d",&e);

t = b;
for( i = 1 ; i = e ; i++){
    i *= b ; 
}
printf("O resultado é %d\n",t);
return 0;



}