#include<stdio.h>
int main(){
    char str[30];
    // In string scanf only the forst word will be considered
    // scanf("%[^\n]s",str);
    //scanf <<< gets in gets there is no use of & address operator;
    gets(str);
    printf("%s",str);
    return 0;
}