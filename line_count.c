#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("sample.txt","r");
    if(fp==NULL){
     printf("File has not been opened");
     return 1;
}
     int ch;
     int char_count=0;
     int line_count=0;
     while((ch=fgetc(fp))!= EOF){
         char_count++;
         if(ch=='\n')line_count++; }
     fclose(fp);
    printf("Characters:%d\n",char_count);
    printf("Lines:%d\n",line_count);
return 0;
}

    
