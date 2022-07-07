#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char letter;
	int series = 0, numberOfA = 0, seriesWithoutC = 0,
		cSeriesToAdd = 0, cSeriesWithOneCtoAdd = 0, cCounter = 0, seriesWithOneC = 0,
		seriesUntilAboveOneC = 0;
	printf("enter Letter: \n");
	scanf(" %c", &letter);
	while (letter != '.') {
		if (letter == 'a') {
			numberOfA += 1;
			seriesUntilAboveOneC += 1;
			if (cCounter)
			{
				cCounter = 0;
				cSeriesToAdd = 0;
			}
		}
		if (letter == 'c') {
			cCounter += 1;
		}
		if (numberOfA && (letter == 'b')) {
			series += numberOfA;
			if (!cCounter)
			{
				cSeriesToAdd += 1;
			}
			else
			{
				if (cCounter > 1)
				{
					seriesUntilAboveOneC = 0;
				}
				seriesWithOneC += seriesUntilAboveOneC;
				cSeriesToAdd = 0;
				cCounter = 0;
			}
			seriesWithoutC += cSeriesToAdd;
		}
		printf("enter Letter: \n");
		scanf(" %c", &letter);
	}
	printf("regular series: %d\n", series);
	printf("series without c: %d\n", seriesWithoutC);
	printf("series with one c: %d\n", seriesWithOneC);
	return 0;
}