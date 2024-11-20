#include <stdio.h>
int main (){
	// Khai bao va khi tao bien canh cua hinh vuong 
	int side = 6;
	// Tinh chu vi va dien tich cua hinh  vuong 
	int perimeter = 4 * side;
	int area = side * side;
	// In ket qua ra man hinh 
	printf("Canh cua hinh vuong: %d cm\n", side);
	printf("Chu vi cua hinh vuong: %d cm\n", perimeter);
	printf("Dien tich cua hinh vuong: %d cm^2\n", area);
	
	return 0;
}
