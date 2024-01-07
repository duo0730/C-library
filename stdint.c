#include <stdio.h>
#include <stdint.h>

/*
int8_t：有符號8位整數。
uint8_t：無符號8位整數。
int16_t：有符號16位整數。
uint16_t：無符號16位整數。
int32_t：有符號32位整數。
uint32_t：無符號32位整數。
int64_t：有符號64位整數。
uint64_t：無符號64位整數。
int_least8_t：至少8位的有符號整數。
uint_least8_t：至少8位的無符號整數。
int_fast8_t：適合快速計算的有符號8位整數。
uint_fast8_t：適合快速計算的無符號8位整數。
*/

int main(){
     // 標準整數類型
    int8_t num1 = 127;   // 8位元有符號整數
    uint8_t num2 = 255;  // 8位元無符號整數

    int16_t num3 = 32767;      // 16位元有符號整數
    uint16_t num4 = 65535;     // 16位元無符號整數

    int32_t num5 = 2147483647; // 32位元有符號整數
    uint32_t num6 = 4294967295; // 32位元無符號整數

    int64_t num7 = 9223372036854775807;      // 64位元有符號整數
    uint64_t num8 = 18446744073709551615;    // 64位元無符號整數

    // 輸出數值
    printf("int8_t: %d\n", num1);
    printf("uint8_t: %u\n", num2);
    printf("int16_t: %d\n", num3);
    printf("uint16_t: %u\n", num4);
    printf("int32_t: %ld\n", num5);
    printf("uint32_t: %lu\n", num6);
    printf("int64_t: %lld\n", num7);
    printf("uint64_t: %llu\n", num8);
    

    return 0;
}