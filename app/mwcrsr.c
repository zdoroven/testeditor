#define NULL 0
#include "common.h"

void change_cursor_position(text txt, int new_line, int new_position);

void mwcrsr(text txt, int line, int cursor) {
  change_cursor_position(txt, line, cursor);
}

