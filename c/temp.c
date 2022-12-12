#include <sdio.h>

int main() {
	float f,c;
	printf("Enter Degree in Fahrenheit: \n");
	scanf("%i", &f);
	c = (f - 32) * (5.0 / 9.0);
	printf("\n %.1f Your Temp is: %.1f in Celcius \n", f, c);
	return 0;
}
