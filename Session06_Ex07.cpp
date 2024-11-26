#include<stdio.h>

int main() {
    int a, i;

    // Yeu cau nguoi dung nhap so nguyen
    printf("Moi ban nhap mot so nguyen: ");
    scanf("%d", &a);

    // liet ke uoc cac so da nhap
    printf("Cac uoc cua %d la: ", a);
    for(i = 1; i <= a; i++) {  
        if(a % i == 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");

    // ket thuc chuong trinh
    return 0;
}

