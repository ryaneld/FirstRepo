int sum(int count, int *arr);
int main() {
  static int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int count = 10;
  int result;
  result = sum(count, arr);
  printf("Array sum: %i", result);
}
int sum(int count, int *arr){
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum = sum + arr[i];
  }
  return sum;
}
