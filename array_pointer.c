#include <stdio.h>

int main() {
    int arr[5]={10,20,30,40,50};
    printf("arr[0]=%d\n",arr[0]);
    printf("*arr=%d\n", *arr);
    printf("*(arr+1)=%d\n",*(arr+1));
     
    for(int i=0;i<5;i++){
       printf("address of arr[%d] = %p\n",i,&arr[i]);
}
     return 0;
}
       
    
