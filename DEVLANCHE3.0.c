#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

#define delay 0
#define MAX_COLUNAS 110
#define MAX_LINHAS 30
#define COR_FUNDO MAGENTA
#define COR_LETRA LIGHTGRAY
#define COR_LETRA2 YELLOW

void primeiraTela(){ //função sem return

    textbackground(COR_FUNDO);
    textcolor(COR_LETRA);

    for(int linha=1; linha<=MAX_LINHAS; linha++){
        for(int coluna=1; coluna<=MAX_COLUNAS; coluna++)
            printf(" ");
        printf("\n");
    }
    gotoxy(1,1);printf("%c",201);

    for(int coluna=2; coluna<MAX_COLUNAS; coluna++){
        printf("%c",205);
        Sleep(delay);
    }
    printf("%c\n",187);

    for(int linha=2; linha<MAX_LINHAS; linha++){
        gotoxy(MAX_COLUNAS,linha);printf("%c",186);
        Sleep(delay);
    }

    gotoxy(MAX_COLUNAS,MAX_LINHAS);printf("%c",188);

    for(int coluna=MAX_COLUNAS-1; coluna >=1; coluna--){
        gotoxy(coluna,MAX_LINHAS);printf("%c",205);
        Sleep(delay);
    }

    gotoxy(1,MAX_LINHAS);printf("%c",200);

    for(int linha=MAX_LINHAS-1; linha > 1; linha--){
        gotoxy(1,linha);printf("%c",186);
        Sleep(delay);
    }

    hamburguerinicio();carregandoinicio();

    for(int linha= MAX_LINHAS-10; linha >=1; linha --){
        textbackground(COR_FUNDO);
        textcolor(COR_LETRA2);

        gotoxy(23, linha+1);printf(" _____  ________      ___               _   _  _____ _    _ ______ ");
        gotoxy(23, linha+2);printf("|  __ \\|  ____\\ \\    / | |        /\\   | \\ | |/ ____| |  | |  ____|");
        gotoxy(23, linha+3);printf("| |  | | |__   \\ \\  / /| |       /  \\  |  \\| | |    | |__| | |__   ");
        gotoxy(23, linha+4);printf("| |  | |  __|   \\ \\/ / | |      / /\\ \\ | . ` | |    |  __  |  __|  ");
        gotoxy(23, linha+5);printf("| |__| | |____   \\  /  | |____ / ____ \\| |\\  | |____| |  | | |____ ");
        gotoxy(23, linha+6);printf("|_____/|______|   \\/   |______/_/    \\_|_| \\_|\\_____|_|  |_|______| 3.0");
        gotoxy(23, linha+7);printf("                                                                           ");
        Sleep(delay+19);
    }
    Sleep(delay+100);
    gotoxy(38, 10);printf("BEM VINDO A HAMBURGUERIA DEVLANCHE\n");

}

void hamburguerinicio(){ //arte
// inicio hamburguer art
 textcolor(WHITE);
    textcolor(YELLOW);gotoxy(40,4);printf("                                    \n");
      textcolor(YELLOW);gotoxy(40,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,433,433,433,433,433,433,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475, 433,433,433,433,433,433,433,433);
       textcolor(YELLOW);gotoxy(40,6);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,433,433,433,433,475,475,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,475,475,433,433,433,433,433,433);
      textcolor(YELLOW);gotoxy(40,7);printf("%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,433,433,475,475,432,432,432,432,475,475,432,432,432,432,432,432,432,432,475,475,432,432,432,432,475,475,433,433,433,433);
     textcolor(YELLOW); gotoxy(40,8);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,432,432,432,432,432,432,475,475,475,475,432,432,432,432,432,432,432,432,475,475,475,475,432,432,432,432,432,432,475,475,433,433);
      textcolor(YELLOW);gotoxy(40,9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,432,432,432,432,432,432,432,432,432,432,432,432,475,475,475,475,432,432,432,432,432,432,432,432,432,432,432,432,475,475,433,433);
      textcolor(YELLOW); gotoxy(40,10);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,475,475,433,433);
       textcolor(LIGHTRED);gotoxy(40,11);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475);
      textcolor(LIGHTRED);gotoxy(40,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               475,475,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,475,475);
      textcolor(LIGHTGREEN); gotoxy(40,13);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,433,433);
       textcolor(GREEN);gotoxy(40,14);printf("%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               475,475,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,475,475);
       textcolor(YELLOW);gotoxy(40,15);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,475,475,433,433,433,433,433,433,475,475,433,433,433,433,433,433,433,433,475,475,433,433,433,433,433,433,475,475,475,475,433,433);
       textcolor(YELLOW);gotoxy(40,16);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,432,432,475,475,475,475,475,475,432,432,475,475,475,475,475,475,475,475,432,432,475,475,475,475,475,475,432,432,475,475,433,433);
      textcolor(YELLOW); gotoxy(40,17);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,475,475,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,475,475,433,433);
      textcolor(YELLOW);gotoxy(40,18);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
               433,433,433,433,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,475,433,433,433,433);
       gotoxy(40,19); printf("                                    \n");
       textbackground(COR_FUNDO);
    // ketchup art
           int linh=9, b=28;
           for(int contador=1;contador<2;contador++){
                     textcolor(WHITE);gotoxy(b, linh+2) ;printf("     _");
                     textcolor(WHITE);gotoxy(b+4, linh+3) ;printf("|%c%c|",475,475);
                     textcolor(WHITE); gotoxy(b, linh+4) ;printf("    |%c%c| ",475,475);
                     textcolor(WHITE);gotoxy(b, linh+5) ;printf(" |%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475);
                     textcolor(WHITE);gotoxy(b, linh+6) ;printf("|%c%c%c%c%c%c%c%c%c|",433,433,433,433,433,433,433,433,433);
                     textcolor(WHITE);gotoxy(b, linh+7) ;printf("|%c%c%c%c%c%c%c%c%c|",433,433,433,433,433,433,433,433,433);
                     textcolor(LIGHTRED);gotoxy(b, linh+8) ;printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);
                     textcolor(LIGHTRED);gotoxy(b, linh+9) ;printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);
                     textcolor(LIGHTRED);gotoxy(b, linh+10);printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);}
    // mostarda art
           int lin=9, ba=77;
           for(int contador=1;contador<2;contador++){
                     textcolor(WHITE);gotoxy(ba, lin+2) ;printf("     _");
                     textcolor(WHITE);gotoxy(ba+4, lin+3) ;printf("|%c%c|",475,475);
                     textcolor(WHITE); gotoxy(ba, lin+4) ;printf("    |%c%c| ",475,475);
                     textcolor(WHITE);gotoxy(ba, lin+5) ;printf(" |%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475);
                     textcolor(WHITE);gotoxy(ba, lin+6) ;printf("|%c%c%c%c%c%c%c%c%c|",433,433,433,433,433,433,433,433,433);
                     textcolor(WHITE);gotoxy(ba, lin+7) ;printf("|%c%c%c%c%c%c%c%c%c|",433,433,433,433,433,433,433,433,433);
                     textcolor(BROWN);gotoxy(ba, lin+8) ;printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);
                     textcolor(BROWN);gotoxy(ba, lin+9) ;printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);
                     textcolor(BROWN);gotoxy(ba, lin+10);printf("|%c%c%c%c%c%c%c%c%c| ",475,475,475,475,475,475,475,475,475);}
}

void carregandoinicio(){
    gotoxy(47,21); textcolor(WHITE);
    printf("CARREGANDO ");
    textbackground(LIGHTCYAN);printf("          ");

    gotoxy(58,21);textbackground(LIGHTMAGENTA);
    for(int contador=1;contador<=10;contador++){
       Sleep(500);
       printf(" ");
    }
    Sleep(800);
    gotoxy(12,15);textbackground(COR_FUNDO);printf("                     ");
}

void sucoart(int bc){ //arte
    int lin=12;

                    gotoxy(bc+17, lin-2) ;printf("  .---,");
                     gotoxy(bc+17, lin-1) ;printf("/ .--'" );
                     gotoxy(bc+15, lin) ;printf(" / /");
                     gotoxy(bc+14, lin+1) ;printf(" / /");
                     gotoxy(bc, lin+2) ;printf("  _..--'''''--/ /");
                     gotoxy(bc, lin+3) ;printf(" /           / / \"");
                     gotoxy(bc, lin+4) ;printf(" |:--.._____;;--:|" );
                     gotoxy(bc, lin+5) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+6) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+7) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+8) ;printf(" ||   ||   ||   || ");
                     gotoxy(bc, lin+9) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+10);printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+11) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+12) ;printf(" ||   ||   ||   ||");
                     gotoxy(bc, lin+13) ;printf(" ||   ||   ||   ||");
                    gotoxy(bc, lin+14) ;printf(" ||   ||   ||   ||");
                    gotoxy(bc, lin+15) ;printf(" |'.__||   ||__.'|");
                     gotoxy(bc, lin+16) ;printf(" \\     `'''`     /");
                   gotoxy(bc, lin+17);printf("  `-...........-'");

}

void refriart(int b){ //arte
   int linh=8;
                    gotoxy(b, linh+1) ;printf("                             ");
                     gotoxy(b, linh+1) ;printf("                         ");
                     gotoxy(b, linh+2) ;printf("                          ");
                   gotoxy(b, linh+3) ;printf("   .-""`````````````""-.");
                      gotoxy(b, linh+4) ;printf(" /'-.___________.-'\\ " );
                    gotoxy(b, linh+5) ;printf(";                   ;");
                    gotoxy(b, linh+6) ;printf("|                   |");
                    gotoxy(b, linh+7) ;printf("|                   |");
                    gotoxy(b, linh+8) ;printf("|                   | ");
                     gotoxy(b, linh+9) ;printf("|    __.......__    |");
                     gotoxy(b, linh+10);printf("|.-'`      ~    `'-.| ");
                      gotoxy(b, linh+11) ;printf("|::-.___~______~.-'`|");
                    gotoxy(b, linh+12) ;printf(";:::::.             ;");
                     gotoxy(b, linh+13) ;printf("::::::::.           | ");
                     gotoxy(b, linh+14) ;printf("|::::::::::..       |");
                     gotoxy(b, linh+15);printf("|:::::::::::::.     | ");
                      gotoxy(b, linh+16) ;printf("|::::::::::::::..   |");
                     gotoxy(b, linh+17) ;printf("|:::::::::::::::::: |");
                     gotoxy(b, linh+18) ;printf("|:::::::::::::::::::| ");
                    gotoxy(b, linh+19) ;printf(" \\:::::::::::::::../");
                     gotoxy(b, linh+20);printf(" '::::::::::::::.' ");

}

void burgart(int ba){ //arte
    int linh=1;
                      gotoxy(ba, linh+11) ;printf("         _....----'''----...._");
                   gotoxy(ba, linh+12) ;printf("      .-'  o    o    o    o   '-.");
                     gotoxy(ba, linh+13) ;printf("     /  o    o    o         o    \\");
                     gotoxy(ba, linh+14) ;printf("    /     o      o   o     o    o \\");
                    gotoxy(ba, linh+15);printf("  _|   o   o    o      o  o     o  |_");
                      gotoxy(ba, linh+16) ;printf(" / `''-----.................-----''` \\");
                    gotoxy(ba, linh+17) ;printf(" \\___________________________________/");
                     gotoxy(ba, linh+18) ;printf("   \\~`-`.__.`-~`._.~`-`~.-~.__.~`-`/");
                     gotoxy(ba, linh+19) ;printf("    \\                             /");
                  gotoxy(ba, linh+20);printf("     `-._______________________.-'");

}

void limparTela(){ // FUNCAO PARA LIMPAR PARTE DA TELA DO PROGRAMA
    for(int linha=10; linha < MAX_LINHAS; linha++){
        gotoxy(5, linha);
        printf("                                                                                                         ");
    }
}

float quantidadeProduto(char nomeProduto[],float precoProduto){ // CALCULO DO VALOR DO PRODUTO COM A QUANTIDADE QUE O USUARIO DESEJA
    float valor;int quant;
    limparTela();
    gotoxy(5,13);printf("%s",nomeProduto);
    gotoxy(5,15);printf("Digite a quantidade que você deseja: ");
    fflush(stdin);scanf ("%d", &quant);
    return valor= (precoProduto * quant);
}

int consultaCardBebida(char* consulta){ // MOSTRAR TIPOS DE BEBIDAS DISPONIVEIS
    int tamanho,sabor,quant;

    if (strcmp(consulta, "Agua")==0){
        limparTela(); sucoart(80);
        gotoxy(8,10);printf(" > Água");
        gotoxy(5,12);printf("Tamanhos disponíveis:");
        gotoxy(5,13);printf("1- Garrafa de 250 ml= R$ 1.50");
        gotoxy(5,14);printf("2- 1 litro= R$ 2.50");
        gotoxy(5,15);printf("3- 2 litros= R$ 4.00");
        gotoxy(5,17);printf(" > Digite o número que corresponde ao tamanho que você deseja:" );
        scanf("%d",&tamanho);
        return tamanho;


    }else if(strcmp(consulta, "Suco")==0){
        limparTela(); sucoart(80);
        gotoxy(8,10);printf(" > Tipos de suco");
        gotoxy(5,12);printf("1- Maracuja");
        gotoxy(5,13);printf("2- Umbu");
        gotoxy(5,14);printf("3- Manga");
        gotoxy(5,15);printf("4- Graviola");
        gotoxy(5,16);printf("5- Laranja");
        gotoxy(5,18);printf(" > Digite o número que corresponde ao tipo de suco que você deseja: " );
        scanf("%d",&sabor);
        return sabor;

    }else if(strcmp(consulta, "Refrigerante")==0){
        limparTela(); refriart(80);
        gotoxy(5,10);printf(" > Tipos de refrigerante");
        gotoxy(5,12);printf("1- Coca-Cola");
        gotoxy(5,13);printf("2- Sprite");
        gotoxy(5,14);printf("3- Fanta");
        gotoxy(5,15);printf("4- Guarana");
        gotoxy(5,16);printf("5- Itubaina");
        gotoxy(5,18);printf("Digite o número que corresponde ao tipo de refrigerante que você deseja: " );
        scanf("%d", &sabor);
        return sabor;

    }else{
        limparTela();
        gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
        Sleep(1000);
        return 1;
    }
}

int cardapioHamburguer(){ // MOSTRAR O CARDAPIO DE HAMBURGUERS
    int tipo;
    limparTela();
    burgart(70);

    gotoxy(8,10);printf(" > CARDÁPIO");
    gotoxy(6,12);printf("Tipos de Hamburguer");
    gotoxy(5,14);printf("1- Tradicional = R$4.00");
    gotoxy(5,15);printf("2- X-egg = R$4.50");
    gotoxy(5,16);printf("3- X-burguer = R$5.00");
    gotoxy(5,17);printf("4- X-coracao = R$6.00");
    gotoxy(5,18);printf("5- X-bacon = R$7.00");
    gotoxy(5,19);printf("6- X-apresuntado = R$7.00");
    gotoxy(5,20);printf("7- X-cheddar = R$7.00");
    gotoxy(5,21);printf("* Digite 0 para voltar!");
    gotoxy(5,23);printf(" > Digite o número que corresponde ao tipo de hamburguer que você deseja:");

    fflush(stdin); //Limpa cache do teclado
    scanf("%d",&tipo);

    return tipo;
}

int cardapioBebida(){ // MOSTAR O CARDAPIO DE BEBIDAS
    int tipo;
    limparTela();
    sucoart(80);

    gotoxy(8,10);printf(" > CARDAPIO BEBIDAS");
    gotoxy(5,12);printf("1- Água");
    gotoxy(5,13);printf("2- Suco = R$3,00");
    gotoxy(5,14);printf("3- Café = R$2,00");
    gotoxy(5,15);printf("4- Refrigerante");
    gotoxy(5,16);printf("Digite 0 para nenhuma");
    gotoxy(6,18);printf(" > Digite o número que corresponde a bebida que você deseja: ");

    fflush(stdin);
    scanf("%d", &tipo);

    return tipo;
}

int escolhaCardapio(){ // FUNÇÃO PARA O USUARIO ESCOLHER O CARDAPIO QUE ELE DESEJA VISUALIZAR
    int card;
        limparTela();
        gotoxy(40, 9);printf("BEM VINDO A HAMBURGUERIA DEVLANCHE\n");
        gotoxy(20,12);printf(" > Digite 1 para abrir o ");
        gotoxy(20,13);printf(" caradápio de Hamburguers");
                    gotoxy(15,15) ;printf("         _....----'''----...._");
                    gotoxy(15,16) ;printf("      .-'  o    o    o    o   '-.");
                    gotoxy(15,17) ;printf("     /  o    o    o         o    \"");
                    gotoxy(15,18) ;printf("    /     o      o   o     o    o \"");
                    gotoxy(15,19);printf("  _|   o   o    o      o  o     o  |_");
                    gotoxy(15,20) ;printf(" / `''-----.................-----''` \"");
                    gotoxy(15,21) ;printf(" \___________________________________/");
                    gotoxy(15,22) ;printf("   \~`-`.__.`-~`._.~`-`~.-~.__.~`-`/");
                    gotoxy(15,23) ;printf("    \                             /");
                    gotoxy(15,24);printf("     `-._______________________.-'");


        gotoxy(60,12);printf(" > Digite 2 para abrir  o ");
        gotoxy(63,13);printf(" cardápio de Bebidas");

                    gotoxy(70,15) ;printf(" .-''''`-.");
                    gotoxy(70,16) ;printf("(         )");
                    gotoxy(70,17) ;printf("|`-.___.-'|");
                    gotoxy(70,18) ;printf("|.-''''`-.|");
                    gotoxy(70,19) ;printf("|         |");
                    gotoxy(70,20) ;printf("|`-.___.-'|");
                    gotoxy(70,21) ;printf("|         |");
                    gotoxy(70,22) ;printf("|         |");
                    gotoxy(70,23) ;printf("|. ' '' `.|");
                    gotoxy(70,24) ;printf("|         |");
                    gotoxy(70,25);printf(" `-.___.-'  ");

        gotoxy(40,28);printf(" > Digite 0 para encerrar pedido < ");
        gotoxy(90,21) ;printf("Escolha: |  | ");
        gotoxy(90+10,21);scanf("%d", &card);
        fflush(stdin);
        return card;
}

void carregando(){ // CARREGAMENTO ANTES DE IMPRIMIR A COMANDA
    limparTela();
    char* matriz[3][2]= {"  .",".. ",
                         " :","   :",
                         "  .",".. "};
    int k=0, rep=2;
    int col=1;
    gotoxy(35,15);printf("Carregando comanda, aguarde! ");
    while(k < rep){
        gotoxy(35,16);
        for(int i=0; i<3; i++){
            for(int j=0; j<2; j++){
                printf("%s", matriz[i][j]);
                Sleep(300);
               // Beep(10000,1000);
            }
            gotoxy(35,17+i);
        }
        for (int i=3; i<10; i++){
            gotoxy(32+i,13+i);printf("            ");
        }
        k++;
    }
}

float descontoPromocao(float valorTotal){ // FUNCAO PARA DAR 10% DE DESCONTO DO VALOR TOTAL
    float desconto;
    desconto = valorTotal * 0.1;

    return desconto;
}

struct dadosentrega{
 char nome[52];
 char telefone[52];
 char bairro[102];
 char rua [102];
 char casaouap[52];
 char numeroc[32];
 char pontoR [102];

 };

void imprimirDadosEntrega(struct dadosentrega e[]){
    for (int i = 0; i<2; i++){
        limparTela();
        gotoxy(40,13); printf("Dados endereço (%d) !",i+1);
        gotoxy(41,15);printf("- Nome: %s", e[i].nome);
        gotoxy(41,16);printf("- Telefone: %s", e[i].telefone);
        gotoxy(41,17);printf("- Bairro: %s", e[i].bairro);
        gotoxy(41,18);printf("- Rua: %s", e[i].rua);
        gotoxy(41,19);printf("- Casa ou Apartamento: %s", e[i].casaouap);
        gotoxy(41,20);printf("- Numero da Residencia: %s", e[i].numeroc);
        gotoxy(41,21);printf("- Ponto de Referencia: %s", e[i].pontoR);
        getch();
    }
}

int main(){
    int card,cont_linhas=0,tipo,tamanho,tamanhoRefri,escolhaFinal,escolhaDados;
    float valor=0;
    char nomeCliente[30], cardapio[50][50];
    primeiraTela();
    setlocale(LC_ALL,"portuguese");

    gotoxy(10,14); printf("Por Favor, preencha os dados a seguir ");
    gotoxy(10,15); printf("Para a entrega do lanche em sua residência! ");
    gotoxy(10,18); printf("APERTE QUALQUER TECLA PARA CONTINUAR: ");getch();

    struct dadosentrega e1[2];
    for(int i = 0; i<2; i++){
        limparTela();
        gotoxy(5,12);printf("Preencha com seus dados");
        gotoxy(7,13);printf("* DADOS (%d)!",i+1);
        gotoxy(5,14);printf("Nome: ");
        gotoxy(11,14);fgets(e1[i].nome, 52, stdin);
        gotoxy(5,15);printf("Telefone para Contato: ");
        gotoxy(28,15);fgets(e1[i].telefone, 52, stdin);
        gotoxy(5,16);printf("Bairro: ");
        gotoxy(13,16);fgets(e1[i].bairro, 102, stdin);
        gotoxy(5,17);printf("Rua: ");
        gotoxy(10,17);fgets(e1[i].rua, 102, stdin);
        gotoxy(5,18);printf("Casa ou Apartamento: ");
        gotoxy(26,18);fgets(e1[i].casaouap, 52, stdin);
        gotoxy(5,19);printf("Numero da Residencia: ");
        gotoxy(27,19);fgets(e1[i].numeroc, 32, stdin);
        gotoxy(5,20);printf("Ponto de Referencia: ");
        gotoxy(27,20);fgets(e1[i].pontoR, 102, stdin);
    }
    imprimirDadosEntrega(e1);
    fflush(stdin);
    card=escolhaCardapio();
    do{
        if (card ==1){//CARDAPIO DO HAMBUGUER
            tipo = cardapioHamburguer();
            do{
                limparTela();
                if(tipo==1){
                    strcpy(cardapio[cont_linhas],"Tradicional= R$4.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],4.00);
                    cont_linhas++;

                }else if(tipo==2){
                    strcpy(cardapio[cont_linhas],"X-Egg= R$4.50");
                    valor+= quantidadeProduto(cardapio[cont_linhas],4.50);
                    cont_linhas++;

                }else if(tipo==3){
                    strcpy(cardapio[cont_linhas],"X-Burguer= R$5.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],5.00);
                    cont_linhas++;

                }else if(tipo==4){
                    strcpy(cardapio[cont_linhas],"X-Coracao= R$6.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],6.00);
                    cont_linhas++;

                }else if(tipo==5){
                    strcpy(cardapio[cont_linhas],"X-Bacon= R$7.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],7.00);
                    cont_linhas++;

                }else if(tipo==6){
                    strcpy(cardapio[cont_linhas],"X-Apresuntado= R$7.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],7.00);
                    cont_linhas++;

                }else if(tipo==7){
                    strcpy(cardapio[cont_linhas],"X-Cheddar= R$7.00");
                    valor+= quantidadeProduto(cardapio[cont_linhas],7.00);
                    cont_linhas++;

                }else if(tipo==0)
                    limparTela();
                else{
                    limparTela();
                    gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                    Sleep(1000);
                    tipo = cardapioHamburguer();
                }
                limparTela();
                if(tipo != 0){
                    gotoxy(5,12);printf(" > Deseja pedir mais algum hamburguer?");
                    gotoxy(5,13);printf("Se sim, digite: 1");
                    gotoxy(5,14);printf("Se não, digite: 0");
                    gotoxy(5,15);printf("Escolha: ");
                    scanf("%d", &tipo);
                    if(tipo==0)
                        limparTela();
                    else
                        tipo = cardapioHamburguer();
                }
            }while(tipo != 0);
        }
        else if(card ==2){//CARDAPIO DA BEBIDA
            tipo = cardapioBebida();
            do{
                if (tipo==1){//AGUA
                    do{
                        tamanho = consultaCardBebida("Agua");
                        if(tamanho==1){
                            strcpy(cardapio[cont_linhas],"ÁGUA (250 ml)= R$1.50");
                            valor+= quantidadeProduto(cardapio[cont_linhas],1.50);
                            cont_linhas++; tamanho =0;
                        }else if(tamanho==2){
                            strcpy(cardapio[cont_linhas],"ÁGUA (1 Litro)= R$2.50");
                            valor+= quantidadeProduto(cardapio[cont_linhas],2.50);
                            cont_linhas++; tamanho =0;
                        }else if(tamanho==3){
                            strcpy(cardapio[cont_linhas],"ÁGUA (2 Litros)= R$4.00");
                            valor+= quantidadeProduto(cardapio[cont_linhas],4.00);
                            cont_linhas++; tamanho =0;
                        }else{
                            limparTela();
                            gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                            Sleep(1000);
                            tamanho = consultaCardBebida("Agua");
                        }
                    }while(tamanho != 0);
                }
                else if (tipo==2){//SUCO
                    do{
                        tamanho =consultaCardBebida("Suco");
                        if(tamanho==1){
                            strcpy(cardapio[cont_linhas],"Suco de Maracuja= R$3.00");
                        }else if(tamanho==2){
                            strcpy(cardapio[cont_linhas],"Suco de Umbu= R$3.00");
                        }else if(tamanho==3){
                            strcpy(cardapio[cont_linhas],"Suco de Manga= R$3.00");
                        }else if(tamanho==4){
                            strcpy(cardapio[cont_linhas],"Suco de Graviola= R$3.00");
                        }else if(tamanho==5){
                            strcpy(cardapio[cont_linhas],"Suco de Laranja= R$3.00");
                        }else{
                            limparTela();
                            gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                            Sleep(1000);
                        }
                        if(tamanho > 0 && tamanho < 6){
                            valor+= quantidadeProduto(cardapio[cont_linhas],3.00);
                            cont_linhas++; tamanho =0;
                        }
                    }while(tamanho != 0);
                }
                else if (tipo==3){//CAFE
                    strcpy(cardapio[cont_linhas],"Café (200ml)= R$2.50");
                    valor+= quantidadeProduto(cardapio[cont_linhas],2.50);
                    cont_linhas++; tamanho =0;

                }
                else if (tipo==4){//REFRIGERANTE
                    do{
                        tamanho= consultaCardBebida("Refrigerante");
                        if(tamanho==1){
                            strcpy(cardapio[cont_linhas],"Coca-Cola");
                        }else if(tamanho==2){
                            strcpy(cardapio[cont_linhas],"Sprite");
                        }else if(tamanho==3){
                            strcpy(cardapio[cont_linhas],"Fanta");
                        }else if(tamanho==4){
                            strcpy(cardapio[cont_linhas],"Guarana");
                        }else if(tamanho==5){
                            strcpy(cardapio[cont_linhas],"Itubaina");
                        }else{
                            limparTela();
                            gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                            Sleep(1000);
                            tamanho = consultaCardBebida("Refrigerante");
                        }
                        if(tamanho > 0 && tamanho < 6){
                            do{
                                limparTela();
                                gotoxy(9,12);printf(" * %s",cardapio[cont_linhas]);
                                gotoxy(5,14);printf("1- Lata 250ml = R$ 2.50");
                                gotoxy(5,15);printf("2- Garrafa de 1 litro = R$ 5.00");
                                gotoxy(5,16);printf("3- Garrafa de 2 litros = R$ 7.00");
                                gotoxy(5,18);printf(" Digite o numero do tamanho que você deseja: ");
                                scanf("%d", &tamanhoRefri);

                                if(tamanhoRefri == 1){
                                    strcat(cardapio[cont_linhas]," de 250 mL= R$2.50");
                                    valor+= quantidadeProduto(cardapio[cont_linhas],2.50);
                                    cont_linhas++; tamanhoRefri =0; tamanho = 0;
                                }else if(tamanhoRefri == 2){
                                    strcat(cardapio[cont_linhas]," de 1 L= R$5.00");
                                    valor+= quantidadeProduto(cardapio[cont_linhas],5.00);
                                    cont_linhas++; tamanhoRefri =0; tamanho = 0;
                                }else if(tamanhoRefri == 3){
                                    strcat(cardapio[cont_linhas]," de 2 L= R$7.00");
                                    valor+= quantidadeProduto(cardapio[cont_linhas],7.00);
                                    cont_linhas++; tamanhoRefri =0; tamanho = 0;
                                }else{
                                    limparTela();
                                    gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                                    Sleep(1000);
                                }
                            }while(tamanhoRefri != 0);
                        }
                    }while(tamanho != 0);
                }
                else if(tipo==0)//VOLTAR
                    limparTela();
                else{//CASO O USUARIO DIGITE UM NUMERO DIFERE DAS OPÇÕES DE BEBIDA
                    limparTela();
                    gotoxy(5,13);printf("Opção Invalida, Tente novamente!");
                    Sleep(1000);
                    tipo = cardapioBebida();
                }

                limparTela();
                if(tipo != 0){//PERGUNTA SE O USUARIO QUER COMPRAR MAIS ALGUMA BEBIDA
                    gotoxy(5,12);printf(" > Deseja pedir mais alguma bebida?");
                    gotoxy(5,13);printf("Se sim, digite: 1");
                    gotoxy(5,14);printf("Se não, digite: 0");
                    gotoxy(5,15);printf("Escolha: ");
                    scanf("%d", &tipo);
                    if(tipo==0)
                        limparTela();
                    else
                        tipo = cardapioBebida();
                }
            }while(tipo !=0 );//FIM DO DO-WHILE DAS BEBIDAS
        }
        else if(card ==0){//PARA SAIR DA PRIMEIRA TELA E IMPRIMIR A COMANDA
            card= 0;
        }
        else{//CASO O USUARIO DIGITE UM NUMERO DIFERENTE DE 0, 1 OU 2;
            limparTela();
            gotoxy(5,15);printf(" Opção inválida, Tente novamente!");
            Sleep(1000);
        }
        card=escolhaCardapio();
    }while(card != 0);//FIM DO DO-WHILE DA ESCOLHA DO CARDAPIO;

    do{
        limparTela();
        gotoxy(30,12);printf("Digite 1 caso queira comer no estabelecimento!");
        gotoxy(30,13);printf("Digite 2 caso queira que o lanche seja entregue na sua residência!");
        gotoxy(30,14);printf("Opção: ");
        gotoxy(36,14);scanf("%d",&escolhaFinal);
        if(escolhaFinal == 1){
            strcpy(cardapio[48],"No estabelecimento!");
            escolhaFinal = 0;//sair do do-while
        }
        else if(escolhaFinal == 2){
            limparTela();
            gotoxy(30,12);printf("Deseja que seja entregue no endereço: ");
            gotoxy(30,13);printf("Dados 1 ou Dados 2?");
            gotoxy(30,14);printf("Opção: ");scanf("%d",&escolhaDados);
            if(escolhaDados == 2)
                strcpy(cardapio[48],"Será entregue no endereço do dados 2!");
            else
                strcpy(cardapio[48],"Será entregue no endereço do dados 1!");
            escolhaFinal=0;
        }else{
            printf("Opção inválida, tente novamente!");
            escolhaFinal = 4;
        }
    }while(escolhaFinal != 0);

    carregando();// "CARREGANDO COMANDA, POR FAVOR AGUARDE"
    limparTela();
    textcolor(WHITE);
    burgart(3);sucoart(81);

    //IMPRIMIR COMANDA
    textcolor(COR_LETRA);
    gotoxy(40,11);printf("** OBS = %s",cardapio[48]);
    gotoxy(42,12);printf("###################################");
    gotoxy(42,13);printf("| Pedido de %s", e1[0].nome);
    gotoxy(42,14);

    for(int cont_a=0; cont_a<cont_linhas; cont_a++){
        gotoxy(42,14+cont_a);printf("|   -%s            ",cardapio[cont_a]);
        gotoxy(42,15+cont_a);printf("|   -Desconto de: %.2f       ",descontoPromocao(valor));
        gotoxy(42,16+cont_a);printf(" -------------------------         ");
        gotoxy(42,17+cont_a);printf(" | Total a pagar: %.2f   |         ", valor - descontoPromocao(valor));
        gotoxy(42,18+cont_a);printf(" -------------------------         ");
        gotoxy(42,19+cont_a);printf("###################################");
        gotoxy(42,20+cont_a);
    }
    getch();
    return 0;
}
