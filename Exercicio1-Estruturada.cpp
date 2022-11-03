#include <iostream>
#include <locale.h>
using namespace std;
 
int main() 
{
	setlocale(LC_ALL, "English");
	char mensagem[20], cifra;
	int i, rotacao;
	
	cout << "Digite uma mensagem: ";
	cin.getline(mensagem, 20);
	cout << "Digite a rotacao entre 1-5: ";
	cin >> rotacao;
	
	if (rotacao <6 && rotacao >0) 
	{
	for(i = 0; mensagem[i] != '\0'; ++i) 
	{
	cifra = mensagem[i];
		if(cifra >= 'a' && cifra <= 'z') 
		{
		cifra = cifra + rotacao;
			if(cifra > 'z') 
			{
			cifra = cifra - 'z' + 'a' - 1;
		    }
		mensagem[i] = cifra;
		}
				else if(cifra >= 'A' && cifra <= 'Z') 
				{
				cifra = cifra + rotacao;
					if(cifra > 'Z') 
					{
					cifra = cifra - 'Z' + 'A' - 1;
					}
				mensagem[i] = cifra;
				}
	}
	cout << "Mensagem criptografada: " << mensagem;	
	}
	return 0;
}
