#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
     int opc;
    system("color f4");
    SetConsoleTitle("Compra de Ingressos");

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                                  Ingressos\n");
    printf("1-Comprar ingressos\n");
    printf("2-Verifique quem tem direito de isenta ou meia\n");
    scanf("%d", &opc);
    switch(opc){
    case 1:
    pergunta();
    break;
    case 2:
        direito();
        break;
    default:
        printf("invalido\n");
        break;
    }



    system("pause");
    return 0;
} //finalizando o main.


int ingressos(){
char nome[100];
int cod;

FILE*arquivo;

arquivo = fopen("Ingresso_completo.csv", "a+");

int nf=0,avalia=0;
float valor=0.00,i,m,is;


printf("Comprando ingressos\n");
printf("Digite o nome informado pelo visitante: ");
scanf("%s", nome);
//fgets(nome, 100 , stdin);
system("cls");
do{
    nf=0;
printf("ol� %s\n", nome);
printf("Valor de cada inteira 20,00 R$\n\n Quantas entradas inteiras voc� deseja adicionar?\n");
scanf("%f", &i);
valor=valor+(i*20.00);
system("cls");
printf("Total a pagar %.2f\n",valor);

printf("Valor de cada Entrada Meia 10,00 R$\n\n Quantas Entrada Meia voc� deseja adicionar?\n");
scanf("%f", &m);
valor=valor+(m*10.00);
system("cls");
printf("Total a pagar %.2f\n",valor);
printf("Quantas entradas Isentas voc� deseja adicionar?\n");
scanf("%f", &is);
valor=valor+(is*0.00);
system("cls");
printf("Total a pagar %.2f\n",valor);

printf("finalizar compra?\n1-Sim\t2-N�o\n");
scanf("%d", &nf);
} while(nf!=1);

printf("Total a pagar %.2f\n",valor);
printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("Pague em dinheiro no caixa ou na chave de pix 54746960860\n\n");
printf("------------------------------------------------------------------------------------------------------------------------\n");

printf("De 1 a 10 qual seu n�vel de satisfa��o com a gente %s?\n", nome);
scanf("%d", &avalia);
Sleep(1000);
printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("Entendi Obrigado pela compra \ %s!\n", nome);
Sleep(2000);

if(arquivo!=NULL){
    fprintf(arquivo,"%s comprou-> %.2f Inteira, %.2f Meia, %.2f Isenta, Total: %.2fR$, Avalia��o: %d Data: %s,Hora: %s\n----------------------------------------------------------------------------------------------------------------------------------\n",nome, i, m, is, valor, avalia,__DATE__,__TIME__);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);

i=0;
m=0;
is=0;
valor=0;
system("cls");
main();

return 0;
}

int direito()

{
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf(" Estudantes, professores e servidores publicos\n tem direito do privilegio de pagar meia na entradada\n\n");
    printf(" Idosos, gestantes e pessoas portadoras de defici�ncia ou com necessidades especiais,\n tem direito a ingresso de taxa isenta\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf(" Em caso de Meia, Mostre para algum atendente\n um documento que comprove o motivo\n de meia ou cadastre-o ao pedir o ingresso\n");
    printf("\n Tecle enter para voltar ao menu principal\n\n\n");
    system("pause");
    system("cls");
    main();

}

int pergunta(){
int opc;
topo:
printf(" Pressione 1 para comprar ingresso para todas as sess�es\n\n Pressione 2 para comprar ingressos separados\n");
scanf("%d", & opc);


switch(opc){
case 1:
ingressos();
break;

case 2:
especifico();
break;
default:
system("cls");
goto topo;
break;
}
return 0 ;
}

int especifico(){

int usuario;
char nome[100];

FILE*file;

file = fopen("Ingresso_separado.csv", "a+");


    usuario++;
    int opc=0, in,volt, add, se1=0,se2=0,se3=0,se4=0;
    int i=0,m=0,is=0;
    float valor=0.00;
    int avalia;

        printf("Comprando ingressos separados\n");
printf("Digite seu primeiro nome: ");
scanf("%s", nome);
//fgets(nome, 50 , stdin);
  label:
        opc=0;
    system("cls");
printf("Sess�es disponiveis\n");
printf("Digite o n�mero da op��o desejada\n");
printf("(1)100 ANOS DE SANTOS DUMONT\n");
printf("(2)OLIMPIADAS DE 2024 \n");
printf("(3)OLIMPIADAS NA ANTIGUIDADE\n");
printf("(4)ARTE MODERNA\n");
scanf("%d", & opc );



switch(opc){
case 1:
    do{
printf("1-Adicionar inteira\t2-Adicionar Meia\t3-Adicionar Isenta\n");
scanf("%d", &in);
if(in==1){
    valor=valor+5.00;
    i=i+1;
}
else if(in==2){
     valor=valor+2.50;
     m=m+1;
}
else{
 valor=valor+0.00;
 is=is+1;
}
printf("adicionar mais ingressos?\nSim(1)\tN�o(2)\n");
scanf("%d", &volt);
    } while(volt==1);
    printf("O valor total � de: %.2f\n", valor);
 se1=se1+1;
break;
case 2:
     do{
printf("1-Adicionar inteira\t2-Adicionar Meia\t3-Adicionar Isenta\n");
scanf("%d", &in);
if(in==1){
    valor=valor+5.00;
    i=i+1;
}
else if(in==2){
     valor=valor+2.50;
     m=m+1;
}
else{
 valor=valor+0.00;
 is=is+1;
}
printf("adicionar mais ingressos?\nSim(1)\tN�o(2)\n");
scanf("%d", &volt);
    } while(volt==1);
    printf("O valor total � de: %.2f\n", valor);
     se2=se2+1;
    break;

    case 3:
     do{
printf("1-Adicionar inteira\t2-Adicionar Meia\t3-Adicionar Isenta\n");
scanf("%d", &in);
if(in==1){
    valor=valor+5.00;
    i=i+1;
}
else if(in==2){
     valor=valor+2.50;
     m=m+1;
}
else{
 valor=valor+0.00;
 is=is+1;
}
printf("adicionar mais ingressos?\nSim(1)\tN�o(2)\n");
scanf("%d", &volt);
    } while(volt==1);
    printf("O valor total � de: %.2f\n", valor);
     se3=se3+1;
    break;
    case 4:
         do{
printf("1-Adicionar inteira\t2-Adicionar Meia\t3-Adicionar Isenta\n");
scanf("%d", &in);
if(in==1){
    valor=valor+5.00;
    i=i+1;
}
else if(in==2){
     valor=valor+2.50;
     m=m+1;
}
else{
 valor=valor+0.00;
 is=is+1;
}
printf("adicionar mais ingressos?\nSim(1)\tN�o(2)\n");
scanf("%d", &volt);
    } while(volt==1);
    printf("O valor total � de: %.2f\n", valor);
     se4=se4+1;
        break;

    default:
        printf("invalido");
        break;
}
printf("Adicionar outra sess�o? 1-Sim 2-N�o\n");
scanf("%d", &add);
if(add==1){
    goto label;
}
else{

}

if(se1>=1){

    printf("Voc� tem direito a sess�o 1\n");
}
if(se2>=1){
      printf("Voc� tem direito a sess�o 2\n");
}
if(se3>=1){
      printf("Voc� tem direito a sess�o 3\n");
}
if(se4>=1){
      printf("Voc� tem direito a sess�o 4\n");
}
 printf("O valor total a se pagar � de: %.2f\n", valor);
printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("Pague em dinheiro no caixa ou na chave de pix 54746960860\n\n");
printf("------------------------------------------------------------------------------------------------------------------------\n");

printf("De 1 a 10 qual seu n�vel de satisfa��o com a gente %s?\n", nome);
scanf("%d", &avalia);
Sleep(1000);
printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("Entendi Obrigado pela compra \ %s!\n", nome);
Sleep(2000);


if(file!=NULL){
    fprintf(file,"%s comprou -> %d sess�o1 , %d sess�o2, %d sess�o3, %d sess�o4, %d Inteira, %d meia, %d Isenta, o valor Total: %.2fR$, Avalia��o: %d Data: %s, Hora: %s\n----------------------------------------------------------------------------------------------------------------------------------\n",nome, se1, se2, se3, se4, i, m, is, valor, avalia,__DATE__,__TIME__);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(file);



in=0;
volt=0;
add=0;
se1=0;
se2=0;
se3=0;
se4=0;
i=0;
m=0;
is=0;
valor=0.00;
system("cls");
main();
}

