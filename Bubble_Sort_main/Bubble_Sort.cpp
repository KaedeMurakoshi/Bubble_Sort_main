#include <iostream>
#include <cstdlib>
using namespace std;

// �z��������_���Ȓl�ŏ�����
void InitRandArray(int* array, const int size)
{
	time_t t;
	srand(time(&t) % RAND_MAX);

	for (int i = 0; i < size; ++i)
	{
		// �P�`�X�X
		array[i] = rand() % 99 + 1;
	}
}

// �o�u���\�[�g
void BubbleSort(int* array, const int size)
{
	// n�̔z��̏ꍇ n - 1��J��Ԃ�
	for (int i = size -1; i >= 1; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			// ���@���@�E�Ȃ����ւ���
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		// �z��̒��g��\��
		printf("%d��ڏI��\n", size - i);
		for (int k = 0; k < size; ++k)
		{
			printf("%d, ", array[k]);
		}
		cout << endl;
	}	
}