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
      while (ser >= lefbord && arr[ser] == value) {
        schet++;
        ser--;
      }
      ser = sered + 1;
      while (ser <= rigbord && arr[ser] == value) {
        schet++;
        ser++;
      }
      break;
    } else if (value < arr[sered]) {
      rigbord = sered - 1;
    } else {
      lefbord = sered + 1;
    }
  }
  return schet;
}
