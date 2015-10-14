# bitwise-operations
Illustrative example of the operators which enable bitwise manipulations. The program is written in **C++** in order to easily display bits thanks to STL ``std::bitset``.

#### Installation
No makefile included, just compile and run with your favorite **C++** compiler.

#### Sample Output
```
---- BITWISE MANIPULATION ----
Byte to be bitwise manipulated
byte       -> 10101010

Bitmask to switch ON bit 3
mask on       -> 00000100
Use bitwise OR | to switch on
byte | on     -> 10101110

Bitmask to switch OFF bit 2
mask off      -> 11111101
Use bitwise AND & to switch off
byte & off    -> 10101000

Use bitwise SHIFT << to left shift
byte << shift -> 10100000

Use bitwise SHIFT >> to right shift
byte >> shift -> 00001010
```

#### Notes
It is highly recomended to use ``unsigned char``, and ``unsigned`` objects in the general case, in order to avoid machine- and compiler-specific behaviors.
