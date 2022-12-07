#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[3][4];
	int value = 0;//змінна для парних чисел рядка
  int column=0;//j 
  int line=0;//i
	srand(time(NULL));//отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 3; i++) { // для рядків 
		for (int j = 0; j < 4; j++) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if(value<arr[i][j]){
        value=arr[i][j];
        column=j;
        line=i;
      }
		}
	}
  cout << "for "<<line <<" line and "<<column <<" column biggest number = " << value << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}