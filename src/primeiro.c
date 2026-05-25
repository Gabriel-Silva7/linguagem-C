//  importação da biblioteca padrão de entrada e saida //
#include <stdio.h>

// o programa inica e executa a partir da função main //
int main(){

    // declaração da váriavel "j" com o tipo "int" de inteiro //
    int j;
    
    //  vamos pedir para o usuario digitar um valor 
    //  inteiro para ser guardado na váriavel "j" //

    printf("digite um numero inteiro e tecle Enter:\n");

    // o comando scanf sera utilizado para capturar o
    // numero inteiro que o usuario irá digitar o caracter 
    // f do scan é usado para  indicar qual sera o formato de dado digitado pelo usuario 
    // neste caso usaremos %d que indicar que o usuario digitou é um numero 
    // decimal, este numero sera alocado no endereço de 
    // memoria da variavel j, portanto, usaremos &j, para
    // indicar o endereço da variavel 

    scanf("%d",&j);
    printf("o valor digitado pelo usuario é %d\n\n",j);
    return 0; // informa ao compilador que o programa acabou //  

}