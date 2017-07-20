#include <stdio.h>;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
int main() {
    int n;
    int i, j;
    long min, flag;
    long a[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        flag = a[min];
        a[min] = a[i];
        a[i] = flag;
    }
    for (i = 0; i < n; i++) {
    	printf("%ld\n", a[i]);
    }
    return 0;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]){
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++) {
        if (list1[i] <= list2[j]) {
            list3[k] = list1[i];
            i++;
        }
        else {
            list3[k] = list2[j];
            j++;
        }
    }
    if (size2 == j) {
        for (; i < size1; i++, k++) {
            list3[k] = list1[i];
        }
    }
    if (size1 == i) {
        for ( ; j < size2; j++, k++) {
            list3[k] = list2[j];
        }
    }
}