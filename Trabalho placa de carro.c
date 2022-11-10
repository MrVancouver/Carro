#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

typedef struct carro
{
   int cod;
   char marca [40];
   char modelo [40];
   int ano;
   char letplaca[3];
   char numplaca[4];

}carro;
carro car[10];

void menu();
void inicializar();
void imprimir();
void cadastrar();

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");

int i;
int op;//numero da opcao
int ano;
int z;
char modelo[20];

z=0;//contador identificador para as condicoes if
ano=0; 
i=0; //contador de carros
car[i].cod = 0; //identificador 
              
strcpy(car[i].marca,"NULL");
strcpy(car[i].modelo,"NULL");
strcpy(car[i].letplaca,"NULL");
strcpy(car[i].numplaca,"NULL");
car[i].ano = 0;
              
do
             
{
printf("\n Opções:");
printf("\n 1. cadastrar veiculo");
printf("\n 2. listar veiculos");
printf("\n 3. Pesquisar modelo");
printf("\n 4. Mostrar veiculos a partir de certo ano");
printf("\n 5. sair");
printf("\n \n Digite a opcao: ");
scanf("%d",&op);
switch(op)
                             
{
case 1:
if (car[i].cod<=9)
{
car[i].cod=i;
printf("\n Digite a marca do veículo:");
scanf("%s",&car[i].marca);
printf("\n Digite o modelo do veículo:");
scanf("%s",&car[i].modelo);
printf("\n Digite as 3 letras da placa do veículo:");
scanf("%s",&car[i].letplaca);
printf("\n Digite os 4 numeros da placa do veículo:");
scanf("%s",&car[i].numplaca);
printf("\n Digite o ano do veículo:");
scanf("%d",&car[i].ano);
i=i+1;
                                                                            
}                                                             
else
                                                             
{
printf("\n Limite de cadastro e 10");
}

break;
                                                             
case 2:
for(int x=0; x<i; x++)
                                                                             
{
printf("\n A marca do veiculo e: %s",car[x].marca);
printf("\n O modelo do veiculo e: %s",car[x].modelo);
printf("\n O ano do veiculo e: %d",car[x].ano);
printf("\n A placa do veiculo e: %s", car[x].letplaca); printf("%s", car[x].numplaca);
printf("\n\n =================================== \n \n");
}
break;
                                                                            
case 3:
printf("\n   Insira o modelo para pesquisa:");
scanf("%s",&modelo);
for (int x=0; x<i; x++)
                                                                                            
{
if (strcmp(car[x].modelo,strlwr(modelo)) == 0)
{
printf("\n A marca do veiculo e: %s",car[x].marca);
printf("\n O modelo do veiculo  e: %s",car[x].modelo);
printf("\n O ano do veiculo e: %d",car[x].ano);
printf("\n A placa do veiculo e: %s",car[x].letplaca); printf("%s", car[x].numplaca);
printf("\n\n =================================== \n \n");
                                                                                                                           
z++;
}
                                                                                                          

}
if (z==0)
                                                                                           
{
printf("\n Nao foi encontrado o modelo %s \n\n",modelo);
}                                                                                     
else                                                                                            
{
z=0;
}
break;

 case 4:
printf("\nInsira o ano para pesquisar:");
scanf("%d",&ano);
for (int x=0; x<i; x++)
{
if (car[x].ano >= ano)
                                        
{
printf("\n A marca do veiculo e: %s",car[x].marca);
printf("\n O modelo do veiculo e: %s",car[x].modelo);
printf("\n O ano do veiculo e: %d",car[x].ano);
printf("\n A placa do veiculo e: %s",car[x].letplaca); printf("%s", car[x].numplaca);
printf("\n\n =================================== \n \n");
z++;
}
}
if (z==0)
{
printf("\n Nao foi encontrado modelos acima do ano de %d \n\n",ano);
}
else
{
z=0;
}
break;
default:
printf("\n Opcao nao existe");
break;
}
}

while (op!=5 && i<=9);//limita a quantidade de opcoes
if (i==9)
{
printf("\n \n Limite de veiculos alcancado \n \n \n");
}
for (int y=0; y<i; y++)
{
printf("\n A marca do veiculo e: %s",car[y].marca);
printf("\n O modelo do veiculo e: %s",car[y].modelo);
printf("\n O ano do veiculo e: %d",car[y].ano);
printf("\n A placa do veiculo e: %s",car[y].letplaca); printf("%s", car[y].numplaca);
printf("\n\n =================================== \n \n");
}
 return 0;

}