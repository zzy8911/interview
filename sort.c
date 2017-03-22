#include <stdio.h>

void bubble_sort(int a[], int n)
{
	int i=0, j=0, tmp=0;

	for (i=0; i<n-1; i++) {
		for (j=0; j<n-1-i; j++) {
			if (a[j] > a[j+1]) {
				tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}
}
#if 0
// find max
void select_sort(int a[], int n)
{
	int i=0, j=0, max=0;

    for (i=0; i<n-1; i++) { // 已排序序列的末尾
        max = 0;
 
        for (j=0; j<n-1-i; j++) { // 未排序序列
            if (a[j+1] > a[max]) // 依次找出未排序序列中的最小值,存放到已排序序列的末尾
                max = j+1;
        }
		if (max != n-1-i) {
			int tmp = a[max];
		    a[max] = a[n-1-i];
		    a[n-1-i] = tmp;
		}
    }
}
#endif
//find min
void select_sort(int a[], int n)
{
	int i=0, j=0, min=0;

    for (i=0; i<n-1; i++) { // 已排序序列的末尾
        min = i;
 
        for (j=i; j<n-1; j++) { // 未排序序列 最小的放在最开始
            if (a[min] > a[j+1]) // 依次找出未排序序列中的最小值,存放到已排序序列的末尾
                min = j+1;
        }
		if (min != i) {
			int tmp = a[min];
		    a[min] = a[i];
		    a[i] = tmp;
		}
    }
}

int main(void)
{
	int a[] = {5,4,3,2,1};

	select_sort(a, sizeof(a)/sizeof(int));

	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	return 0;
}
