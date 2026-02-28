/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main() {
    char username[20];
    char password[20];
    printf("Nhap username: ");
    gets(username);
    printf("Nhap password: ");
    gets(password);
    if(strcmp(username, "admin")==0 && strcmp(password, "123456")==0) {
        printf("Dang nhap thanh cong\n");
    } else {
        printf("Dang nhap khong thanh cong\n");
    }
    return 0;
}
