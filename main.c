#include <stdio.h>
#include <string.h>
// fgets(3 tham so) stdin cong nhap vao true la so 1,fall la so 0.fgetc lay ra mot tu trong stdin
// strchr tim ki tự trong chuỗi ng nhập ban đầu.fgets:  nơi sữ liệu đc đưa vào, nơi dữ liệu đc đưa
void noiHoVaTen(char ho[], char ten[]) {
    printf("Độ dài của họ là: %d\n", strlen(ho));
    printf("Độ dài của tên là: %d\n", strlen(ten));
    int doDaiHo = strlen(ho);
    int doDaiTen = strlen(ten);
    int tong = doDaiHo + doDaiTen;
    printf("Độ dài của cả họ và tên là: %d\n", tong);
    tong++;
    char hovaten[tong];
    strcpy(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("%s", hovaten);

}
int main() {
        char ho[10], ten[10];
    printf("Vui lòng nhập họ của bạn:\n");
    fgets(ho, 10, stdin); // fgets thay thế cho get.
    puts (ho);
    if (!strchr(ho,'\n')) {
        while (fgetc(stdin) != '\n');
    }
    printf("Vui lòng nhập tên của bạn:\n");
    fgets(ten, 10, stdin);
    puts (ten);
    noiHoVaTen(ho, ten);
    return 0;
}
