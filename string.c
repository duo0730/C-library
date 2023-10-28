#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Hello"; 
    char str2[]="World!";
    char str3[20];
    char str4[20];
    
    scanf("%s", str3); 
    strcat(str1, str2);//連接str2到str1
    strcpy(str4, str1);//將str1字符串copy到str4
    
    int length = strlen(str1); // 讀取字串長度

    int result = strcmp(str1, str2);//比較str1和str2
    if (result < 0) printf("str1 < str2\n");
    else if (result > 0) printf("str1 > str2\n");
    else printf("str1 = str2\n");

    for(int i=0;str1[i]!='\0';i++) printf("%c\n",str1[i]);

    return 0;
}