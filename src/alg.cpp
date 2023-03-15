// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int lefbord = 0;
  int rigbord = size - 1;
  int schet = 0;
  int sered = 0;
  while (rigbord >= lefbord) {
    sered = (rigbord + lefbord) / 2;
    if (arr[sered] == value) {
      schet++;
      int ser = sered - 1;
      while (arr[sered + 1] == value) {
        schet++;
        ser++;
      }
      while (arr[ser - 1] == value) {
        schet++;
        ser--;
      }
      return sered;
    } else if (value < arr[sered]) {
      right = sered - 1;
    } else {
      left = sered + 1
    }
  }
  return schet;
}
