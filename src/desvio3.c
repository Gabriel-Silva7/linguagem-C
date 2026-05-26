








#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota;
    float resultadodanota;


    // comando system que chama uma execução do sistema operacional
    // que, neste caso será o comando clear
    system("clear");
     
    
    printf("qual foi a nota do aluno?:");
    scanf("%f", &nota1);

    printf("qual foi a nota do aluno?:");
    scanf("%f", &nota2);

    printf("qual foi a nota do aluno?:");
    scanf("%f", &nota3);

    printf("qual foi a nota do aluno?:");
    scanf("%f", &nota4);

    nota = nota1 + nota2 + nota3 + nota4; 
    resultadodanota = nota / 4; 
    
    printf("o numero da nota foi %.2f", nota);

    if(resultadodanota >=7){
        printf("\na média do aluno foi %.2f aprovado, parabéns ", resultadodanota);
    }
    else{
        printf("\nsua nota foi %.2f infelizmente você reprovou \n", resultadodanota);
    }
    
    printf("\n###########################################################\n");
    printf("endereço de memória da váriavel nota1 %p \n", &nota1);
    printf("endereço de memória da váriavel nota2 %p \n", &nota2);
    printf("endereço de memória da váriavel nota3 %p \n", &nota3);
    printf("endereço de memória da váriavel nota4 %p \n", &nota4);
    printf("endereço de memória da váriavel resultadodanota %p \n", &resultadodanota);
    
    return 0;
    


    }

     
    










