int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Output: 20 
  free(ptr); // Undefined behavior.  `ptr` was not allocated using malloc(), calloc(), etc.
  return 0; 
}