#include <iostream>
using namespace std;

// Problem Statement:
// Here's a challenge that's a bit more mathematical in nature. Write a program that 
// determines the number of trailing zeros at the end of X! (X factorial), where X 
// is an arbitrary number. For instance, 5! is 120, so it has one trailing zero. 
// (How can you handle extremely values, such as 100!?) The input format should 
// be that the program asks the user to enter a number, minus the !.
// https://www.cprogramming.com/challenges/factorial.html

int numZeros;

int stripAndNumZerosTrailingZeros( int num ) {
  int lastDigit = num % 10;
  int rnum = num / 10;
  while( lastDigit == 0 ) {
    // foud a zero at the end
    numZeros++;
    lastDigit = rnum % 10;
    rnum = rnum / 10;
  }
  return lastDigit;
}

int main() {
  int number;
  std::cout << "Enter Input: ";
  std::cin >> number;
  std::cout << std::endl;
  
  // Initialize numZeros to 0
  numZeros = 0;

  int res = number;
  // Iterate to calculate factorial
  for( int i= ( number - 1 ); i>0; i-- ) {
    res = res * i;
    res = stripAndNumZerosTrailingZeros( res );
  }

  std::cout << "Number of trailing zeros in " << number << "! are " << numZeros << std::endl;

  return 0;
}
