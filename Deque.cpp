
/**
 * @file Deque.cpp
 * @author Lizette Navarrete
 * @date 2025-04-22
 * @brief creates the deque class
 * 
 * creates the methods for the deque class
 */
#include <iostream>
#include "Deque.h"

//Keep in mind: Pointers(front back) are 1D and the blockmap is 2D so using the pointer as a parameter wont work. Math is needed ro determine things like index within each block


/**
 * Deletes both dimensions of the deque
 *
 * @pre 
 * @post 
 * 
 */
Deque::~Deque()
{
  for(int i = 0; i < mapSize; i++)
    delete[] blockmap[i];
  delete[] blockmap;
}


/**
 * Initializes an empty deque
 *
 * @pre 
 * @post 
 * 
 */
//start front and back in the middle, instead of at 0
Deque::Deque():blockSize(3), front((mapSize * blockSize) / 2), back((mapSize * blockSize) / 2), mapSize(16), totalElements(0)
{
  blockmap = new int*[mapSize];
  for(int i = 0; i < mapSize; i++)
    {
      blockmap[i] = new int[blockSize]; //dont need to allocate all blocks immediately, could be = nullptr
    }
  
}



/**
 * Add from the front, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap
 *
 * @param int value 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Deque::push_front(int value)
{
  if (front == 0){//if no space in front, if blockmap is empty/full run resize
    resize();
  }
  front--;//push pointer to previous space in block/ previous block (keeps it as 0)
  //the first part determines what number block value needs to be in. the second part tells you the position inside the block it should be, aka the index #.
  // '/' - row, '%' remainder, tells you column
  blockmap[front / blockSize][front % blockSize] = value; //insert new value into front block
  totalElements++
}



/**
 *  return a copy of the item at the front
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
int Deque::front()
{
  return blockmap[front / blockSize][front % blockSize]; //[0][0]?
}



/**
 * Add from the back, reallocating as necessary by either adding an array to your blockmap or resizing your blockmap.
 *
 * @param int value 
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Deque::push_back(int value)
{
  if()//if blockmap is empty/full run resize
    {}
  //this way because you need to find the next current position in the block and 
  blockmap[back/blockSize][back % blockSize] = value;
  back++;//push pointer to next space in block/next block
  totalElements++;
  
}



/**
 * Return a copy of the item at the particular location.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Deque::back(){
  return blockmap[back / blockSize][back % blockSize]
}



/**
 * Should return a Boolean describing whether the deque is empty
 *
 * @pre 
 * @return bool 
 * @post 
 * 
 */
bool Deque::empty()
{
  if(totalElements = 0) //FRONT = 0? FRONT = NULL?
    {
      return true;
    }
  else
    {
      return false;
    }
}

/**
 * should return the size of the deque (number of elements currently stored)
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
int Deque::size()
{
  //can just do return elements? leave it if it works
  int size = 0;
  while(back != empty() ) //0? Null?
    {
      for(int i = 0; i < mapSize; i++) //maybe have to multiply by blocksize at the end?
	{
	  size++; //
	}
    }
  std::cout >> size >> endl; //maybe size * blockSize? for elements?
}



//Block map visualization

//   [ 0 , 1 , 2 , 3 ] block 0, holds elements indexed 0-4
//   [ 4 , 5 , 6 , 7 ]
//   [ 8 , 9 , 10 , 11 ]
