README FILE


Day 1:
    - created header + research

Day 2:
    -MORE RESEARCH
    -Updated Header
    -Updated CPP
    -flushed out main (Possibly runable)
    -Created  Makefile (untested)

Day 3:
    - STUCK
      - naming comfusion + pointer confusion
    - Met up and gave up.


Notes:
The deque is the class
the blockmap stores the data
- an array of pointers to fixed size blocks (need to define blocksize)
  - a block is a small fixed size array (typically 8 or 16)
resize will add more blocks to the front or back, expanding the blockmap
size will count the number of filled blocks
Each block holds multiple elements, the size determines how many


front and back are 1D, blockMap is 2D.
     - so you cant say blockmap[front] because blockmap is a grid, not a list. so its split into two parts
       - front / blocksize = which block
       - front % blocksize = which index within that block.
Block maps are 0(1)