#include "stdio.h"

int main() 
{ 
int a,b,pow=2;

printf("digite o primeiro numero a seguir: "); //modifiquei 
scanf("%d", &a);
printf("digite o segundo numero a seguir: ");  //modifiquei
scanf("%d", &b);

for (int i=1; i<= b; i++)
{
pow =pow*a;
}

printf("%d",a);
}