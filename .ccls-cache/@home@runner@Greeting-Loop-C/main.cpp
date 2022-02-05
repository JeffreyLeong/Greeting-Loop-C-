#include <iostream>
using namespace std;

int main() {
  int count_down;
  cout << "How many greetings do you want? ";
  cin >> count_down;
  string user_name;
  cout << "What is your name? ";
  cin >> user_name;
  cout << endl;
  cout << endl;
  
  while (count_down > 0){
    cout << "Hi " << user_name << "! \n";
    count_down = count_down - 1;
  }
  cout << endl;
  cout << endl;
  cout << "That's all! Buh Bye asshole ;)";
  cout << endl;
  return 0;
}