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
#include 



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
Deque::Deque():blockSize(3), front(NULL), back(NULL), mapSize(16), totalElements(0)
{
  blockmap = new int*[mapSize];
  for(int i = 0; i < mapSize; i++)
    {
      blockmap[i] = new int[blockSize];
    }
  
}

void Deque::push_front(int value)
{
  if (){//if blockmap is empty/full run resize

  }else{
    front--;//push pointer to previous block (keeps it as 0) 
  }
  blockmap[front][0] = value; //insert new value into front block
}
int Deque::front()
{
  return blockmap[0][0]; //[0][0]?
}
void Deque::push_back(int value)
{
  if()//if blockmap is empty/full run resize
    {}
  else
    {
      
    }
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
  if(front =) //FRONT = 0? FRONT = NULL?
    {
      true;
    }
  
  else
    {
      false;
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
  int size = 0;
  while(back != empty() ) //0? Null?
    {
      for(int i = 0; i < mapSize; i++)
	{
	  size++;
	}
    }
}



//Block map visualization

//   [ 0 , 1 , 2 , 3 ] block 0, holds elements indexed 0-4
//   [ 4 , 5 , 6 , 7 ]
//   [ 8 , 9 , 10 , 11 ]
