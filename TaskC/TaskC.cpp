//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба4.1 - Подпрограммы, библиотечные функции
//КТбо1-6, Кравченко Александр Андреевич
//TaskС
//16.11.2023
#include <iostream>

using namespace std;
typedef long long ll;
const int sz = 100000;

int hemming(string, string);

int main() {
    string s;
    cin >> s;
    ll n;
    cin >> n;
    string sn;
    ll length;
    int accepted[sz];
    ll acccount = 0;
    ll min = 10000000000;
    for (int i = 0; i < n; i++)
    {
        cin >> sn;
        length = hemming(s, sn);
        if (length < min) min = length;
        accepted[i] = length;
    }
    for (int i = 0; i < n; i++) if (min == accepted[i]) acccount++;
    cout << acccount << endl;
    for (int i = 0; i < n; i++) if (min == accepted[i])cout << i + 1 << ' ';

}
/*
* Функция hemming считает расстояние Хемминга, получает на ввод две строки:
* s1 - строка, являющаяся принятым сообщением
* s2 - строка - одна из тех, которые могли быть отправлены
* Возвращает расстояние Хемминга(length)
*/
int hemming(string s1, string s2) {
    ll length = 0;
    for (ll i = 0; i < s1.size(); i++) if (s1[i] != s2[i]) length++;
    return length;
}