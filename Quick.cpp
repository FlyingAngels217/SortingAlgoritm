#include <iostream>
#include <vector>

using namespace std;

void QuickSort(vector<int>& list, int left, int right)
{
	// 퀵 정렬은 과정상 좌, 우값 모두를 탐색하고, 재귀함수로 돌리기 때문에
	// 왼쪽, 오른쪽 인덱스도 잡아준다.

	int pivot = list[left];	// 기준점을 설정한다.(보통 왼쪽값을 고른다.)
	int Lindex = left;		// 왼쪽 인덱스값을 설정한다.
	int Rindex = right;		// 오른쪽 인덱스값을 설정한다.

	// 왼쪽 인덱스가 오른쪽 인덱스보다 클때까지 반복한다.
	while (left < right)
	{
		// 오른쪽 탐색
		// 1. 오른쪽 값이 왼쪽 값보다 클 경우에만 반복한다.
		// 2. 기준점보다 작은 값을 찾았을 시 중지한다.
		while (right > left && list[right] >= pivot)
		{
			right--;

			if (list[right] < pivot)
				break;
		}
		// 왼쪽 탐색
		// 1. 오른쪽 값이 왼쪽 값보다 클 경우에만 반복한다.
		// 2. 기준점보다 큰 값을 찾았을 시 중지한다.
		while (right > left && list[left] <= pivot)
		{
			left++;

			if (list[left] > pivot)
				break;
		}

		// 이후 오른쪽 값과 왼쪽 값을 서로 바꾼다.
		int swap = list[right];
		list[right] = list[left];
		list[left] = swap;
	}

	// 왼쪽 값과 기준점을 바꿔준다.
	int swap = list[Lindex];
	list[Lindex] = list[left];
	list[left] = swap;

	// 배열을 시작 ~ 왼쪽 - 1, 왼쪽 + 1 ~ 끝 으로 나누어 다시 정렬한다.
	if (Lindex < left)
		QuickSort(list, Lindex, left - 1);
	if (Rindex > right)
		QuickSort(list, left + 1, Rindex);

	// 정렬이 마무리되는 시점은 쪼개진 배열의 크기가 1일때 이다.
}

void main()
{

}