/**
 * @file Deque.h
 * @author Lizette Navarrete
 * @date 2025-04-22
 * @brief Creates the Deque class
 * 
 * A deque class constructed using dynamic double arrays 
 */


//const as a safety, anywhere just finding and returning is good
#ifndef DEQUE_H
#define DEQUE_H
#include <iostream>



//possibly have resize helper?
//template<typename T> //declare template class
class Deque{
private:
  int** blockmap;
  int front; //first data block in blockmap
  int back; //last data block in blockmap
  int elements; //number of elements stored in a block
  int totalElements; //total number of elements in a block //Maybe have elements * totalBlocks?
  int totalBlocks; //total number of blocks
  
public:
  Deque(); //constructor
  ~Deque(); //deconstructor

  void push_front(int valuex); //add to front
  void push_back(int value); //add to back

  void pop_front(); //removes from value
  void pop_back(); //remove back value

  int front() const; //return front element, no removal
  int back() const; //return back element, no removal

  bool empty() const; //check if empty, T or F
  int size() const; //return # of elements

  int operator[](int index) const; //Access Inde - deque[i], return copy of valuex
};

//#include "Deque.tpp" // implement template
#endif //DEQUE_H
