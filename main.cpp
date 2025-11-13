#include <cstdlib>
#include <iostream>
#include <locale>
#include <limits>
#include <vector>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int check_symbol_in_word( char symbol, vector<char> letters ){
    for (int i = 0; i != letters.size(); i++){
        if(letters[i] == symbol) return 1;
    }
    return 0;
}
// добавить рандом для слов


int viseliza() {
    string arr[] = { "эльвиви", "эчпочмак" };
    string random_word = arr[0];
    string letter;
    vector<char> letters;

    for (int i = 0; i <= random_word.size(); i++){
        if (check_symbol_in_word(random_word[i], letters) == 0) letters.push_back(random_word[i]);
    }

    for (int i = 0; i != letters.size(); i++){
       // cout << letters[i] << endl;
    }
    int attempts = letters.size() - 1;
    int letters_amount = letters.size();

    cout << "Я загадала слово. Попробуйте угадать букву!" << endl;

    bool try_again = false;
    while(attempts > 0 && letters.size() > 1){
        getline(cin, letter);
        if (check_symbol_in_word(letter[0], letters) == 1){
            cout << "О вы угадали букву: " << letter << " ! " << endl;
             for (int i = 0; i != letters.size(); i++){
                if(letters[i] == letter[0]) {
                    letters.erase(letters.begin() + i);
                }
            }
            cout << "Букв угадать осталось : " << letters.size() << endl << endl;
        }
        else {
            attempts -= 1;
            cout << "Попыток осталось : " << attempts << endl << endl;

            cout << "не угадали " << endl;
        }

    };

    if(attempts == 0 )  cout << endl << endl << "Попытки кончились !" << endl;
    else if(letters.size() == 1 ) cout << endl << endl << "Вы угадали все слово: " << arr[0] << endl;
    return 0;
}

int main(int argc, char **argv) {
    setlocale(LC_ALL, "");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int game_num;
    cout << "Какую игру хотите выбрать? " << endl;
    cout << "1 - Виселица" << endl;
    cout << "2 - " << endl;
    cin >> game_num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    switch (game_num) {
        case 1:
            viseliza();
        break;
        case 2:
            //operation = 1;
        break;
        default:
            cout << "Такого варианта нет!!!!" << endl;
    }
}
