#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

#include "reader.h"

char* read_exp(char* p) {
  return p;
}

char* eval_exp(char* p) {
  return p;
}

char* print_exp(char* p) {
  return p;
}

char* rep(char* p) {
  char* r = read_exp(p);
  char* e = eval_exp(r);
  return print_exp(e);
}

int main() {
  while (1) {
    char* data = readline("user> ");
    add_history(data);
    printf("%s\n", rep(data));
    free(data);
  }
  return 0;
}
