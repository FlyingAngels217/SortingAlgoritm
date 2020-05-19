#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int>& list)
{
	int temp = 0;	// 값 비교를 위한 임시 변수

	for (int i = 0; i < list.size() - 1; i++)
	{
		// 버블 정렬은 끝에서부터 정렬이 되기 때문에 매 회차만큼 끝에서 뺀 값까지 동작한다.
		for (int j = 0; j < list.size(); j++)
		{
			if (list[j] < list[j - 1])
			{
				temp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = temp;
			}
		}
	}
}

void main()
{

}