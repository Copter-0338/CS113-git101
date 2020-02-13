#include <stdio.h>
#include <stdlib.h>

int main()                    //1
{   
    int cnt;
    for (cnt=1; cnt <= 10; cnt++) 
    {
        int sum=0;
        sum += cnt;
        printf("%2d) %d\n", cnt, sum);
    }
}

/*int main()                  //0
{   
    int cnt;
    int sum=0;
    for (cnt=1; cnt <= 10; cnt++) 
    {
        sum += cnt;
        printf("%2d) %d\n", cnt, sum);
    }
}*/

// คำตอบของ main1 != main0 เพราะ main1 กำหนดตัวแปร sum = 0 ไว้ใน for ทุกครั้งที่ for กลับมาเริ่มใหม่ sum จะมีค่า = 0
// แต่ main0 กำหนด sum ไว้นอก for เมื่อ for วนloop sumจะไม่กลับไปมีค่าเป็น 0 
/*ตัวแปรที่ถูกประกาศไว้ภายใน block, ภายในตวฟังก์ชันรวมถึงตัวแปรพารามิเตอร์ของฟังก์ชัน
จะเป็นตัวแปร local ซึ้งสามารถถูกใช้ งานได้เพียงภายในฟังก์ชันที่ถูกประกาศไว ้*/
/*ตัวแปรที่ถูกประกาศไว้นอกฟังก์ชัน global ซึ้งสามารถถูกเข้าถึงได้จากฟังก์ชันต่างๆ รวมถึงฟังก์ชัน main ได้*/
