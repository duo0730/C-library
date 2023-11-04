#include <stdio.h>
#include <time.h>

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

    return 0;
}