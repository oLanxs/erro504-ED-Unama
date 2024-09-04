#include <stdio.h>
#include <malloc.h>

int main(){
   int* y; // tipo ponteiro para inteiro
   int tamanhoDeInteiro = sizeOfInt(int);
   printf("Tamanho de inteiro: %i", tamanhoDeInteiro);
   printf("\n");
   void* pVoid;
   y = malloc(tamanhoDeInteiro); // malloc retorna endereço
   printf("pVoid: %p, pVoid");
   printf("\n");
   y = (int *) pVoid;// convertendo de ponteito void para ponteiro

}