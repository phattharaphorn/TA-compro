/* Chapter : 1 - item : 5 - Lab 1 ข้อ 5

แสดงผลตามตัวอย่าง 5
- จำนวนทั้งหมด 8 บรรทัด
- บรรทัดแรกแสดงผล 0123456789abcdefghij จำนวน 4 ครั้ง
- บรรทัดที่สอง เป็นบรรทัดว่าง
- บรรทัดที่สาม แสดงผล 1234567890 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่สี่ แสดงผล 0123456789 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่ห้า แสดงผล เหมือนบรรทัดที่สาม
- บรรทัดที่หก แสดงผล 12345678 จำนวน 10 ครั้ง
- บรรทัดที่ 7-8 แสดงผลตามตัวอย่าง ห้ามใช้ space bar (ถ้าตรวจพบ จะได้ศูนย์คะแนนในข้อนี้)

หมายเหตุ ขนาดของหน้าจอ คือ 80 คอลัมน์ 25 แถว
*/

#include <stdio.h>

int main()
{
	printf("0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij");
	printf("\n");
	printf("          1234567890          1234567890          1234567890          1234567890");
	printf("0123456789          0123456789          0123456789          0123456789          ");
	printf("          1234567890          1234567890          1234567890          1234567890");
	printf("12345678123456781234567812345678123456781234567812345678123456781234567812345678");
	printf("\t1\t12\t123\t1234\t12345\t123456\t1234567\t12345678\n");
	printf("12345678\t12345678\t12345678\t12345678\t12345678\n");
	
	return 0;
}