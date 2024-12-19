#include <stdio.h>

int main() {
    int mang[] = {5, 12, 8, 20, 15};
    int n = sizeof(mang) / sizeof(mang[0]);
    int phanTu, found = 0;

    printf("Nhap vao mot phan tu: ");
    scanf("%d", &phanTu);

    for (int i = 0; i < n; i++) {
        if (mang[i] == phanTu) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}
