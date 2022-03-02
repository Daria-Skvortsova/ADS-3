// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int otvet = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      otvet+=1;
    }
  }
  if (otvet == 0) {
    return 0;
  } else {
    return otvet;
    }
}
