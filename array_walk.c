#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    printf("Values:\n");
   for(int i=0;i<5;i++){
      printf("%d\n",*(p+i));
      }
     printf("\nAddresses\n:");
     for(int i=0;i<5;i++){
        printf("%p\n",(p+i)); }
     return 0;
}
