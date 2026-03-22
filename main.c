#include <stdio.h>
#include <stdlib.h>


int main(){
    int time,period_no;

    printf("Enter the period number:");
    scanf("%d",&period no);

    switch(period_no){

      case1:
             printf("Period 1:CP");
             Printf("Time:7:15 to 8:15");
             break;

      case2:
            printf("Period 2:CO");
            printf("Time:8:15 to 9:15");
            break;
      case3:
            printf("Period 3:CMAT");
            printf("Time:10:00 to 11:00");
            break;

        default:
             printf("Enter the period number 1 to 3");
    }
    return 0;
}
