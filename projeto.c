#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cliente 
{
	char nome[100];
	char tel[50];
	char email[100];	
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, op;
	struct cliente ficha[5];
	int contador;
	
	contador = 0;
	do{
		system("cls");
		printf("----------- AGENDA - VERSAO BETA -----------\n");
		printf("\n 1 - Digite 1 para inserir um novo cadastro;"); 
		printf("\n 2 - Digite 2 para mostrar clientes cadastrados;");
		printf("\n 0 - Digite 0 para encerrar;\n");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op) {
			
			case 1:
				system("cls");
				if (contador >= 5){
					printf("\n\n-----------Agenda lotada!-----------\n\n");
					system("pause");
				}else{
					printf("-----CADASTRO DE CLIENTES-----\n\n");
					printf("Código: %d\n", contador + 1);
					printf("Insira o nome do cliente: ");
					gets(ficha[contador].nome);
					fflush(stdin);
					printf("Insira o telefone do cliente: ");
					gets(ficha[contador].tel);
					fflush(stdin);
					printf("Insira o e-mail do cliente: ");
					gets(ficha[contador].email);
					fflush(stdin);
					contador++;
					system("pause");
					system("cls");
				}
				break;
			case 2:
				system("cls");
				if(contador > 0) {
					printf("-----LISTA DE CLIENTES-----\n\n");
					for(i = 0; i < contador; i++){
						printf("CODIGO: %d\n", i + 1);
						printf("NOME DO CLIENTE: %s\n", ficha[i].nome);
						printf("TELEFONE: %s\n", ficha[i].tel);
						printf("E-MAIL: %s\n\n", ficha[i].email);
					}
					system("pause");
				} else {
						printf("\n\n-----------Agenda vazia!-----------\n\n");	
						system("pause");
						system("cls");
				}
				break;	
			case 0:
				system("cls");
				printf("Saindo da agenda!\n\n");
				system("pause");
				break;
			default: 
				system("cls");
				printf("\n-----------Erro: opção inválida!-----------\n\n");
				system("pause");
				break;	
		}
			
	} while (op != 0);

	return 0;
}

	
	
		
		

