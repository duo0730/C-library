#include <stdio.h>
#include <ctype.h>

int main(){
    int a='a';
    int b='10';
    int c='\t';
    int d=' ';

//int isalnum(int c); 檢查字符c是否是字母數字符
    if(isalnum(a))printf("a=%c 是字母\n",a);
    else printf("a=%c 不是字母\n",a);
    if(isalnum(b))printf("b=%c 是字母\n",b);
    else printf("b=%c 不是字母\n",b);

    printf("\n");
//int isalpha(int c); 檢查字符c是否是字母
    if(isalpha(a))printf("a=%c 是字母\n",a);
    else printf("a=%c 不是字母\n",a);
    if(isalpha(b))printf("b=%c 是字母\n",b);
    else printf("b=%c 不是字母\n",b);

    printf("\n");
//int isdigit(int c); 檢查字符c是否是十進制數字
    if(isdigit(a))printf("a=%c 是十進制數字\n",a);
    else printf("a=%c 不是十進制數字\n",a);
    if(isdigit(b))printf("b=%c 是十進制數字\n",b);
    else printf("b=%c 不是十進制數字\n",b);

    printf("\n");
//int isxdigit(int c); 檢查字符c是否是十六進制數字
    int result;
    char e='10';
    result=isxdigit(e);//若e為16進制數字 -> result結果等於1
    printf("%c 傳入isxdigit()的結果: %d\n",e,isxdigit(e));
    result=isxdigit(a);//若a不為16進制數字 -> result結果等於0
    e='M';
    result=isxdigit(e);//result=0
    printf("%c 傳入isxdigit()的結果: %d\n",e,isxdigit(e));

    printf("\n");
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
    printf("\n\n");

//int isgraph(int c); 檢查字符c是否有圖形表示法
    if(isgraph(a)) printf("a=%c 是可打印的\n",a);
    else printf("a=%c 是不可打印的\n",a);
    if(isgraph(b)) printf("b=%c 是可打印的\n",b);
    else printf("b=%c 是不可打印的\n",b);

    printf("\n");
//int islower(int c); 檢查字符c是否是小寫字母
    int var1='X';
    int var2='x';
    if(islower(var1)) printf("var1=%c 是小寫字母\n",var1);
    else printf("var1=%c 不是小寫字母\n",var1);
    if(islower(var2)) printf("var2=%c 是小寫字母\n",var2);
    else printf("var2=%c 不是小寫字母\n",var2);

    printf("\n");
//int isupper(int c); 檢查字符c是否是大寫字母
    if(isupper(var1)) printf("var1=%c 是大寫字母\n",var1);
    else printf("var1=%c 不是大寫字母\n",var1);
    if(isupper(var2)) printf("var2=%c 是大寫字母\n",var2);
    else printf("var2=%c 不是大寫字母\n",var2);

    printf("\n");
//int isspace(int c); 檢查字符c是否是空白字符
    if(isspace(a)) printf("a=%c 是空白字符\n",a);
    else printf("a=%c 不是空白字符\n",a);
    if(isspace(d)) printf("d='%c' 是空白字符\n",d);
    else printf("d=%c 不是空白字符\n",d);

    printf("\n");

//int ispunct(int c); 檢查字符c是否是標點符號字符
    if(isspace(a)) printf("a=%c 是標點符號字符\n",a);
    else printf("a=%c 不是標點符號字符\n",a);
    if(isspace(c)) printf("c=%c 是標點符號字符\n",c);
    else printf("c=%c 不是標點符號字符\n",c);

    printf("\n");
//int isprint(int c); 檢查字符c是否是可打印
    if(isspace(a)) printf("a=%c 是可打印的\n",a);
    else printf("a=%c 是不可打印的\n",a);
    if(isspace(d)) printf("d='%c' 是可打印的\n",d);
    else printf("d=%c 是不可打印的\n",d);

    return 0;
}   