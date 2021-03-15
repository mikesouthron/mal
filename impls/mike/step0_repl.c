#include <stdio.h>

char* read(char* p) {
  return p;
}

char* eval(char* p) {
  return p;
}

char* print(char* p) {
  return p;
}

char* rep(char* p) {
  char* r = read(p);
  char* e = eval(r);
  return print(e);
}

int main() {
  while (true) {
    puts("user>");
    //readline
    //pass line to rep
    //display result
  }
  return 0;
}
