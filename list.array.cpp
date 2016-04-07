#include <iostream>
#include <math.h>
using namespace std;

float STDV (int size2, float st){
  double stdv;
  return double stdv = sqrt(st/(size2-1));

}

float ST(int list2[], int size2, float average){
  double st;
  for(int i = 0; i <size2; i++){
  st += pow((list2[i] - average),2);
  }
  return st;
}

float GetAverage (int list[], int size){
  float sum = 0.0;
  float result = 0.0;

  for ( int n = 0; n <size; n++){
    sum += list[n];
  }
  return result = sum / size;
}

int main(){
  int array [10];
  double average;
  double st;

  cout << "Please enter ten numbers:" << endl;

  for (int i = 0; i<10; i++){
    cin >> array [i];
  }

 average = GetAverage (array, 10);
 cout << "Average is " << average;

 st = ST(array,10,average);

 cout << endl << "Standard deviation is: " << STDV (10,st);
}
