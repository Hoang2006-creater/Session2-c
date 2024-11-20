#include <stdio.h>
int main (){
	// Khai bao hang so PI va ban kinh hinh tron
	const float PI = 3.14;
	float radiut = 5;
	// Tinh chu vi va dien tich cua hinh tron 
	int circumference = 2 * PI * radiut;
	int area = PI * radiut * radiut;
	// In ket qua ra man hinh 
	printf("Ban kinh cua hinh tron: %d cm\n", radiut);
	printf("Chu vi cua hinh tron: %d cm\n", circumference);
	printf("Dien tich cua hinh tron: %d cm^2\n", area);
	
	return 0;
}
