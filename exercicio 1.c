#include "stdio.h"

int main() 
{ 
    printf("\n Esse programa calcula alguma coisa FODA.");
int a,b,pow=4; //modifiquei

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