#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro() // Funcao responsavel por cadastrar os usuarios no sistema
{
	//inicio da criacao de variaveis/strings
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //Final da criacao de variaveis/strings
    
    printf("Digite o CPF a ser cadastrado: "); // Coletando informacoes do usuario
    scanf("%s", cpf); // Onde armazena as strings
    
    strcpy(arquivo, cpf); // Responsavel por copiar os valores das strings
    
    FILE *file; // Cria o arquivo
    file = fopen(arquivo, "w"); // Cria o carquivo e o "w" significa escrever
    fprintf(file,cpf); //salvo o valor da variavel
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s" ,nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
    
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // Abre o arquivo e "r" significa ler 
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, N�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

    int deletar() // Funcao responsavel por deletar o CPF
    {
	char cpf[40];
	
	printf("Digite o CPF do usuario a ser deletado: "); // Coletando o CPF a ser deletado
	scanf("%s", cpf); // Onde armazena as strings
	
	remove(cpf); // funcao que ira remover o CPF
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL) // Caso o CPF seja nulo 
	{
		printf("O usuario n�o se encontra no sistema! .\n"); // Se o CPF for nulo e/ou seja deletado passara essa mensagem
		system("pause"); // Funcao que faz a msg permanecer na tela ate ter algum comando para voltar ao menu
	}
	
    }

        int main()
   {
	    int opcao=0;
	    int x=1;
	     
		 setlocale(LC_ALL, "Portuguese");
	 
	    for(x=1;x=1;)
	    {
	    system("cls"); 
	 
         printf("### Cart�rio da Ebac ###\n\n"); // Inicio do menu
	     printf("Escolha a op��o desejada do menu\n\n");
	     printf("\t1 - Registrar nomes\n");
	     printf("\t2 - Consultar nomes\n");
	     printf("\t3 - Deletar nomes\n\n");
	     printf("\t4 - Sair do Sistema\n\n");
	     printf("Op��o: "); // fim do menu
	 
	     scanf("%d", &opcao); // armazenando a escolha ao usuario
	 
	     system ("cls");
	     
	   {
	    
	     
	     switch(opcao) // Inicio da selecao do menu 
	     {
	     	case 1:
	        registro(); // chamada de funcoes
	        break;
	        
	        case 2:
	        consulta();
            break;
            
            case 3:
            deletar();
	 	    break;
	 	    
	 	    case 4:
	 	    printf("Obrigado por utilizar o sistema!\n");
	 	    return 0;
	 	    break;
	 	    
	 	    default:
	 	    printf("Essa op��o n�o est� dispon�vel!\n");
	 	    system("pause");
	 	    break;
	 	    
		 } // fim da selecao
	    
	
       }
	 
       }
   
         }
