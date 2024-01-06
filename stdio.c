#include <stdio.h>

/*
❖stdio.h 中定義的變數類型
▪︎ size_t -> 無符號整著類型，是sizeof的結果
▪︎ FILE -> 適合儲存文件信息的對象類型
▪︎ fpos_t -> 適合儲存文件中任何位置的對象類型

❖stdio.h 中定義的assert
▪︎ NULL
▪︎ EOF
▪︎ _IOFBF、_IOLBF 和 _IONBF
▪︎ BUFSIZ
▪︎ FOPEN_MAX
▪︎ FILENAME_MAX
▪︎ L_tmpnam
▪︎ SEEK_CUR、SEEK_END 和 SEEK_SET
▪︎ TMP_MAX
▪︎ stderr、stdin 和 stdout
*/

int main(){

//int snprintf(char *str, size_t size, const char *format, ...)格式字符串到str中
    char str[50]; 
    char* s = "runoobcom"; 

    //讀取字串並儲存在str中
    int n=snprintf(str, 6, "%s\n", s); 
    //輸出str以及字符數
    printf("string:\n%s\ncharacter count = %d\n",str,n);

    float x=3.1415926;
    int len=snprintf(str,50,"x = %f",x);
    printf("%s\n",str);
    printf("Written characters: %d\n", len);


//void perror(const char *str) 把描述性錯誤消息輸出到標準錯誤
//int fclose(FILE *stream)關閉stream，刷新緩衝區
    FILE *fp;
   //重命名文件 
   rename("file.txt", "newfile.txt");

   //打開相同文件
   fp=fopen("file.txt", "r");
   if(fp==NULL){
      perror("Error: ");
      return(-1);
   }
   fclose(fp);

//char *gets(char *str)從輸入中讀取一行，並儲存在str所指向的字符串
//當讀取到換行或到達文件末尾時會停止
    char str2[50];

    printf("輸入一串字符：");
    gets(str2);

    printf("數入的字串是：%s", str2);

//int getchar(void)從輸入中讀取一個字符
    char a;
    
    printf("輸入字符：");
    a=getchar();

    printf("輸入的字符：");
    putchar(a);

//int getc(FILE *stream)從指定的stream獲取下一個字符，並把位置標示符往前移動
    char b;

    printf("輸入字符：");
    b=getc(stdin);
    printf("輸入的字符：");
    putc(b,stdout);

//int fputs(const char *str, FILE *stream)把字符串寫入指定的stream（不包括空字符）
    FILE *fp2;
    fp2=fopen("file.txt", "w+");

    fputs("這是c語言",fp2);
    fputs("這是一種系統程序設計語言",fp2);

    fclose(fp2);

//int fputc(int char, FILE *stream)把char指定的字符寫入到指定的stream，並把位置標示符往前移動
    FILE *fp3;
    int ch;
 
    fp3=fopen("file.txt", "w+");
    for(ch=33;ch<=100;ch++ ){
      fputc(ch,fp3);
    }
    fclose(fp3);

    return 0;
}
