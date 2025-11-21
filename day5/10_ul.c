#include<stdio.h>
int main()
{
    char ch;
    printf("eneter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is an uppercase character.\n",ch);
    }else if(ch>='a' && ch<='z'){
        printf("%c is an lowercase character.\n",ch);
     }else{
        printf("%c is not an alphabatic character.\n",ch);
     }
}