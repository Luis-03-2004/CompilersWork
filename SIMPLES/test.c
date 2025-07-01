int fatorial(int n){
   int r;
   if(n<0){   
      return 0;
   }
   r=fatorial(n-1);
   return n*r;
}
int soma(int n){
   int r;
   if(n<0){   
      return 0;
   }
   if(n==0||n==1){   
      return 1;
   }
   else{   
      return fatorial(n);
      r=fatorial(n-1);
      return n*r;
   }
}
void imprime(int n){
   printf("\n%d",n);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
   int numero;
   int resultado;
   scanf("%d",&numero);
   resultado=fatorial(numero);
   printf("\n%d",resultado);
}
