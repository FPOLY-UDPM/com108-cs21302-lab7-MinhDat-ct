/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char str[5][100];
    printf("Nhap vao 5 chuoi:\n");
    for(int i=0; i<5; i++) {
        gets(str[i]);
    }
    for(int i=0; i<4; i++) {
        for(int j=i+1; j<5; j++) {
            if(strcmp(str[i], str[j])>0) {
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Thu tu cac chuoi sau khi sap xep:\n");
    for(int i=0; i<5; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}

