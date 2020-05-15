#include <iostream>
#include <time.h>       //��� ������������� ���������� �������
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    srand(time(0));
    const int N = 10;           //���������� ����
    const int MAX_LEN = 255;    //������������ ����� ������

    /*������� ����*/
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

    int random;                                  //���������� ��� ���������� ������.
    int score = 0;                               //������� ����� �������� ����
    const float secs = 60;                       //����� ����� 60 ������
    char S[N] = "";                            //�������� �����

    const float delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();                         // ���������� ��������� �����, ��������� � ������� ������� ���������

    while (clock() - start < delay) {
        random = rand() % N;                        //��������� �����, ������
        cout << "input word:\t " << DICTIONARY_OF_WORDS[random] << '\n';
        cin.getline(S, MAX_LEN);
        if (strcmp(S, DICTIONARY_OF_WORDS[random]) == 0) {
            score++; //���� ����� ������� �����, ���������� �������
            cout << score << '\n';
        }
    }

    cout << "\nscore = " << score << '\n';
    cout << "count words == " << N;
    
}