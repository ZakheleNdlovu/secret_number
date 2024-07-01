#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


float countScore(float lives){
    float num;
    num = (lives / 8) * 100;
    return num;
}

int guessNum(){
    srand(time(0));
    int snum = (rand()% 50) + 1;

    string result;
    float lives = 8;

    cout << "--------------------------------" << '\n';
    cout << "******NUMBER GUESSING GAME******" << '\n';
    cout << "--------------------------------\n" << '\n';
    cout << endl;

    cout << "GUESS THE SECRET NUMBER BETWEEN 1 AND 50\n" << '\n';
    while (lives > 0){
        cout << "Your Guess: " ;
        int num;
        cin >> num;
        if (num == snum){
            result = "You guessed correctly\n";
            cout << result;
            int score = countScore(lives);
            cout << "-----------------------------" << '\n';
            cout << "***** Your scored " << score << "% *******" << '\n';
            cout << "-----------------------------" << '\n';
            break;
        }
        else if (num > snum) {
            result = "Your guess is higher than the secret number\n\n";
            lives--;
            cout << result;
        }
        else if (num < snum) {
            result = "Your guess is lower than the secret number\n\n";
            lives--;
            cout << result;
        }
        if (lives == 0){
            cout << " ----------------------------" << '\n';
            cout << "| You are out of guesses    |\n|****** Game Over ******    |" << '\n';
            cout << " ----------------------------" << '\n';
        }
    }


}

int main(){

    guessNum();

    return 0;
}

