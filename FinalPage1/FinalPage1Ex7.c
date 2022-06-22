#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int seconds, hours, minutes;
	scanf("%d", &seconds);
	if (seconds > 86400) { // input must be smaller then 86399
		printf("cant run");
	}
	else {
		minutes = seconds / 60; // get how much minutes ther is
		seconds = seconds % 60; // subtract minutes as seconds
		hours = minutes / 60; // get how much hours there is
		minutes = minutes % 60;// subtract hours as seconds
		printf("time is: %d:%d:%d", hours, minutes, seconds);
	}
	return 0;
}
