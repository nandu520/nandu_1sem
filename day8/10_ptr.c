#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int roll_num;
    int marks;
}st1,st2;
int main(){
strcpy(st1,st2.name,"murali");
st1,st2.marks=12;
st1,st2.roll_num=101;
printf("student details:\n");
printf("name:%s\n",st1,st2.name);
printf("roll no:%d\n",st1,st2.roll_num);
printf("marks:%d\n",st1,st2.marks);
}

