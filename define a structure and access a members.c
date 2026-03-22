#include <stdio.h>
#include <stdlib.h>

struct student {
int id;
char name[20];
float marks;
};

int main(){
struct student s1={101,"Rakesh",90};
printf("ID:%d\n",s1.id);
printf("Name:%s\n",s1.name);
printf("Marks:%2f\n",s1.marks);


struct student s2={102,"sudarshan",90};
printf("ID:%d\n",s2.id);
printf("Name:%s\n",s2.name);
printf("Marks:%2f\n",s2.marks);

struct student s3={103,"pavan",90};
printf("ID:%d\n",s3.id);
printf("Name:%s\n",s3.name);
printf("Marks:%2f\n",s3.marks);

return 0;
}
