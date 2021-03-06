#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int>& list)
{
	int temp = 0;	// 값 비교를 위한 임시 변수
	int nMin = 0;	// 탐색 된 최소값

	// 현재 선택된 값
	for (int i = 0; i < list.size() - 1; i++)
	{
		// 비교할 값 (현재값을 제외한 나머지 값들)
		for (int j = i + 1; j < list.size(); j++)
		{
			// 리스트에서 가장 작은 값을 탐색
			if (list[i] > list[j])
			{
				nMin = j;
			}
		}

		// 선택된 값을 가장 작은 값으로 변경
		temp = list[i];
		list[i] = list[nMin];
		list[nMin] = temp;
	}

}

void main()
{

}