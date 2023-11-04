#include <stdio.h>
#include <stdlib.h>

/*
void *malloc(size_t size)：用於動態分配內存，返回一個指向分配的內存塊的指針。
通常與 free 一起使用來管理動態內存。

void free(void *ptr)：用於釋放先前通過 malloc 分配的內存塊，以便將其返回給系統。

void *calloc(size_t num, size_t size)：用於分配一塊指定大小的內存塊，並將其初始化為零。
通常用於分配數組。

void *realloc(void *ptr, size_t size)：用於重新分配之前通過 malloc 或 calloc 分配的內存塊的大小。

int rand(void)：生成一個偽隨機整數。通常需要配合 srand 使用來初始化偽隨機數生成器的種子。

void srand(unsigned int seed)：用於初始化偽隨機數生成器的種子。
通常在程序開始時調用一次，以便使隨機數序列可重現。

int atoi(const char *str)：將字符串轉換為整數。用於將字符型數字轉換為整數。

double atof(const char *str)：將字符串轉換為浮點數。用於將字符型數字轉換為浮點數。

char *itoa(int value, char *str, int base)：將整數轉換為字符串。用於將整數轉換為字符型表示，可以指定進制。

void exit(int status)：用於終止程序的執行，並返回一個狀態碼給操作系統。通常，0 表示成功，非零表示出錯。
*/

int main(){

    return 0;
}