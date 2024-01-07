#include <stdio.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
 
#define BST (+1)
#define CCT (+8)

/*
time_t：資料型別，用於表示從1970年1月1日以來的秒數（UNIX時間戳）。
struct tm：時間結構，用於表示日期和時間的各個組成部分，如年、月、日、時、分、秒等。
time(&time_t)：獲取當前的時間戳，通常用於測量程式執行時間。
struct tm *localtime(const time_t *time)：將時間戳轉換為本地時間的日期和時間結構。
struct tm *gmtime(const time_t *time)：將時間戳轉換為UTC（協調世界時）的日期和時間結構。
char *asctime(const struct tm *timeptr)：將日期和時間結構轉換為可讀的字串表示。
char *ctime(const time_t *time)：將時間戳轉換為可讀的字串表示。
double difftime(time_t time1, time_t time2)：計算兩個時間點之間的時間差（以秒為單位）。
clock_t clock(void)：獲取程式的總處理器時間（以時鐘滴答為單位）。
time_t mktime(struct tm *timeptr)：將日期和時間結構轉換為時間戳。
*/

int main(){

//char *asctime(const struct tm *timeptr)返回一個指向字符串的指針，代表了結構 timeptr 的日期和時間
    struct tm t;

    t.tm_sec = 10;
    t.tm_min = 10;
    t.tm_hour = 6;
    t.tm_mday = 25;
    t.tm_mon = 2;
    t.tm_year = 89;
    t.tm_wday = 6;

    puts(asctime(&t));

//clock_t clock(void)返回程序執行起，處裡器時鐘所使用的時間
    clock_t start_t, end_t;
    double total_t;
    int i;
 
    start_t = clock();
    printf("start_t = %ld\n", start_t);
    
    printf("開始循環，start_t = %ld\n", start_t);
    for(i=0; i< 10000000; i++){
    }
    end_t = clock();
    printf("大循環結束，end_t = %ld\n", end_t);
   
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("CPU佔用的總時間：%f\n", total_t  );
    printf("退出...\n");

//char *ctime(const time_t *timer)返回一個表示當地時間的字符串，當地時間是基於參數timer
    time_t curtime;
 
    time(&curtime);
 
    printf("當前時間 = %s", ctime(&curtime));

//double difftime(time_t time1, time_t time2)返回time1和time2之間相差的秒數
    double diff_t;
 
    printf("程式啟動...\n");
    time(&start_t);
 
    printf("休眠 5 秒...\n");
    sleep(5);
 
    time(&end_t);
    diff_t = difftime(end_t, start_t);
 
    printf("執行時間 = %f\n", diff_t);
    printf("退出...\n");

//struct tm *gmtime(const time_t *timer) timer的值被分解為tm結構，並用（UTC）或（GMT）表示。
    time_t rawtime;
    struct tm *info;
 
    time(&rawtime);
    //獲取GMT時間
    info = gmtime(&rawtime );
   
    printf("當前的世界時間：\n");
    printf("倫敦：%2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
    printf("台灣：%2d:%02d\n", (info->tm_hour+CCT)%24, info->tm_min);

//struct tm *localtime(const time_t *timer) timer 的值被分解為 tm 結構，並用本地時區表示。
    time_t rawtime;
    struct tm *info;
    char buffer[80];
 
    time( &rawtime );
 
    info = localtime( &rawtime );
    printf("當前的本地時間和日期：%s", asctime(info));


//size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr) 根據format中定義的格式化規則，格式化結構 timeptr 表示的時間，並把它儲存在str中
    time_t rawtime;
    struct tm *info;
    char buffer[80];
 
    time( &rawtime );
 
    info = localtime( &rawtime );
 
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", info);
    printf("格式化的日期 & 時間 : |%s|\n", buffer );

//time_t time(time_t *timer) 計算當前日曆時間，並把他編碼成time_t
    time_t seconds;
 
    seconds = time(NULL);
    printf("自 1970-01-01 起的小時間 = %ld\n", seconds/3600);

    return 0;
}