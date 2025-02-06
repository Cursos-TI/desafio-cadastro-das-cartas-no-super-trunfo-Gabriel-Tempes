#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //primeiro estado
    char coda01[3];
    char nomea01[50];
    int popa01;
    float areaa01;
    double piba01;
    int turisa01;

    char coda02[3];
    char nomea02 [50];
    int popa02;
    float areaa02;
    double piba02;
    int turisa02;

    char coda03[3];
    char nomea03[50];
    int popa03;
    float areaa03;
    double piba03;
    int turisa03;

    char coda04[3];
    char nomea04[50];
    int popa04;
    float areaa04;
    double piba04;
    int turisa04;

    //segundo estado
    
    char codb01[3];
    char nomeb01[50];
    int popb01;
    float areab01;
    double pibb01;
    int turisb01;

    char codb02[3];
    char nomeb02[50];
    int popb02;
    float areab02;
    double pibb02
    int turisb02

    char codb03[3];
    char nomeb03[50];
    int popab03;
    float areab03;
    double pibb03;
    int turisb03;

    char codb04[3];
    char nomeb04[50];
    int popb04;
    float areab04;
    double pibb04;
    int turisb04;

    //terceiro estado

    char codc01[3];
    char nomec01[50];
    int popc01;
    float areac01;
    double pibc01;
    int turisc01;

    char codc02[3];
    char nomec02 [50];
    int popc02;
    float areac02;
    double pibc02;
    int turisc02;

    char codc03[3];
    char nomec03[50];
    int popc03;
    float areac03;
    double pibc03;
    int turisc03;

    char codc04[3];
    char nomec04[50];
    int popc04;
    float areac04;
    double pibac4;
    int turisc04;

//quarto estado
    
    char codd01[3];
    char nomed01[50];
    int popd01;
    float aread01;
    double pibd01;
    int turisd01;

    char codd02[3];
    char nomed02[50];
    int popd02;
    float aread02;
    double pibd02
    int turisd02

    char codd03[3];
    char nomed03[50];
    int popad03;
    float aread03;
    double pibd03;
    int turisd03;

    char codd04[3];
    char nomed04[50];
    int popd04;
    float aread04;
    double pibd04;
    int turisd04;

    //quinto estado

     char code01[3];
    char nomee01[50];
    int pope01;
    float areae01;
    double pibe01;
    int turise01;

    char code02[3];
    char nomee02 [50];
    int pope02;
    float areae02;
    double pibe02;
    int turise02;

    char code03[3];
    char nomee03[50];
    int pope03;
    float areae03;
    double pibe03;
    int turise03;

    char code04[3];
    char nomee04[50];
    int pope04;
    float areae04;
    double pibe04;
    int turise04;

    //sexto estado

    char codf01[3];
    char nomef01[50];
    int popf01;
    float areaf01;
    double pibf01;
    int turisf01;

    char codf02[3];
    char nomef02[50];
    int popf02;
    float areaf02;
    double pibf02
    int turisf02

    char codf03[3];
    char nomef03[50];
    int popaf03;
    float areaf03;
    double pibf03;
    int turisf03;

    char codf04[3];
    char nomef04[50];
    int popf04;
    float areaf04;
    double pibf04;
    int turisf04;

    //setimo estado

     char codg01[3];
    char nomeg01[50];
    int popg01;
    float areag01;
    double pibg01;
    int turisg01;

    char codg02[3];
    char nomeg02 [50];
    int popg02;
    float areag02;
    double pibg02;
    int turisg02;

    char codg03[3];
    char nomeg03[50];
    int popg03;
    float areag03;
    double pibg03;
    int turisg03;

    char codg04[3];
    char nomeg04[50];
    int popg04;
    float areag04;
    double pibg04;
    int turisag04;

    //oitavo estado

    char cod01[3];
    char nomeh01[50];
    int poph01;
    float areah01;
    double pibh01;
    int turish01;

    char codh02[3];
    char nomeh02[50];
    int poph02;
    float areah02;
    double pihb02
    int turish02

    char codh03[3];
    char nomeh03[50];
    int popah03;
    float areah03;
    double pibh03;
    int turish03;

    char codh04[3];
    char nomeh04[50];
    int poph04;
    float areah04;
    double pibh04;
    int turish04;
    
    

    
    printf("Super Trunfo dos Países!\n");

    //País escolhido: Brasil. 
    //Estados escolhidos: Mato Grosso, Minas Gerais, Bahia, Rio de janeiro, São Paulo, Amazonas, Espirito Santo e Acre.

    printf("Estado de Mato Grosso");
    printf("Digite o código dessa cidade\n");
    scanf(" %s\n" &coda01);
    printf("Digite o nome dessa cidade\n");
    scanf(" %s\n", &nomea01);
    printf("Digite a população dessa cidade\n");
    scanf("%d\n", &popa01);
    printf("Digite a área dessa cidade em Km²\n");
    scanf ("%f\n", &areaa01);
    printf("Digite o PIB dessa cidade em milhões de reais");
    scanf("%f\n", piba01);
    printf("Digite o número de pontos turísticos dessa cidade\n");
    printf("Cadastro da carta:\n");
    printf("Código da carta:");
    printf("%s\n", coda01);
    printf("Nome:");
    printf("%s\n", nomea01);
    printf("População:");
    printf("%d\n", popa01);
    printf("Área:");
    printf("%f\n", areaa01);
    printf("PIB:");
    printf("%f\n", piba01);
    printf("Nº de pontos turísticos")
    printf("%d\n", turisa01);
        
        
    
    
    






    
    return 0;
}
