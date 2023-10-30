#include <stdio.h>
#include <stdlib.h>

int main(void) {
  for(int i=1;i<=50;i++){
    printf("%-5d ",rand()%1000);
    if(i%5==0)
      printf("\n");
    
  }
  
  return 0;
}