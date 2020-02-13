#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;            // int x เป็นการระบุประเภทของตัวแปร x เป็นจำนวนเต็ม
	float y;          // float y เป็นการระบุประเภทของตัวแปร y เป็นจำนวนจริง

	char c;
	int i;
	float f;
	double d;
	printf("size of c = %d\n", sizeof(c));
	printf("size of i = %d\n", sizeof(i));
	printf("size of f = %d\n", sizeof(f));
	printf("size of d = %d\n", sizeof(d));
	//sizeof ใช้ในการตรวจสอบขนาดตวแปรและประเภทข้อมูล
	printf("\n");

	int q = 0b10101111;
	printf("%o (8)\n", q);  // octal
	printf("%d (10)\n", q); // decimal
	printf("%x (16)\n", q); // hexadecimal
	printf("%X (16)\n", q); // hexadecimal
	printf("\n");
	//%o for octal
	//%x for hexadecimal
	//%c for character
	//%s for character string

	int v = 10;
	float v1 = 10.23;
	printf("%5d\n",v);        //จอง5ช่อง
	printf("%05d\n",v);	      //จอง5ช่อง แต่มี0ข้างหน้า
	printf("%5f\n",v1);
	printf("%.5f\n",v1);      //กำหนด.ทศนิยม .5 คือ 5 ตำแหน่ง
	printf("%6.2f\n",v1);
	printf("\n");
}