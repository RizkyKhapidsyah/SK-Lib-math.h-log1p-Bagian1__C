/* log1p example */
#include <stdio.h>      /* printf */
#include <math.h>       /* log1p */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	param = 1.0;
	result = log1p(param);
	printf("log1p (%f) = %f.\n", param, result);
	_getch();
	return 0;
}