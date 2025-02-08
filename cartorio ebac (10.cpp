#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser cadastrado:");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file; // cria o arqivo
	file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file); // fech o arqivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file =fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	file = fopen(arquivo,"a");
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file =fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file =fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file =fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL,"portuguese"); //definindo linguagens
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser  consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");
	
	}
	while(fgets(conteudo,200,file) != NULL)
	{
		printf("\nEssas s�o as informa��es do us�ario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0; // defenindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	system("cls");
		
		
	setlocale(LC_ALL,"portuguese"); //definindo linguagens
	
	printf("###Cart�rio da  Ebac###\n\n");//inicio do menu
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1-registrar nomes\n");
	printf("\t2-consultar nomes\n");
	printf("\t3-deletar nomes\n"); //fim do menu
	printf("\t4- Sair do sistema\n\n");
	printf("op��o");
	
	scanf("%d",&opcao);
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por  utilizar o sistema!\n");
		return 0;
		break;	
		
					
		default:
		printf("Essa op��o n�o esta disponivel!\n");
		system("pause");
		break;		
				
	}
	

	}
	

}  
