#include <stdio.h>
#include <stdlib.h>

void sayHello(){
 printf("Hello,student!You just called me back!\n");
 }

 void studentwork("void(*callbackfunc)()){
      printf("Student is doing homework...\n");
        callbackfunc();

      int main(){
      studentwork(sayHello);
      return 0;
      }

