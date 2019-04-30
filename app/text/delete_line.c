/**
 * delete_line.c -- функции для удаления строк
 *
 * Copyright (c) 2018, Hristoforov Egor <hristofo@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include "_text.h"

void delete_line(text txt, int line_num) {
  node *p = txt->begin;
  for (int i = 1; i < line_num; i++) {
    p = p->next;
  }
  if (line_num == 1) {
    p = p->next;
    p->previous = NULL;
    txt->begin = p;
  } else if (line_num == (int)txt->length) {
    p = p->previous;
    p->next = NULL;
    txt->end = p;
  } else {
    p->previous->next = p->next;
    p->next->previous = p->previous;
  }
  txt->length--;
}
