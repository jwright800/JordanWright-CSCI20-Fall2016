// Jordan Wright
// Lab 2.2
// 2/28/17

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  
  int target_arr[4] = {0};
  int guess_arr[4] = {0};
  bool arr_equal = false;
  int num_guesses = 0;
  int num_exists = 0;
  int num_correct = 0;
  int i, j;
  
  srand(time(0));
  for (i = 0; i < 4; i++) {
    target_arr[i] = ((rand()% 6) + 1);
  }
  
  cout << "Mastermind" << endl << endl;
  cout << "Enter four numbers (1-6)" << endl 
  << "If any of the numbers you guess exist in the solution or are" << endl
  << "in the correct place in the solution you'll be notified." << endl;
  
  while (arr_equal == false && num_guesses <= 5) {
    num_correct = 0;
    num_exists = 0;
    
    cout << endl << "Guesses remaining: " << 5 - num_guesses << endl;
    cout << "Enter your guess (4 numbers) (1-6): ";
    for (i = 0; i < 4; i++) {
      cin >> guess_arr[i];
      for (j = 0; j < 4; j++) {
        if (guess_arr[i] == target_arr[j]){
          ++num_exists;
          break;
        }
      }
      if (guess_arr[i] == target_arr[i]) {
        ++num_correct;
      }
      if (num_correct == 4) {
        arr_equal = true;
      }
      
    }
    cout << "Your guess: ";
    for (i = 0; i < 4; i++) {
     cout << guess_arr[i] << " "; 
    }
    cout << endl << "Correct numbers: " << num_exists 
         << " Correct place: " << num_correct << endl;
    ++num_guesses;
  }
  
  if (arr_equal == true) {
    cout << endl << "You win!" << endl;
  }
  else {
    cout << endl << "Sorry. You Lose." << endl;
  }
  
  return 0;
}