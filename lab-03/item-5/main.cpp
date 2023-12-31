/* Chapter : 3 - item : 5 - (43) ตัวเลขประหลาด

พี่ TA กำลังวางแผนจะลงทุนกับตัวเลขประหลาด โดยลักษณะของมันคือ
ถ้าเราทำนายเลข 6 ตัวได้ถูกต้อง หรือไม่ก็ใกล้เคียงกับเลขนั้น +1, -1
หรือหากเราทำนายตัวเลขทั้ง 6 ตัวนั้นผิด แต่หากมันมี 3 ตัวหน้า หรือ 3 ตัวหลังถูกต้อง
ก็ถือว่าการลงทุนครั้งนั้นยังคงสำเร็จอยู่

ให้นักศึกษาช่วยพี่ TA เขียนโปรแกรมในการแจกแจงตัวเลขพวกนั้นออกมาดังนี้

- การทำนายที่คลาดเคลื่อน +1
- การทำนายที่คลาดเคลื่อน -1
- ตัวเลข 3 ตัวแรก
- ตัวเลข 3 ตัวหลัง
# ให้รับค่า input เข้ามาเป็นชนิด int เท่านั้น
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter magic number : ");
    scanf("%d", &number);

    printf("+1       : %d\n", number + 1);
    printf("-1       : %d\n", number - 1);
    printf("First 3  : %d\n", number / 1000);  
    printf("Last 3   : %d\n", number % 1000);   
    
    return 0;
}