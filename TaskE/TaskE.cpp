//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба4.1 - Подпрограммы, библиотечные функции
//КТбо1-6, Кравченко Александр Андреевич
//TaskE
//17.11.2023
#include <iostream>
#include<cstdlib>

using namespace std;

int cmp(const void*, const  void*);

int main() {
    int n;
    int m;
    int count = 0;
    int sum = 0;
    cin >> n >> m;
    int arr[1001];
    for (int i = 0; i < n; i++) cin >> arr[i];
    qsort(arr, n, sizeof(int), cmp);
    for (int i = n - 1; i >= 0 && count < m; i--)
        if (arr[i] >= 0) {
            sum += arr[i];
            count++;
        }
    cout << sum;
}
int cmp(const void* x1, const void* x2) {
    return (*(int*)x1 - *(int*)x2);
}
