In file included from main.c:1:
main.h:1:15: error: extra tokens at end of #ifndef directive [-Werror]
    1 | #ifndef main_h:
      |               ^
main.h:1: error: unterminated #ifndef
    1 | #ifndef main_h:
      | 
main.c: In function ‘main’:
main.c:10:2: error: implicit declaration of function ‘print_alphabet’ [-Werror=implicit-function-declaration]
   10 |  print_alphabet();
      |  ^~~~~~~~~~~~~~
cc1: all warnings being treated as errors
