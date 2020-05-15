#include <iostream>
#include <time.h>       
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<conio.h>
using namespace std;

void Random(char* brr, int n)
{
    for (int i = 0; i < n; i++) {
        i % 8 == 0 && i != 0 ? *(brr+i) = char(32) : *(brr+i) = char(rand() % 25 + 97); 
    }
}

int main() {
    srand(time(0));
    const int N = 24;           
    const int MAX_LEN = 255;   
    
    char* DICTIONARY_OF_WORDS= new char[N];
    int cin[N];
      

    int random;                                  
    int score = 0;                               
    const float secs = 10;                       
    char S[N] = "";                            
    const float delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();                         

    while (clock() - start < delay) {
        Random(DICTIONARY_OF_WORDS, N);
        for (int i = 0; i < N; ++i)
        {

        cout  << DICTIONARY_OF_WORDS[i];
        }
        cout << endl;
        for (int i = 0; i < N; ++i)
        {
            cin[i] = _getch();
           
                cout << char(cin[i]);
           
            if (cin[i] == DICTIONARY_OF_WORDS[i])
            {
                score++;
            }
            
        }
        cout << endl;
        system("CLS");
    }
    cout << "Score = " << score << '\n';
}