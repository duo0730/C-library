#include <stdio.h>
#include <assert.h>

int main(){    
    
    int a=10;
    assert(a==10);
    //如果a不等於10則程式終止並跳出錯誤訊息

    int b=10;
    assert(b==5 && "b should be equal to 5");
    //自定義錯誤訊息

    int c;
    char str[50];

    scanf("%d", &a);
    assert(c>=10);
    printf("%d\n", a);

    scanf("%s", str);
    assert(str!=NULL);
    printf("%s\n", str);


    return 0;
}