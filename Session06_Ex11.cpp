#include <stdio.h>

int main() {
	// nhap so nguyen n bat ki ta co the dung int n
	// num = 2 de kiem tra bat dau tu 2 co phai so nguyen to khong
    int n, num = 2;
    
    // yeu cau nguoi dung nhap so nguyen duong ( boi so am khong the la so nguyen to)
    printf("Moi ban nhap so nguyên duong n: ");
    scanf("%d", &n);

    printf("So nguyen to dau tien la: \n");

    // tien hanh tim so nguyen to dau tien
    while (1) {
    	// while 1 co gia tri la true 
    	// gia su num la so nguyen to
        int is_prime = 1; 

        //kiem tra xem co dung la so nguyen to khong 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
            	// khong phai so nguyen to
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
        	//in ra so nguyen to dau tien
            printf("%d\n", num);
            break;
        }
        // kiem tra so nguyen to tiep theo
        num++;
    }
    // ket thuc chuong trinh 
    return 0;
}

