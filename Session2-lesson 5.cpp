#include <stdio.h>
int main (){
	// Khai bao va va khoi tao hai bien chieu dai va chieu rong cua hinh chu nhat 
	int length = 16;
	int width =11; 
	// Tinh chu vi va dien tich cua hinh chu nhat  
	int perimeter = 2 * (length + width);
	int area = length * width;
	// In ket qua ra man hinh 
	printf("Chieu dai cua hinh chu nhat : %d cm\n", length);
	printf("Chieu rong cua hinh chu nhat : %d cm\n", width);
	printf("Chu vi cua hinh chu nhat : %d cm\n", perimeter);
	printf("Dien tich cua hinh chu nhat : %d cm^2\n", area);
	
	return 0;
}
