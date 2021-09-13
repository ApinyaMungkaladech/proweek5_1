#include<stdio.h>
int main() {
	int x, y, z, n, m;
	x = 1;
	printf("Enter number : ");
	scanf_s("%d", &n);
	m = (2 * n) - 1;
	while (x <= n) {
		y = 1;
		while (y <= x) {
			printf(" ");
			y = y + 1;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z = z + 1;
		}
		y = 1;
		while (y <= x) {
			printf(" ");
			y = y + 1;
		}
		printf("\n");
		x = x + 1;
		m = m - 2;
	}
	m = 3;
	x = n - 1;
	while (x >= 1) {
		y = x;
		while (y >= 1) {
			printf(" ");
			y = y - 1;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z = z + 1;
		}
		y = x;
		while (y >= 1) {
			printf(" ");
			y = y - 1;
		}
		printf("\n");
		x = x - 1;
		m = m + 2;
	}
}