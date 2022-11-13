#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

struct dados 
{
	char nome_completo[99];
	char endereco[99];
	int numero;
	char complemento[99];
	char bairro[99];
	int cep;
	char estado[99];
	char cidade[99];
	int ddd;
	int cpf;
	int cnpj;
	int inscricao_estadual;
	int inscricao_municipal;
	int cnae;
	char data_nascimento[99];
	bool email_op;
	char email[99];
	int contato;
	int telefone;
	char data[99];
	char assinatura[99];
};
struct dados_carro
{
	char placa[99];
	char modelo[99];
	int ano;
	char cor[99];
};

int le_valida_ano(int x);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int valida_ano1, valida_ano2, valida_ano3;
	
	struct dados credenciado;
	struct dados_carro carro[3];
	
	printf("Razão Social e Nome Completo: ");
	gets(credenciado.nome_completo);
	printf("Endereço: ");
	gets(credenciado.endereco);
	printf("Numero: ");
	scanf("%d", &credenciado.numero);
	fflush(stdin);
	printf("Complemento: ");
	gets(credenciado.complemento);
	printf("Bairro: ");
	gets(credenciado.bairro);
	printf("CEP: ");
	scanf("%d", &credenciado.cep);
	fflush(stdin);
	printf("Estado: ");
	gets(credenciado.estado);
	printf("Cidade: ");
	gets(credenciado.cidade);
	printf("DDD: ");
	scanf("%d", &credenciado.ddd);
	printf("CPF: ");
	scanf("%d", &credenciado.cpf);
	printf("CNPJ: ");
	scanf("%d", &credenciado.cnpj);
	printf("Inscrição estadual: ");
	scanf("%d", &credenciado.inscricao_estadual);
	printf("Inscrição municipal: ");
	scanf("%d", &credenciado.inscricao_municipal);
	printf("CNAE: ");
	scanf("%d", &credenciado.cnae);
	printf("Data de Nascimento: ");
	gets(credenciado.data_nascimento);
	printf("Deseja receber os proximos boletos por email ?\nSIM [] NÂO []\nDigite 1 para sim ou 0 para não:  ");
	scanf("%d", &credenciado.email_op);
	fflush(stdin);
	printf("E-mail: ");
	gets(credenciado.email);
	printf("Contato: ");
	scanf("%d", &credenciado.contato);
	fflush(stdin);
	printf("Telefone comercial: ");
	scanf("%d", &credenciado.telefone);
	fflush(stdin);
	printf("Data: ");
	gets(credenciado.data);
	printf("Assinatura: ");
	gets(credenciado.assinatura);
	
	printf("Placa: ");
	gets(carro[0].placa);
	printf("Modelo: ");
	gets(carro[0].modelo);
	printf("Ano: ");
	scanf("%d", &carro[0].ano);
	fflush(stdin);
	printf("Cor: ");
	gets(carro[0].cor);
	
	printf("Placa: ");
	gets(carro[1].placa);
	printf("Modelo: ");
	gets(carro[1].modelo);
	printf("Ano: ");
	scanf("%d", &carro[1].ano);
	fflush(stdin);
	printf("Cor: ");
	gets(carro[1].cor);

	printf("Placa: ");
	gets(carro[2].placa);
	printf("Modelo: ");
	gets(carro[2].modelo);
	printf("Ano: ");
	scanf("%d", &carro[2].ano);
	fflush(stdin);
	printf("Cor: ");
	gets(carro[2].cor);
	
	printf("\nRazão Social e Nome Completo: %s", credenciado.nome_completo);
	printf("\nEndereço: %s", credenciado.endereco);
	printf("\nNumero: %d", credenciado.numero);
	printf("\nComplemento: %s", credenciado.complemento);
	printf("\nBairro: %s", credenciado.bairro);
	printf("\nCEP: %d", credenciado.cep);
	printf("\nEstado: %s", credenciado.estado);
	printf("\nCidade: %s", credenciado.cidade);
	printf("\nDDD: %d", credenciado.ddd);
	printf("\nCPF: %d", credenciado.cpf);
	printf("\nCNPJ: %d", credenciado.cnpj);
	printf("\nInscrição estadual: %d", credenciado.inscricao_estadual);
	printf("\nInscrição municipal: %d", credenciado.inscricao_municipal);
	printf("\nCNAE: %d", credenciado.cnae);
	printf("\nData de Nascimento: %s", credenciado.data_nascimento);
	if (credenciado.email_op > 0)
	{
		printf("\nDeseja receber os proximos boletos por email ?\nSIM [X] NÂO []");
	}
	else 
	{
		printf("\nDeseja receber os proximos boletos por email ?\nSIM [] NÂO [X]");
	}
	printf("\nE-mail: %s", credenciado.email);
	printf("\nContato: %d", credenciado.contato);
	printf("\nTelefone comercial: %d", credenciado.telefone);
	printf("\nData: %s", credenciado.data);
	printf("\nAssinatura: %s", credenciado.assinatura);
	
	
	printf("\nPlaca: %s", carro[0].placa);
	printf("\nModelo: %s", carro[0].modelo);
	valida_ano1=le_valida_ano(carro[0].ano);
	if (valida_ano1 >0)
	{
		printf("\nAno: %d é valido", carro[0].ano);
	}
	else 
	{
		printf("\nAno: %d é invalido !", carro[0].ano);
	}
	printf("\nCor: %s", carro[0].cor);

	printf("\nPlaca: %s", carro[1].placa);
	printf("\nModelo: %s", carro[1].modelo);
	valida_ano2=le_valida_ano(carro[1].ano);
	if (valida_ano2 >0)
	{
		printf("\nAno: %d é valido", carro[1].ano);
	}
	else 
	{
		printf("\nAno: %d é invalido !", carro[1].ano);
	}
	printf("\nCor: %s", carro[1].cor);
	
	printf("\nPlaca: %s", carro[2].placa);
	printf("\nModelo: %s", carro[2].modelo);
	valida_ano3=le_valida_ano(carro[2].ano);
	if (valida_ano3 >0)
	{
		printf("\nAno: %d é valido", carro[2].ano);
	}
	else 
	{
		printf("\nAno: %d é invalido !", carro[2].ano);
	}
	printf("\nCor: %s", carro[2].cor);
	
	return 0;
}
int le_valida_ano(int x)
{
	if (x>=1903&&x<=2023)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
