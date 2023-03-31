#include <stdio.h>

union my_union {
  int integer;
  float floating_point;
};

int main() {
  union my_union my_union_var;
  
  my_union_var.integer = 42;
  my_union_var.floating_point = 3.14;

  printf("Value of integer: %d\n", my_union_var.integer);
  printf("Value of floating point: %f\n", my_union_var.floating_point);

  return 0;
}
