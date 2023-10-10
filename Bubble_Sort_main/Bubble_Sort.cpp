#include <iostream>
#include <cstdlib>
using namespace std;

// 配列をランダムな値で初期化
void InitRandArray(int* array, const int size)
{
	time_t t;
	srand(time(&t) % RAND_MAX);

	for (int i = 0; i < size; ++i)
	{
		// １～９９
		array[i] = rand() % 99 + 1;
	}
}

// バブルソート
void BubbleSort(int* array, const int size)
{
	// n個の配列の場合 n - 1回繰り返す
	for (int i = size -1; i >= 1; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			// 左　＞　右なら入れ替える
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		// 配列の中身を表示
		printf("%d回目終了\n", size - i);
		for (int k = 0; k < size; ++k)
		{
			printf("%d, ", array[k]);
		}
		cout << endl;
	}	
}