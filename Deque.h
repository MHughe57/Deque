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
  int blockSize; //number of elements stored in a block
  int totalElements; //total number of elements in the map //Maybe have elements * totalBlocks?
  int mapSize; //total number of blocks

  void resize();
public:
  

/**
 * Initializes an empty deque
 *
 * @pre 
 * @post 
 * 
 */
  Deque(); 

/**
 * Deletes both dimensions of the deque
 *
 * @pre 
 * @post 
 * 
 */
  ~Deque(); //deconstructor


/**
 * Add from the front, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap
 *
 * @param int valuex 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_front(int value); //add to front

/**
 * Add from the back, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap
 *
 * @param int value 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_back(int value); //add to back

/**
 *Remove from the front, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void pop_front(); //removes from value

/**
 * Remove from the back, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void pop_back(); //remove back value


/**
 * return a copy of the item at the front
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int front() const; //return front element, no removal

/**
 * return a copy of the item at the back
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int back() const; //return back element, no removal


/**
 * Return a Boolean describing whether the deque is empty
 *
 * @pre 
 * @return bool 
 * @post 
 * 
 */
  bool empty() const;

/**
 * should return the size of the deque (number of elements currently stored)
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int size() const;


/**
 * Access Index - deque[i], return copy of value
 *
 * @param int index 
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int operator[](int index) const; //Access Inde - deque[i], return copy of value
};

//#include "Deque.tpp" // implement template
#endif //DEQUE_H
