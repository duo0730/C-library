#include <stdio.h>
#include <ctype.h>

int main(){
    int a='a';
    int b='10';
    int c='\t';
    int d=' ';

//int isalnum(int c); 檢查字符c是否是字母數字符
    if(isalnum(a))printf("是字母\n");
    else printf("不是字母\n");
    if(isalnum(b))printf("是字母\n");
    else printf("不是字母\n");

//int isalpha(int c); 檢查字符c是否是字母
    if(isalpha(a))printf("是字母\n");
    else printf("不是字母\n");
    if(isalpha(b))printf("是字母\n");
    else printf("不是字母\n");

//int isdigit(int c); 檢查字符c是否是十進制數字
    if(isdigit(a))printf("是數字\n");
    else printf("不是數字\n");
    if(isdigit(b))printf("是數字\n");
    else printf("不是數字\n");

//int isxdigit(int c); 檢查字符c是否是十六進制數字
    int result;
    char e='10';
    result=isxdigit(e);//若e為16進制數字 -> result結果等於1
    printf("%c 傳入isxdigit()的結果: %d\n",e,isxdigit(e));
    result=isxdigit(a);//若a不為16進制數字 -> result結果等於0
    e='M';
    result=isxdigit(e);//result=0
    printf("%c 傳入isxdigit()的結果: %d\n",e,isxdigit(e));

//int iscntrl(int c); 檢查字符c是否是控制字符
    char str1[]="Hello \a ,nice to meet you.";
    char str2[]="Oh! \t Nice to meet you too.";

    int i=0,j=0;
    while(!iscntrl(str1[i])){
        putchar(str1[i]);
        i++;
    }
    while(!iscntrl(str2[j])){
        putchar(str2[j]);
        j++;
    }



    return 0;
}   