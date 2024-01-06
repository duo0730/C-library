#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b){
    return( *(int*)a - *(int*)b );
}

int main(){

//double atof(const char *str)把參數str所指向的字符串轉換為浮點數
    float val;
    char str[20];
   
    strcpy(str,"98993489");
    val=atof(str);
    printf("字符串值=%s, 浮點值=%f\n",str,val);
    
    strcpy(str, "runoob");
    val=atof(str);
    printf("字符串值=%s, 浮點值=%f\n",str,val);

//int atoi(const char *str)把參數str所指向的字符串轉換為整數
    int val2;
    char str2[20];
   
    strcpy(str2, "98993489");
    val2=atoi(str2);
    printf("字符串值=%s, 整數值=%d\n",str2,val2);

    strcpy(str2,"runoob.com");
    val2=atoi(str2);
    printf("字符串值=%s, 整數值=%d\n",str2,val2);

//double strtod(const char *str, char **endptr)把參數str所指向的字符串轉換為一個浮點數 
    char str3[30] = "20.30300 This is test";
    char *ptr;
    double ret;

    ret=strtod(str3, &ptr);
    printf("數字（double）是 %lf\n",ret);
    printf("字符串部分是 |%s|",ptr);

//void *calloc(size_t nitems, size_t size) 分配所需內存空間，返回一個指向它的指针
//void free(void *ptr) 釋放內存
    int *m;
    int n=3;
 
    m=(int*)calloc(n, sizeof(int));
    printf("輸入3个數字：\n");
    for(int i=0;i<n;i++ ){
      scanf("%d",&m[i]);
    }
 
    printf("輸入的數字為：");
    for(int i=0;i<n;i++){
        printf("%d ",m[i]);
    }
    free (m);

//void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)) 對數組進行排序
    printf("排序前：\n");
    for(int i=0;i<5;i++) {
        printf("%d ",values[i]);
    }

    qsort(values,5,sizeof(int),cmpfunc);
    
    printf("\n排序後：\n");
    for(int i=0;i<5;i++ ) {
        printf("%d ", values[i]);
    }

//int abs(int x) 返回整數x的絕對值
    int a, b;
    
    a=abs(5);
    printf("a的值=%d\n",a);

    b = abs(-10);
    printf("b的值=%d\n",b);

//int rand(void) 返回範圍在0到RAND_MAX 之間的偽隨機數
//void srand(unsigned int seed) 初始化由函數rand使用的隨機數發生氣
    time_t t;
    
    //初始化
    srand((unsigned) time(&t));
 
    //輸出0-49的5個隨機數
    for(int i=0;i<5;i++){
        printf("%d\n", rand() % 50);
    }


    return 0;
}