#include<stdio.h>

int main() {
	
	//nhap so nguyen ta co the dung ham int 
	int a, b, c, d, e, numac, numbc, numcc, numdc, numec, numal, numbl, numcl, numdl, numel;
	// tinh tong cac so le 
	int sumc, suml;
	
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
    	numal = 1;
	}else {
		
		numac = 1;
	}
	//b 
	if(b % 2 != 0){
    	numbl = 1;
	}else {
	
		numbc = 1;
	}
	//c
		if(c % 2 != 0){
    	numcl = 1;
	}else {
		
		numcc = 1;
	}
	//d
		if(d % 2 != 0){
    	numdl = 1;
	}else {
		
		numdc = 1;
	}
	//e
		if(e % 2 != 0){
    	numel = 1;
	}else {
		
		numec = 1;
	}
	
	// sau do tinh tong cac so le 
	sumc = numac + numbc + numcc + numdc + numec;
	suml = numal + numbl + numcl + numdl + numel;
	
	// in ket qua ra man hinh
	printf("Tong cua cac so le co trong day so ban vua nhap la: %d\n", suml);
	printf("Tong cua cac so chan co trong day so ban vua nhap la: %d\n", sumc);
	
	//ket thuc chuong trinh
	return 0;
	
	
	
	
}
