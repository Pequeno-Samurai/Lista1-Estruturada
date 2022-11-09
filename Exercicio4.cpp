#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void op();
void menu();

int main(void) 
{
	setlocale(LC_ALL, "Portuguese");
	menu();
	
	return 0;
}
void op() 
{
	float n1, n2;
	char op[1];
	printf("Digite um valor: ");
	scanf("%f", &n1);
	printf("Escolha um operador: ");
	scanf("%s", op);
	printf("Digite outro valor: ");
	scanf("%f", &n2);
  
	switch (op[0]) 
	{
	case '+':
    	printf("\n%.2lf + %.2lf = %.2lf\n\n", n1, n2, n1 + n2);
    	break;
  	case '-':
    	printf("\n%.2lf - %.2lf = %.2lf\n\n", n1, n2, n1 - n2);
    	break;
  	case '*':
    	printf("\n%.2lf x %.2lf = %.2lf\n\n", n1, n2, n1 * n2);
    	break;
  	case '/':
    	if (n2 != 0) 
		{
      	printf("\n%.2lf / %.2lf = %.2lf\n\n", n1, n2, n1 / n2);
      	break;
    	} 
	else 
	{
      printf("Sem solução.");
    }
   }
}
void menu()
{
  int ops = 0;
  
  while(ops != 2)
  {
  printf("Escolha uma das operaçõess:\n1-Fazer uma operação matemática.\n2- Sair\n>>>>>>>>:");
  scanf("%d", &ops);
  if(ops == 1)
  {
	op();
  }
  }
}
