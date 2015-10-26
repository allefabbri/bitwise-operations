// Copyright 2015, Alessandro Fabbri
// for any question, please mail rommacc@yahoo.it

/************************************************************************
* This program is free software: you can redistribute it and/or modify  *
* it under the terms of the GNU General Public License as published by  *
* the Free Software Foundation, either version 3 of the License, or     *
* (at your option) any later version.                                   *
*                                                                       *
* This program is distributed in the hope that it will be useful,       *
* but WITHOUT ANY WARRANTY; without even the implied warranty of        *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
* GNU General Public License for more details.                          *
*                                                                       *
* You should have received a copy of the GNU General Public License     *
* along with this program.  If not, see <http://www.gnu.org/licenses/>. *
************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bitset> 

using namespace std;

void print_bits(string title, unsigned char a1){
  cout << title << " -> " << bitset<8>(a1) << endl;
}

int main(){
  cout << "---- BITWISE MANIPULATION ----" << endl;
  
  unsigned char byte  = 0xaa;		// To obtain the hex representation of the bitmask 
  unsigned char on    = 0x4;		// you want, you'd probably need an external tool,
  unsigned char off   = 0xfd;		// such as the AWESOME "number displayer" (Bash only) 
  unsigned char shift = 0x4;		// check out www.github.com/MrRomanMaccaruni/BASH-utilities
  
  cout << "Byte to be bitwise manipulated" << endl;
  print_bits("byte         ", byte);
  
  cout << endl << "Bitmask to switch ON bit 3" << endl;
  print_bits("mask on      ", on);
  cout << "Use bitwise OR | to switch on" << endl;
  print_bits("byte | on    ", byte|on);
  
  cout << endl << "Bitmask to switch OFF bit 2" << endl;
  print_bits("mask off     ", off);
  cout << "Use bitwise AND & to switch off" << endl;
  print_bits("byte & off   ", byte&off);

  cout << endl << "Use bitwise SHIFT << to left shift" << endl;
  print_bits("byte << shift", byte << shift);

  cout << endl << "Use bitwise SHIFT >> to right shift" << endl;
  print_bits("byte >> shift", byte >> shift);

  return 0;
}