
/*A sequence S of 27 integers is called perfect if it contains each value 𝑛∈[1..9] exactly three 
times; moreover, for each triplet of the same value 𝑛, the elements are positioned so that between
every pair of successive occurrences of 𝑛 there are exactly 𝑛 numbers. Examples:
• (1,9,1,2,1,8,2,4,6,2,7,9,4,5,8,6,3,4,7,5,3,9,6,8,3,5,7) is a perfect sequence because there are 
three 1s, and between each pair of successive 1s there is exactly one value different from 1; there
are three 2s, and between each pair of successive 2s there are exactly two values different from 2; ...
• (1,9,1,2,1,8,2,4,6,2,4,9,7,5,8,6,3,4,7,5,3,9,6,8,3,5,7) is not a perfect sequence because, for 
example, two successive 4s are not separated by exactly four values.
• (1,9,1,2,1,8,2,4,6,1,7,9,4,5,8,6,3,4,7,5,3,9,6,8,3,5,7) is not a perfect sequence because, for 
example, there are four occurrences of the value 1.
Write a subroutine verificaSequenza that takes as parameter an array of 27 integers (assume this
is guaranteed) and returns 1 if the array contains a perfect sequence and 0 otherwise.*/


#include <stdio.h>
#define DIM 27
#define NUM 3
#define MIN 1
#define MAX 9

int verificaSequenza1(int v[]) {
 int i, j, ok, count;
 for(i=MIN, ok=1; i<=MAX && ok; i++){
 for(j=0; v[j]!=i && j<DIM; j++);
 for(count=1, j+=(i+1); count<NUM && j<DIM && v[j]==i;
 j+=(i+1), count++);
 if(count!=3)
 ok=0;
 }
 return ok;
}