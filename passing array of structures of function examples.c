#include <stdio.h>
#include <stdlib.h>

struct stud{
int id;
char name[20];
};
void display(struct stud s[],int n)
{

    for(int i=0;i<n;i++)
        printf("ID:%d,Name:%s\n",s[i]. id,s[i]. name);
}
int main(){
struct stud s[3]={{101,"Rakesh"},{102,"Sudharshan"},{103,"pavan"}};
display(s,3);
return 0;
}

