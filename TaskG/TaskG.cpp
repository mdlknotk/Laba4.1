//ЮФУ, ИКТИБ,МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лабораторная работа 4.1 - Подпрограммы, библиотечные функции
//КТбо1-6, Домбрина Алёна Игоревна
// Задача G
// 15.11.2023
#include <iostream>
#include<cstdlib>
using namespace std;

void StepUp(int*, int*, int*, int*, int*, int*, int*);

int main() {

    int n;
    cin >> n;
    int array[10000];
    for (int i = 0; i < n; i++) cin >> array[i];
    int first = 0;
    int second = 0;
    int left = 0;
    int right = n - 1;
    int flag = 1;
    while (left <= right) StepUp(&array[left], &array[right], &left, &right, &flag, &first, &second);
    cout << first << ":" << second;
    return 0;
}

void StepUp(int* arrleft, int* arrright, int* left, int* right, int* flag, int* first, int* second) {
    if ((*arrleft >= *arrright) && *flag == 1)
    {
        *first += *arrleft;
        *left+=1;
        *flag = 2;
    }
    else if ((*arrleft < *arrright) && *flag == 1)
    {
        *first += *arrright;
        *right-=1;
        *flag = 2;
    }
    else if ((*arrleft >= *arrright) && *flag == 2)
    {
        *second += *arrleft;
        *left+=1;
        *flag = 1;
    }
    else if ((*arrleft < *arrright) && *flag == 2)
    {
        *second += *arrright;
        *right-=1;
        *flag = 1;
    }
}