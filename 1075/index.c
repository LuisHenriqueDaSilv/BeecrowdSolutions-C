#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n;
     scanf("%d", &n);
     for(int i =1; i<=10000; i++){
         if(i%n == 2){
             printf("%d\n", i);
         }
     }
 
    return 0;
}