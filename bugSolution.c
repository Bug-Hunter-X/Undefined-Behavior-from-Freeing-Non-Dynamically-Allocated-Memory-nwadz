int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Output: 20
  //free(ptr); // Removed the incorrect free() call. 
  return 0; 
}