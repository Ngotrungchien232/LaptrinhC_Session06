#include<stdio.h>

int main() {
	
	//khai bao mat khau cua nguoi dung ta co the dung ham float
	float pass;
	
	//yeu cau nguoi dung nhap pass
	printf("Moi ban nhap mat khau cua ban: ");
	scanf("%f", &pass);
	
	// them mot bien de cho nguoi dung kiem tra mat khau cua minh 
	float test;
	
	do{
	// yeu cau nguoi dung nhap mk xem dung khong
	printf("Moi ban nhap lai mat khau cua ban: ");
    //gan gia tri cho mk vua nhap
    scanf("%f", &test);
    // kiem tra xem dung hay khong
    if(test != pass){
    	printf("Mat khau ban vua nhap sai roi, nhap lai nhe: \n");
	}
} while(test != pass);
    
    // in ra chuc mung
    printf("Chuc mung mat khau cua ban da chinh xac \n");




     // ket thuc chuong trinh 
     return 0;
}
