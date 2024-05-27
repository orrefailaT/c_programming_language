#include <stdio.h>

#define LOWER 0		/* lower limit of temperature scale */
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

int main() {
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%d\t%.2f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}

