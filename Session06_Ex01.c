#include<stdio.h>

int main() {
	
	//nhap so nguyen ta co the dung ham int 
	int a, b, c, d, e, numa, numb, numc, numd, nume;
	// tinh tong cac so le 
	int sum;
	
	// them cau lenh do de xem nguoi dung nhap co thoa man dieu kien khong 
	
	//yeu cau nguoi dung nhap tu ban phim 
	printf("Moi ban nhap so thu nhat: \n");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai: \n");
	scanf("%d", &b);
	printf("Moi ban nhap so thu ba: \n");
	scanf("%d", &c);
	printf("Moi ban nhap so thu bon: \n");
	scanf("%d", &d);
	printf("Moi ban nhap so thu nam: \n");
	scanf("%d", &e);
	

    //phan biet dau la so chan dau la so le dung if else 
    
    //a 
    if(a % 2 != 0){
    	numa = a;
	}else {
		printf("Day la so chan roi");
		numa = 0;
	}
	//b 
	if(b % 2 != 0){
    	numb = b;
	}else {
		printf("Day la so chan roi");
		numb = 0;
	}
	//c
		if(c % 2 != 0){
    	numc = c;
	}else {
		printf("Day la so chan roi");
		numc = 0;
	}
	//d
		if(d % 2 != 0){
    	numd = d;
	}else {
		printf("Day la so chan roi");
		numd = 0;
	}
	//e
		if(e % 2 != 0){
    	nume = e;
	}else {
		printf("Day la so chan roi");
		nume = 0;
	}
	
	// sau do tinh tong cac so le 
	sum = numa + numb + numc + numd + nume;
	
	// in ket qua ra man hinh
	printf("Tong cua cac so le co trong day so ban vua nhap la: %d", sum);
	
	//ket thuc chuong trinh
	return 0;
	
	
	
	
}
