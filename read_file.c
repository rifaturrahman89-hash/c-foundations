#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *f=fopen("numbers.txt","r");
int x;
if(f==NULL){
   printf("File not found\n");
   return 1;
}
while(fscanf(f,"%d",&x)==1){
     printf("%d\n",x);
}
   fclose(f);
   return 0;
}
