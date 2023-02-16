#include <stdio.h>
#include <string.h>

void reverse_recursive(char *str, int start, int end) {
  char temp;
  
  if (start >= end) {
    return;
  }
  
  temp = str[start];
  str[start] = str[end];
  str[end] = temp;
  
  reverse_recursive(str, start + 1, end - 1);
}

int main() {
  char str[] = "Hello, World!";
  
  reverse_recursive(str, 0, strlen(str) - 1);
  
  printf("Reversed string: %s\n", str);
  
  return 0;
}
