    #include <stdio.h>  
      
    #include <ctype.h>   
    int main()    
    {  
        char ch;   
         
            ch = getchar();   
            putchar(tolower(ch));
            putchar (toupper(ch));
            putchar('\n');   
                 
            return 0;  
    }  
