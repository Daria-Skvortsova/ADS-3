// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int otvet, ceredina;
  int granica_1 = 0;
  int granica_2 = size-1;
  while (granica_1 <= granica_2) {
    ceredina = granica_1 + ((granica_2 - granica_1)/2);
    otvet = 0;
    if (arr[ceredina] == value) {
      for (int i = 0; arr[ceredina + i] == value; i++) {
        otvet++;
        if ((ceredina + i) == granica_2) {
          break;
        }
      }
      for (int i = 1; arr[ceredina - i] == value; i++) {
        otvet++;
        if (ceredina - i == 0) {
          break;
        }
      }
          break;
        } else if (arr[ceredina] > value) {
      granica_2 = ceredina - 1;
      } else {
        granica_1 = ceredina + 1;
        }
  }
  if (otvet == 0) {
    return 0;
  } else {
    return otvet;
    }
}
