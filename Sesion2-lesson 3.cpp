#include<stdio.h>
int main() {
    	// Khai bao va khoi tao hai bien so nguyen 
    	int firstnumber = 16;
    	int secondnumber = 11;
    	// Tinh tong, hieu, tich va thuong cua hai so nguyen va luu vao bien khac 
    	int sum = firstnumber + secondnumber;
    	int difference =firstnumber - secondnumber;
    	int product =firstnumber * secondnumber;
    	float quotient =(float)firstnumber/secondnumber;
    	//In  ket qua ra man hinh 
    	printf("Tong cua %d va %d la: %d \n", firstnumber, secondnumber, sum); 
    	printf("Hieu cua %d va %d la: %d \n", firstnumber, secondnumber, difference);
    	printf("Tich cua %d va %d la: %d \n", firstnumber, secondnumber, product);
    	printf("Thuong cua %d va %d la: %2f \n", firstnumber, secondnumber, quotient);
    	
    	
    	return 0;
    }
