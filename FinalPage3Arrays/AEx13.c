//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define N 4
//#define M 4
//
//int count_rectangles(int picture[N][M]) {
//	int squers = 0, i, j, surrounding = 0;
//	for (i = 1; i < N - 1; i++)
//	{
//		for (j = 1; j < M  -1; j++)
//		{
//			switch ((picture[i][j + 1] + picture[i][j - 1] +
//				picture[i + 1][j] + picture[i - 1][j])) {
//			case 4:
//				squers += 4;
//				break;
//			case 3:
//				squers += 2;
//				break;
//			case 2:
//				squers += 1;
//				break;
//			}
//		}
//	}
//	squers /= 4;
//	return squers;
//}