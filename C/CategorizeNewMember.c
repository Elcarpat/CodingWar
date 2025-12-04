#include <stddef.h>

enum membership {OPEN = 1, SENIOR = 2};

void open_or_senior (size_t n, const int members[n][2], enum membership memberships[n])
{
  for( int i = 0; i < n ; i++){
    if (members[n][0] >= 55 && members[n][1] > 7){
      memberships[n] = SENIOR;
    }else {
      memberships[n] = OPEN;
    }
  }
}