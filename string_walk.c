#include<stdio.h>
int main(){
    char str[]="Hello,World!";
    char *p=str;
    while(*p!='\0'){
         printf("character:%c,Address:%p\n", *p, (void*)p);
         p++;}
   return 0;
}
