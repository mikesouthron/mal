#pragma once

typedef struct Reader {
  char** tokens;
  int position;
} Reader;

Reader reader = {};

char* reader_peek() {
  return reader.tokens[reader.position];
}

char* reader_next() {
  char* token = reader_peek();
  reader.position++;
}

