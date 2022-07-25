#include <iostream>
using namespace std;

#define MODE  1

#ifndef MODE
#error Директива MODE не найдена!
#endif

void add() {
    int a = 0;
    int b = 0;            
    cout << "Работаю в боевом режиме" << endl;
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    cout << "Результат сложения: " << a + b;
     
}

int main()
{
    setlocale(LC_ALL, "rus");
#if MODE==0
    cout << "Работаю в режиме тренировки";
#elif MODE==1
    add();
#else 
    cout << "Неизвестный режим. Завершение работы";
#endif
    return 0;
}