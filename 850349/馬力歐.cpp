#include <iostream>
using namespace std;
int main(){
  int height;
  int space;
  cout << "輸入高度:";
  cin >> height;
	for(int i = 0 ; i <= height ; i++){
        int space = height - i ;
        for(int j = 0; j < space ; j++){
            cout << " " ;
        }

        for(int j = 0; j < i ; j++){
           cout << "#" ;
        }

        cout << "  ";
        for(int j = 0; j < i ; j++){
           cout << "#" ;
        }

        cout << '\n';
    }
}