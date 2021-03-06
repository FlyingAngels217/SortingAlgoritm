#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int>& list)
{
	int temp = 0;	// 값 비교를 위한 임시 변수
	int nMin = 0;	// 탐색 된 최소값

	// 현재 선택된 값
	for (int i = 0; i < list.size() - 1; i++)
	{
		int j = i - 1;			// 현재 선택된 값의 앞에서부터 탐색 할 인덱스
		int temp = list[i];		// 현재 선택된 값

		// 정렬이 실제로 이루어지는 부분
		// 조건 1. j가 0보다 같거나 클때(배열 인덱스 번호이기 때문)
		// 조건 2. 현재 선택된 값이 탐색중인 값보다 작을 때
		//			(자신보다 앞에 있는 숫자가 작을 때 멈추기 위함)
		while (j >= 0 && temp < list[j])
		{
			list[j + 1] = list[j];
			j--;
		}

		list[j + 1] = temp;
	}

}

void main()
{

}