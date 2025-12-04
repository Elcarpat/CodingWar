#include <stdbool.h>
#include <string.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) {
    if (strlen(walk) != 10) return false;
    
    int x = 0, y = 0;
    for (unsigned int i = 0; i < strlen(walk); i++){
      switch(walk[i]){
          case 'n':
            x++;
            break;
          case 's':
            x--;
            break;
          case 'w':
            y++;
            break;
          case 'e':
            y--;
            break;
      }
    }
    return x == 0 && y == 0;
}