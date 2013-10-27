#include <stdio.h>
#include "brilliant.h"
//https://brilliant.org/mathematics-problem/million-monster-movies/?group=hem48H2Srw7Z

double numMovies(int groupSize) {
  double result = 0;
  if (groupSize >= 2) {
      //calculate sumatory of combinations(n, k) from k=2 to k=N
      int n = groupSize;
      int sumCombinations=0;
      for (int i=2; i <= groupSize; i++) {
        int combs = combinations(groupSize,i);
	result += combs;
      }
  }
  return result; //yes, I like using Dijkstra's SESE (Single Entry, Single Exit style)
}
/**
 * A movie company wants to make movies featuring various monsters. 
 * They want each movie to have at least 2 different monsters and no two movies to have the exact same set of monsters. 
 * 
 * What is the minimum number of monsters the company must use in order to make a million movies?
*/
int main(int nargs, char** args) {


  int movies = 0;
  int monsters=0;
  while (movies < 1000000) {
     monsters++;
     movies = numMovies(monsters);
     printf("%d Monsters => %.0f Movies.\n",monsters,numMovies(monsters));
  }
}
