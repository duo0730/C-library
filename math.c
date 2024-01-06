#include <stdio.h>
#include <math.h>

#define PI 3.14159265

/*常用
double sqrt(double x)：計算x的平方根
double pow(double base, double exponent)：計算 base 的 exponent 次幂。
double sin(double x)：計算正弦函數值，x為弧度
double cos(double x)：計算餘弦函數值，x為弧度
double tan(double x)：計算正切弦函數值，x為弧度
double log(double x)：計算以e為底的自然對數
double log10(double x)：幾算以10為底的自然對數
double fabs(double x)：返回x的絕對值。
double ceil(double x)：向上取整，返回不小於 x的最小整数。
double floor(double x)：向下取整，返回不大於 x的最大整数。
double round(double x)：四舍五入，返回最接近 x的整数。
*/

int main(){

    double x,ret,val;

printf("1.double cos(double x)\n");
//double cos(double x) 返回弧度角 x 的餘弦
    x=60.0;
    val=PI/180.0;
    ret=cos(x*val);
    printf("%lf的餘弦是%lf度\n",x,ret);
   
    x=90.0;
    val=PI/180.0;
    ret=cos(x*val);
    printf("%lf的餘弦是%lf度\n",x,ret);
    
printf("\n2.double cosh(double x)\n");
//double cosh(double x) 返回弧度角x 的雙曲餘弦
    x=0.5;
    printf("%lf的雙曲餘弦是%lf\n",x,cosh(x));

    x=1.0;
    printf("%lf的雙曲餘弦是%lf\n",x,cosh(x));

printf("\n3.double sin(double x)\n");
//double sin(double x) 返回弧度角x 的正弦
    x=45.0;
    val=PI/180;
    ret=sin(x*val);
    printf("%lf的正弦是%lf 度\n",x,ret);

printf("\n4.double sinh(double x)\n");
//double sinh(double x) 返回弧度角x 的雙曲正弦
    x=0.5;
    ret=sinh(x);
    printf("%lf的雙曲正弦是%lf度\n",x,ret);

printf("\n5.double tanh(double x)\n");
//double tanh(double x) 返回弧度角x 的雙曲正切
    x=0.5;
    ret=tanh(x);
    printf("%lf的雙曲正切是%lf度\n",x,ret);

printf("\n6.double log(double x)\n");
//double log(double x) 返回x的自然對數（基數為e）
    x=2.7;
    ret=log(x);
    printf("log(%lf)=%lf\n",x,ret);

printf("\n7.double log10(double x)\n");
//double log10(double x) 返回x的常用對數（基數為10）
    x=10000;
    ret=log10(x);
    printf("log10(%lf)=%lf\n",x,ret);

printf("\n8.double pow(double x, double y)\n");
//double pow(double x, double y) 返回x的y次冪
    printf("值 8.0 ^ 3 = %lf\n", pow(8.0,3));
    printf("值 3.05 ^ 1.98 = %lf\n", pow(3.05,1.98));

printf("\n9.double sqrt(double x)\n");
//double sqrt(double x) 返回x的平方根
    printf("%lf 的平方根是 %lf\n",4.0,sqrt(4.0));
    printf("%lf 的平方根是 %lf\n",5.0,sqrt(5.0));

printf("\n10.double fabs(double x)\n");
//double fabs(double x) 返回x的絕對值
    float a=1234;
    float b=-344;
 
   printf("%f 的絕對值是 %lf\n",a,fabs(a));
   printf("%f 的絕對值是 %lf\n",b,fabs(b));

printf("\n11.double ceil(double x)\n");
//double ceil(double x) 返回大於或等於x的最小整數值
    float val1=1.6;
    float val2=2.8;

    printf ("value1 = %.1lf\n", ceil(val1));
    printf ("value2 = %.1lf\n", ceil(val2));

printf("\n12.double floor(double x)\n");
//double floor(double x)返回小於或等於x的最大整數值
    printf("Value1 = %.1lf\n", floor(val1));
    printf("Value2 = %.1lf\n", floor(val2));

printf("\n13.double fmod(double x, double y)\n");
//double fmod(double x, double y) 返回x除以y的餘數
    float c=9.8;
    float d=3.2;
    int e=2;

    printf("%f / %d 的餘數是 %lf\n",c,e, fmod(c,e));
    printf("%f / %f 的餘數是 %lf\n",c,d, fmod(c,d));


    return 0;
}