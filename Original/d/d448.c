#include <stdio.h>

int main() {
	double t1, t2, t3, x1, x3;
	while (scanf("%lf%lf%lf%lf%lf", &t1, &t2, &t3, &x1, &x3) == 5) {
		printf("%.6lf\n", x1-(x1-x3)*(t1-t2)/(t1-t3));
	}
	return 0;
}