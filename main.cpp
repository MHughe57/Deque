/**
 * @file main.cpp
 * @author Lizette Navarrete
 * @date 2025-04-23
 * @brief Implementing and testing Deque class
 * 
 * Testing the Deque class and all of its functions
 */


#include <iostream>
#include "Deque.h"

using namespace std;

int main(){

  Deque A;

  cout << "Push Test" << endl;

  //push front
  for (int i = 1; i <= 50; ++i){
    A.push_front(i);
    cout << "Pushed to the front ( " << i << " )" << endl;
  }

  //push back
  cout << "Pushing Back" << endl;
  for (int i = 1; i <= 30; ++i){
    A.push_back(i);
    cout << "Pushed to the back ( " << i << " )" << endl;
  }


  //Operator in use to output entire map
  cout << "Elements currently: " << endl;
  for (int i = 0; i < A.size(); ++i){
    cout << i << ": " << d[i] << endl;
  }

  
  cout << "Current num of elements: " << A.size << endl;
  cout << "Element in front: "<< A.front() << endl;
  cout << "Element in back: " << A.back() << endl;


  //pop test
  cout << "Pop Test" << endl;
  for (int i = 1; i <= 15; i++){
    A.pop_front(i);
    A.pop_back(i);
  }

  cout << "New Size: " A.size();
  cout << "New front: " << A.front() << endl;
  cout << "New back: " << A.back() << endl;

  cout << "Testing Conplete" << endl;
  return 0;
}
