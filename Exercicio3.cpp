#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
	char nome[99], auxiliar[99], sobrenome[99];
	int a = 0,b = 0;
   
	printf("Digite um nome: ");
	scanf("%[^\n]s", nome);
  
 
	for(int i = 0; i<40;i++)
	{
    	if (i == 0)
		{
      	auxiliar[a] = toupper(nome[0]);
      	a++;
    }
    if (nome[i] == 32)
	{
      auxiliar[a] = toupper(nome[i + 1]);
      a++;
      }
    if (nome[i] == 0 && b == 0)
	{
      for(int x = strlen(nome)-1;x>0;x--)
	  {
        if(nome[x] == 32)
		{
          break;
          }
        else
		{
          sobrenome[b] = toupper(nome[x]);
          b++;
        }
      }
    }
    
  }
  
  auxiliar[a] = 0;
  
	for(int i = strlen(sobrenome); i>=0; i--)
  {
    printf("%c",sobrenome[i]);
    }
	printf(", ");
	for(int i = 0;i < strlen(auxiliar) -1;i++)
	{
    printf("%c.",auxiliar[i]);
  }
  return 0;
}
