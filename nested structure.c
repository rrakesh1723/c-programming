#include <stdio.h>
#include <stdlib.h>


struct marks{
     float s1;
     float s2;
     float s3;
};
struct Student{
  int subject;
  char name[20];
  struct marks m;
  };
int main(){
    struct Student s1={101,"Rakesh",{90,85,95}};
    printf("Name:%s\n",s1.name);
    printf("marks:%2f-%2f-%2f\n",s1.m.s1,s1.m.s2,s1.m.s3);
    return 0;
}
