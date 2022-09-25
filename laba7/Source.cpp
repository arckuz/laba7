#include "Header.h"

void vm(vector<int>& a){
    cout << "Входной вектор: ";
    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;
}
//Z1-----------------------------------------
void z1() {
    cout << "alghoritm 1" << endl;
    cout << "Выводит первою строки из вектора где совпадают первые два символа" << endl;

    vector<string> vec1 = { "abbd","fsgaae","abds","aabdt","yikad" };

    cout << "Входной вектор: ";
    for (auto i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    auto b = find_if(vec1.begin(), vec1.end(), [](const string& s) {
        return (s[0] == s[1]);
        });

    cout << "Ответ: ";
    cout << *b << endl;
    cout << endl;
}
//Z2-----------------------------------------
void z2() {
    cout << "alghoritm 2" << endl;
    cout << "Выводит четные числа в векторе" << endl;

    vector<int> vec2 = { 134,549,654,324,873,133,122,56,4123,67,412 };

    vm(vec2);

    auto t = remove_if(vec2.begin(), vec2.end(), [](int i) {
        return (i % 2);
        });
    vec2.erase(t, vec2.end());

    cout << "Ответ: ";
    for (auto i : vec2) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}
//Z3-----------------------------------------
void z3() {
    cout << "alghoritm 3" << endl;
    cout << "Выводит значения в массиве в перед, если они больше 5" << endl;

    vector<int> v1;

    for (int i = 0; i <= 10; i++)
    {
        v1.push_back(i);
    }
    random_shuffle(v1.begin(), v1.end());

    vm(v1);

    partition(v1.begin(), v1.end(), [](int val) {
        return val > 5;
        });

    cout << "Ответ: ";
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}
//Z4-----------------------------------------
void z4() {
    cout << "alghoritm 4" << endl;
    cout << "Сортирует вектор по убыванию" << endl;

    vector<int> v3 = { 0, 2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11 };

    vm(v3);

    sort(v3.begin(), v3.end(), [](int elem1, int elem2)
        {
            return elem1 > elem2;
        });

    cout << "Ответ: ";
    for (auto i : v3) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}
//Z5-----------------------------------------
void z5() {
    cout << "alghoritm 5" << endl;
    cout << "Выводит наименьшее по модулю число в векторе" << endl;

    vector<int> v5 = { 0, 1, 2, 3, -2, -4, -6, -8 };
    vector<int>::iterator v5_i;

    vm(v5);

    v5_i = min_element(v5.begin(), v5.end(), [](int elem1, int elem2)
        {
            if (elem1 < 0)
                elem1 = -elem1;
            if (elem2 < 0)
                elem2 = -elem2;
            return elem1 < elem2;
        });

    cout << "Ответ: ";
    cout << *v5_i << endl;
    cout << endl;
}
//Z6-----------------------------------------
void z6() {
    cout << "alghoritm 6" << endl;
    cout << "Проверяет есть ли в векторе элемент кратный 7" << endl;

    vector<int> v6 = { 1, 2, 3, -2, -4, -6, -8 };

    vm(v6);

    cout << "Ответ: ";
    auto p = none_of(v6.begin(), v6.end(), [](int n) {
        return n % 7 == 0;
        });
    if (p) {
        cout << "Нет" << endl;
    }
    else
    {
        cout << "Есть" << endl;
    }
    cout << endl;
}
//Z7-----------------------------------------
void z7() {
    cout << "alghoritm 7" << endl;
    cout << "Проверяет есть ли хотя бы один четный элемент в векторе" << endl;

    vector<int> li{ 51, 41, 11, 21, 20 };

    vm(li);

    cout << "Ответ: ";
    if (any_of(li.begin(), li.end(), [](int const elem) {
        return !(elem % 2);
        }))
        cout << "Есть" << endl;
    else
        cout << "Нет" << endl;
    cout << endl;
}
//Z8-----------------------------------------
void z8() {
    cout << "alghoritm 8" << endl;
    cout << "Выводит простые числа из вектора" << endl;

    vector<int> lis{ 46, 59, 88, 72, 79, 71, 60, 5, 40, 84,13,17,19 };
    vector<int> los;

    vm(lis);

    copy_if(lis.begin(), lis.end(), inserter(los, los.end()), [](int elem) {
        for (int i = 2; i < elem / 2; i++) {
            if (elem % i == 0) {
                return false;
            }
        };
        return true;
        });

    cout << "Ответ: ";
    for (auto i : los) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
}
//Z9-----------------------------------------
void z9() {
    cout << "alghoritm 9" << endl;
    cout << "Выводит квадратные корни из числе в векторе" << endl;

    vector<int> numbers = { 512, 45, 123, 4123, 23, 123, 1245, 654 };

    vm(numbers);

    cout << "Ответ: ";
    for_each(numbers.begin(), numbers.end(), [](int y) {
        cout << round(sqrt(y)) << " ";
        });
    cout << endl;
    cout << endl;
}
//Z10-----------------------------------------
void z10() {
    cout << "alghoritm 10" << endl;
    cout << "Выводит количество элементов в векторе, у которых 6 или больше делителей" << endl;

    vector<int> a = { 5,13,6,8,2,13,56,786,5453,4,3,46,343,325,414,42,546,543,4 };

    vm(a);

    cout << "Ответ: ";
    cout << count_if(a.begin(), a.end(), [](int t) {
        int cnt = 2;
        for (int i = 2; i < t / 2; i++) {
            if (t % i == 0) {
                cnt += 1;
            }
        }
        if (cnt >= 6) {
            return true;
        }
        else {
            return false;
        }
        });
}