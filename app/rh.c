#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include "common.h"
#include "text/text.h"

static void remove_first_line(int index, char *contents, int cursor, void *data);

static int flag = 1;

void rh (text txt){

    
    flag = 1;
    
    process_forward(txt, remove_first_line, txt);

}

static int empty(char *str) {
    int len = strlen(str);
    len = strlen(str);
	if (len == 0) {
	    return 1;
	}
  
    return 0;
}

static void remove_first_line(int index, char *contents, int cursor, void *data)
{
    assert(contents != NULL);

    UNUSED (index);

    UNUSED (cursor);
    
    if (empty(contents) == 1){
    flag = 0;
    }
    if (flag == 1){

	delete_line(data, 1);
    }

    flag = 0;
}
