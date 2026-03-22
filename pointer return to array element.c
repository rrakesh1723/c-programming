#include <stdio.h>
#include <stdlib.h>

int*getelement(int arr[],int index){
return&arr[index];
}
int main(){
int arr[5]={4,8,16,20,25};
int*p=getelement(arr,2);
printf("Element at index 2=%d\n",*p);
return 0;
}
