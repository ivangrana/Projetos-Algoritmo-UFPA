#include <iostream>
#include "conversor.h"
using namespace std;

char lower_to_upper(char c){
 if (c>= 'a' && c<='z') c = c - 'a' + 'A';
 return c;
}

char upper_to_lower(char c){
 if (c>= 'A' && c<='Z') c = c + ('a' - 'A');
 return c;
}

int upper(char c) {
if ((c >= 'A') && (c <= 'Z')) return 1;
else return 0;
}
