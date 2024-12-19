#include<stdio.h>

int main() {
     char* word[] =  {"flower", "flow", "flight"};

     printf("%s", word + 1);

     return 0;

}



// Contoh:
// Input: array_str = ["flower", "flow", "flight"]
// Output: "fl"

// Reference:
// https://en.wikipedia.org/wiki/LCP_array