#include <stdio.h>
#include <locale.h>

int main ()
{
	int a, b, c, d;
	
	setlocale(LC_ALL,"Russian");
	printf("Aaaaeoa aia: ");
	scanf("%d", &a);
	
	b = a%4;
	c = a%100;
	d = a%400;
	
	if ((c == 0)&&(d != 0)) {
		printf("\nA yoii aiao 365 aiae.");
	} else {
		if (b == 0) {
			printf("\n1.");
		} else {
			printf("\n0.");
		}
	}
	
	return 0;
}
