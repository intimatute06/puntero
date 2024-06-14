//puntero no entendi ni vergas  

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

   int a=100;
   int *p=&a;

   printf("EL valor de a es:%d\n",a);

    printf("EL contenido del punto p :%d\n",*p);
    
    
    *p = 500;
    
    printf("---------------------------------\n");
    printf("EL valor de a es:%d\n",a);

    printf("La ubicacoin de memoria de p es %p",p);

    return 0;
}
