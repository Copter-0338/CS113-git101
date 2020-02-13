#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)         //ฟังก์ชันสลับค่า โดยใช้ pointer ช่วย
{   
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{   
    /*int x = 1, y = 2, z[10];
    int *ip;                        
    ip = &x;                        // ip มีค่าเท่ากับ address ของ x
    y = *ip;                       
    *ip = 0;
    ip = &z[0];*/               

    int x = 3, y = 4;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);                            //สลับค่า
    printf("x = %d, y = %d\n", x, y);

    //การใช้ malloc()
    //data = (int *)malloc(1000 * sizeof(int));
    //พารามิเตอร์ของ malloc() จะเป็นจํานวน byte ที่ใช้ในการจองพื้นที่
    //ค่าที่ malloc() ส่งกลับเป็นตำแหน่งในหน่วยความจำ (base address) ที่ระบบปฏิบัติการจองพื้นที่ในหน่วยความจำไว้ให้
    //หากหน่วยความจำในระบบมีไม่เพียงพอให้จอง malloc() จะส่งค่า NULL กลับมายังผู้เรียก
    
    //การใช้ free()
    //พารามิเตอร์ของ free() ที่เป็นตำแหน่งในหน่วยความจำ (base address) ที่เราต้องการคืนพื้นที่ให้ระบบ
    void *malloc(size_t n);
    void *calloc(size_t n, size_t size);
    void *realloc(void *ptr, size_t size);
    void free(void *ptr);
    //ทั้งหมดนี่คือฟังก์ชันใในการจองพื้นที่

    int *f1();         // เป็นการประกาศฟังก์ชัน f1 ที่ส่งค่า pointer ไปยัง int กลับ
    int (*f2)();       // เป็นการประกาศตัวแปร pointer f2 ที่สามารถเก็บค่าตำแหน่งของฟังก์ชันที่ส่งค่า int กลับ
    int *(*f3)();      // เป็นการประกาศตัวแปร pointer f3 ที่สามารถเก็บค่าตำแหน่งของฟังก์ชันที่ส่งค่า pointer ไปยัง int กลับ

    //Segmentation fault (core dumped)
    /*หากเราพยายามเข้าถึงหน่วยความจำที่เราไม่ได้จองไว้ เรามีโอกาสที่จะถูกระบบปฏิบัติการหยุดการทำงานของโปรแกรมของเรา มักจะแสดงข้อความว่า Segmentation fault (core dumped)*/
}