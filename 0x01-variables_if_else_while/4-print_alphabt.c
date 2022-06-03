#include <stdio.h>
int main() {
    char c;
    for (c = 'a'; c <= 'z'; ++c){
	     putchar(c);

	    if(c=='q'||c=='e')
		    continue;
       
	    }
    putchar('\n');
    return 0;
}
