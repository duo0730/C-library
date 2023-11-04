#include <stdio.h>
#include <assert.h>

int main(){    
    
    int a=10;
    assert(a==10);
    //如果a不等於10則程式終止並跳出錯誤訊息

    int x = 10;
    assert(x == 5 && "x should be equal to 5");
    //自定義錯誤訊息

    return 0;
}