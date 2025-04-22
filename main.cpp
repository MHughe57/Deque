
#include "Deque.h"

using namespace std;

int main(){

  Deque A;

  cout << "Push Test" << endl;

  //push front
  for (int i = 100; i <= 150; ++i){
    A.push_front(i);
    cout << "Pushed to the front ( " << i << " )" << endl;
  }

  //push back
  cout << "Pushing Back" << endl;
  for (int i = 200; i <= 230; ++i){
    A.push_back(i);
    cout << "Pushed to the back ( " << i << " )" <<endl;
  }

  cout << "Current num of elements: " << A.size << endl;
  cout << "Element in front: "<< A.front() << endl;
  cout << "Element in back: " << A.back() << endl;
  
  
}
