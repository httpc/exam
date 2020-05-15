#include <iostream>
#include <time.h>       //Для использования системного времени
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    srand(time(0));
    const int N = 10;           //количество слов
    const int MAX_LEN = 255;    //максимальная длина строки

    /*СЛОВАРЬ СЛОВ*/
    const char* const DICTIONARY_OF_WORDS[N] = {
        "hello",
        "world",
        "mother",
        "father",
        "car",
        "little",
        "magazine",
        "journal",
        "cake",
        "compilator"
    };

    int random;                                  //переменная для случайного выбора.
    int score = 0;                               //счётчик верно введённых слов
    const float secs = 60;                       //будем ждать 60 секунд
    char S[N] = "";                            //вводимое слово

    const float delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();                         // запоминаем системное время, прошедшее с момента запуска программы

    while (clock() - start < delay) {
        random = rand() % N;                        //Случайное число, индекс
        cout << "input word:\t " << DICTIONARY_OF_WORDS[random] << '\n';
        cin.getline(S, MAX_LEN);
        if (strcmp(S, DICTIONARY_OF_WORDS[random]) == 0) {
            score++; //Если слова введены верно, наращиваем счётчик
            cout << score << '\n';
        }
    }

    cout << "\nscore = " << score << '\n';
    cout << "count words == " << N;
    
}