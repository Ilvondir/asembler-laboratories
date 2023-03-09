#include<stdio.h>

void size() {
	printf("Rozmiar char: %d\n", sizeof(char));
	printf("Rozmiar short: %d\n", sizeof(short));
	printf("Rozmiar int: %d\n", sizeof(int));
	printf("Rozmiar long: %d\n", sizeof(long));
	printf("Rozmiar long int: %d\n", sizeof(long int));
	printf("Rozmiar long long: %d\n", sizeof(long long));
	printf("Rozmiar float: %d\n", sizeof(float));
	printf("Rozmiar double: %d\n", sizeof(double));
	printf("Rozmiar long double: %d\n", sizeof(long double));
}

void size2() {
	printf("Rozmiar unsigned char: %d\n", sizeof(unsigned char));
	printf("Rozmiar unsigned short: %d\n", sizeof(unsigned short));
	printf("Rozmiar unsigned int: %d\n", sizeof(unsigned int));
	printf("Rozmiar unsigned long: %d\n", sizeof(unsigned long));
	printf("Rozmiar unsigned long int: %d\n", sizeof(unsigned long int));
	printf("Rozmiar unsigned long long: %d\n", sizeof(unsigned long long));
}

void bits() {
	int bits = sizeof(void*) * 8;
    
    printf("Ten program zostal skompilowany w %d bitach.\n", bits);
}

void bytes() {
	int number;
	printf("Podaj liczbe: ");
	scanf("%d", &number);
	
	int temp = number;
	int counter = 0;
	while (temp>0) {
		int mod = temp%256;
		
		if (mod<10) printf("[00%d] ", mod);
		if (mod>=10 && mod<100) printf("[0%d] ", mod);
		if (mod>100) printf("[%d] ", mod);
		
		temp = (temp-mod)/256;
		
		counter++;
	}
	
	int i = 0;
	for (i=counter; i<4; i++) printf("[000] ");
}

void endian() {
	int i = 1;
	char *c = (char*)&i;
	if (*c == 1) printf("Procesor pracuje w little-endian.");
	else printf("Procesor pracuje w big-endian.");
}

void endian2() {
	int i = 1;
    char *c = (char*)&i;
    if (*c == 1) printf("little-endian architecture");
	else printf("big-endian architecture");
}

int main() {
	
	size();
	
	printf("\n\n");
	
	size2();
	
	printf("\n\n");
	
	bits();
	
	printf("\n\n");
	
	bytes();
	
	printf("\n\n");
	
	endian();
	
	printf("\n\n");
	
	endian2();
	
	return 0;
}
