#include <iostream>
using namespace std;

int main()
{ 
string text_S = "You have received Super Ultra Rare Unit!!!\n";
string text_A = "You have received 5 gems.\n";
string text_B = "You have received 1 gems.\n";
string text_C = "You have received 2000 coins.\n";
string text_D = "You have received very KAK items.\n";
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S'){
    cout << text_S << text_A << text_B << text_C << text_D;
  }
  else if(rank == 'A'){
    cout << text_A << text_B << text_C << text_D;
  }
  else if(rank == 'B'){
    cout << text_B << text_C << text_D;
  }
  else if(rank == 'C'){
    cout << text_C << text_D;
  }
  else if(rank == 'D'){
    cout << text_D;
  }
  else{
    cout << "";
  }

  return 0;
}