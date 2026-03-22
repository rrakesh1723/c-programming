#include <stdio.h>
#include <stdlib.h>

struct book{
int id;
char title[50];
char author[50];
};
int main(){
struct book b1={101,"C Programming","Dennis Ritchie"};
struct book b2={102,"Data Structures","Mark Weisis"};
struct book b3={103,"Operating Systems ","Silberschatz"};

struct book *book[3]={&b1,&b2,&b3};


int searchID,i,found=0;
printf("Enter Book ID to search:");
scanf("%d", &searchID);
for(i=0;i<3;i++){

if(book[i]->id == searchID)
    {
    printf("\nBook Found:\n");
    printf("ID:%d\n",book[i]->id);
    printf("Title:%s\n",book[i]->title);
    printf("Author:%s\n",book[i]->author);
    found=1;
    break;
}
}
if(!found)
    printf("\nBook Not Found!\n");
return 0;
}

