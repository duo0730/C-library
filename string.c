#include <stdio.h>
#include <string.h>

int main(){

//void *memchr(const void *str, int c, size_t n)在參數str所指向的字符串的前n個字節中搜索第一次出現字符c的位置
    const char str[] = "abc";
    const char ch = '.';
    char *ret;

    ret=(char*)memchr(str,ch,strlen(str));
 
    printf("|%c| 之後的字符串是 - |%s|\n", ch, ret);

//int memcmp(const void *str1, const void *str2, size_t n) 把str1和str2的前n個字節比較
    char str1[15];
    char str2[15];
    int ret2;

    memcpy(str1, "abcdef",6);
    memcpy(str2, "ABCDEF",6);

    ret2=memcmp(str1,str2,5);

    if(ret2> 0) printf("str2 < str1");
    else if(ret2< 0) printf("str1 < str2");
    else printf("str1 = str2");
    
//void *memcpy(void *dest, const void *src, size_t n) 從src複製n個字符到dest
    const char src[50] = "abc";
    char dest[50];
 
    memcpy(dest, src, strlen(src)+1);
    printf("dest = %s\n", dest);

//void *memmove(void *dest, const void *src, size_t n)從src複製n個字符到dest
    const char dest2[] = "oldstring";
    const char src2[]  = "newstring";

    printf("Before memmove dest = %s, src = %s\n", dest2, src2);
    memmove(dest2, src2, 9);
    printf("After memmove dest = %s, src = %s\n", dest2, src2);

//void *memset(void *str, int c, size_t n)複製字符c 到参數 str 所指向的字符串的前n個字符
    char str3[50];
 
    strcpy(str3,"This is string.h library function");
    puts(str3);
 
    memset(str3,'$',7);
    puts(str3);
   
//int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串進行比較
    char str4[15];
    char str5[15];
    int ret3;
 
 
    strcpy(str4,"abcdef");
    strcpy(str5,"ABCDEF");
 
    ret3=strcmp(str4,str5);
 
    if(ret3<0) printf("str4 < str5");
    else if(ret3>0)  printf("str4 > str5");
    else printf("str4 = str5");

//size_t strlen(const char *str) 計算字符串str的長度
    char str6[50];
    int len;

    strcpy(str6, "This is runoob.com");

    len=strlen(str6);
    printf("|%s|的長度是|%d|\n", str6, len);

//size_t strspn(const char *str1, const char *str2) 檢索字符串str1中第一個不在字符串 str2 中出現的字符下標
    int len2;
    const char str7[] = "ABCDEFG019874";
    const char str8[] = "ABCD";

    len2=strspn(str7,str8);

    printf("初始段匹配長度 %d\n",len2);


    return 0;
}