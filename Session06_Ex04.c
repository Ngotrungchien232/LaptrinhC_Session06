#include<stdio.h>
// o day ta can them thu vien cho viec tinh toan delta
#include<math.h>

int main() {
	
	// khai bao ham va bien
	// so nguyen len ta dung int 
	int a, b, c;
	
    // yeu cau nguoi dung nhap tu ban phim ba so a b c
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &b);
    printf("Moi ban nhap so thu ba: ");
    scanf("%d", &c);
    
    // bieu thuc cua phuong trinh bac hai ax^2 + bx + c = 0
    
    // buoc 1 ta di tinh gia tri delta
    int delta;
    delta = b * b - 4 * a * c;
    
    //ta se phai chia ra 3 truong hop 
      // th1 delta > 0
      // th2 delta = 0
      // th3 delta < 0
    
    // voi truong hop delta > 0
      // them bien cho th1,th2
      float x1th1, x2th1, xth2;
    if(delta > 0){
    	x1th1 = (-b + sqrt(delta)) / (2 * a);
    	x2th1 = (-b - sqrt(delta)) / (2 * a);
    	printf("Phuong trinh co 2 nghiem x1 la %f va x2 la %.2f\n", x1th1, x2th1);
	} else if(delta == 0){
		   xth2 = -b / (2 * a);
		   printf("Phuong trinh co nghiem x la %.2f\n", xth2);
		   
	} else {
		printf("Phuong trinh vo nghiem\n");
		
	}
	
	//ket thuc chuong trinh 
	return 0;
    
	
}
