#include<stdio.h>

int p_rint()             //การนิยามฟังก์ชัน int เป็น type, p_rint เป็นชื่อฟังก์ชัน
{
    int x = 10;
    printf("%d\n",x);
}

int isEven(int val)      //int val เป็น parameter
{
    if (val % 2 == 0)         //ถ้า val เป็นจำนวนคู่ ให้ return 1
        return 1;             //เป็นจริง
    else
        return 0;             //เป็นเท็จ
}

int main()
{
    p_rint();
    int value;
    printf("Enter an Integer Value: ");
    scanf("%d", &value);

    if (isEven(value) == 1)
        printf("%d is an even number\n", value);
    else
        printf("%d is not an even number\n", value);
}