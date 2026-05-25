#include <stdio.h>

int main()
{

    // vamos usar uma variavel nova "FLOAT" ela consegue ver numeros quebrados, o "INT" já nao consegue, //
    // exe: 0,06 o "INT" nao consegue ler, ja o "FLOAT" sim, se tiver casa decimal coloque "FLOAT" //

    float preco;
    float taxa;
    float parcelas;
    float resultado;
    float resultadoParcelas;

    /*Camel Cases (nomeCompletoCliente
    Snake Case (nome_completo_cliente)
    Simple Case (nomecompletocliente)*/

    printf("digite o preço do produto e tecle Enter\n");
    scanf("%f",&preco);

    printf("digite a taxa de acréscimo sem o simbolo de porcentagem e tecle Enter\n");
    scanf("%f",&taxa);

    printf("digite o numero de parcelas e tecle Enter\n");
    scanf("%f",&parcelas);

    resultado = preco * (taxa / 100) + preco;
    resultadoParcelas = resultado / parcelas;

    printf("o valor final do produto é R$ %.2f\n", resultado);
    printf("o valor da parcela é %.2f\n", resultadoParcelas);
    
    return 0;
    
    
    // criamos o arquivo na pasta src, vamso colocar o arquivo executavel na pasta bin //
    // comando: gcc (nome do arquivo.c) -o ../bin/(nome do arquivo) //
    // para executar o programa ../(nome da pasta que guarda os arquivos executavel)/(nome do arquivo) //
    // exemplo no momento estou /documentos/linguagem/src  para mim deixar o programa executavel use o seguintes comandos//
    // gcc float.c -o ../nomedapasta/nomedoarquivo //
    
    // na linha 31 e 32  colocamos %.2f para pegarmos somentoe 2 casas decimais depois da virgula //
    
    //  







}

