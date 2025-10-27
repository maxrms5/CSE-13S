/* Toggling lockers */

#include <stdio.h>

char lockerState(int l, int t) {
  if (t == 1) return 1; 

  char previous_state = lockerState(l, t - 1);

  if (l % t == 0) {
      return !previous_state;

  } else {
      return previous_state;
  }
}

int main(int argc, char* argv[]) {
  int n;
  while(1){
    printf("Enter n (locker number): ");
    scanf("%d", &n);
    if(n < 0){
      break;
    } else if(lockerState(n, n) == 0){
      printf("Closed\n");
    } else{
      printf("Open\n");
    }
  }
  return 0;
}