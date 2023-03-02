#include<stdio.h>
#include<limits.h>
#include<float.h>

void size2() {
	printf("Rozmiar unsigned char: %d\n", sizeof(unsigned char));
	printf("Rozmiar unsigned short: %d\n", sizeof(unsigned short));
	printf("Rozmiar unsigned int: %d\n", sizeof(unsigned int));
	printf("Rozmiar unsigned long: %d\n", sizeof(unsigned long));
	printf("Rozmiar unsigned long int: %d\n", sizeof(unsigned long int));
	printf("Rozmiar unsigned long long: %d\n", sizeof(unsigned long long));
}

void limits() {
	printf("Unsigned char max: %d\n", UCHAR_MAX);
	printf("Char: %d : %d\n", CHAR_MIN, CHAR_MAX);
	printf("Unsigned short max: %d\n", USHRT_MAX);
	printf("Short: %d : %d\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned int max: %lli\n", UINT_MAX);
	printf("Int: %d : %d\n", INT_MIN, INT_MAX);
	printf("Unsigned long max: %lli\n", ULONG_MAX);
	printf("Long: %d : %d\n", LONG_MIN, LONG_MAX);
	printf("Unsigned long long max: %lli\n", ULLONG_MAX);
	printf("Long long: %lli : %lli\n", LLONG_MIN, LLONG_MAX);
	
	printf("Float: %lli : %lli\n", FLT_MIN, FLT_MAX);
	printf("Double: %lli : %lli\n", DBL_MIN, DBL_MAX);
	printf("Long double: %lli : %lli\n", LDBL_MIN, LDBL_MAX);
}

void process() {
	
	int x = 989872;
	int y = 120008;
	
	printf("x= %p\n", &x);
	
	unsigned char *pointer = &x;
	printf("%d\n", *pointer);
	printf("%d\n", *(pointer+1));
	printf("%d\n", *(pointer+2));
	printf("%d\n", *(pointer+3));
	printf("Liczba x to %d\n\n", *(pointer)*1 + *(pointer+1)*256 + *(pointer+2)*256*256 + *(pointer+3)*256*256*256);
	
	pointer = &y;
	
	printf("%d\n", *pointer);
	printf("%d\n", *(pointer+1));
	printf("%d\n", *(pointer+2));
	printf("%d\n", *(pointer+3));
	printf("Liczba y to %d\n\n", *(pointer)*1 + *(pointer+1)*256 + *(pointer+2)*256*256 + *(pointer+3)*256*256*256);
	
	//Jest wiele sposobow rozwiazania tego zadania na podstawie dobierania ró¿nych typów
	//zmiennej przechodzacej przez skladowe inta, u mnie to unsigned char
	
	int a;
	int b;
	
	printf("a= %p \t b= %p\n", &a, &b);

	a = 1;
	
	printf("a= %p \t b= %p\n", &a, &b);
	
	b = 1111;
	
	printf("a= %p \t b= %p\n", &a, &b);
	
	int c;
	int d;
	printf("c= %p \t d= %p\n", &c, &d);
}

int main() {
	
	//Ex. 2
	size2();
	
	printf("\n\n");
	
	//Ex. 3
	limits();
	
	printf("\n\n");
	
	//Ex. 5   1:T 2:T 3:T 3:T (uruchomienie to nie to samo, co kompilacja)
	
	//Ex. 7, 8, 9
	process();	
	
	return 0;
}
