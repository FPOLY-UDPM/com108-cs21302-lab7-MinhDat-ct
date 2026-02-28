/******************************************************************************
 * Họ và tên: [Lý Minh Đạt]
 * MSSV:      [PS48658]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap vao 1 chuoi: ");
    gets(str);
    int i=0;
    int n=0; // đếm nguyên âm
    int m=0; // đếm phụ âm
    while(str[i]!='\0') {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
            n++;
        } else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            m++;
        }
        i++;
    }
    printf("So nguyen am: %d\n", n);
    printf("So phu am: %d\n", m);
    return 0;
}
