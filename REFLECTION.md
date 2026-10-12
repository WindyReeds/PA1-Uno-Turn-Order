1. Why does concat only need to work between two lists of the same representation? What would
   you have to do differently, or what would go wrong, if you tried to make it work between a
   LinkedList and an ArrayList?

    `ArrayList` and `LinkedList` are interacted with in different ways; `ArrayList` relies on 
    indices to find elements while `LinkedList` must be traversed with pointers. You could 
    theoretically `concat` these lists, but you would need to convert one to the other's type by 
    extracting the values and positions and rebuilding the list.

2. Walk through reverse() on your linked list: name the three pointers you need alive at once,
   and explain why losing track of any one of them mid-loop corrupts the list.

    You need a pointer for the `current` node, the `previous` node, and the `next` node. If you lose
    track of any of them mid-loop, you won't be able to flip the pointer of the current node or 
    find the next one to move to.

3. addAnywhere and deleteAnywhere both need a bounds check. What’s the valid range for
   position in each, and what does your implementation do if a caller passes a position outside
   it?

    `addAnywhere` must check whether `CAPACITY` has been reached before operating, while 
    `deleteAnywhere` must check whether the list is already empty. The former will result in an 
    overflow error and the latter in an underflow error.

4. In LinkedList::concat, why did you need to walk to the end of the list first, when addFront
   and deleteFront never needed to? What would change about concat’s performance if
   LinkedList still tracked a tail pointer, and what would you have to keep updated elsewhere
   if you added one back?

    `concat` needs to traverse to the end in order to append the other list there. `addFront` and 
    `deleteFront` operate at the head of the list and only need that pointer. With a tail pointer, 
    we could skip the traversal step, but we would also need to traverse to the end of the 
    concatenated list to find and assign the new tail.

5. Pick either addAnywhere or deleteAnywhere in ArrayList and explain, in your own words, what
   has to shift and in which direction, and why shifting in the wrong direction would overwrite
   data you still need.

    Using `addAnywhere`, every element following the new one has to be shifted up to 
    the right to make room. If we accidentally shift them left, they will overwrite the value 
    before and the new value would be assigned on top of another existing element.

6. Point to the exact line in your main.cpp where a Reverse card actually changes the direction of
   play, and explain what would visibly break in the game if that call were missing.

    Play is reversed at line 42. If this wasn't called, then a different player would have been 
    removed from play afterwards.