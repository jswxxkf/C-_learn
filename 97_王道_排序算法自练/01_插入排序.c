//
// Created by 29024 on 2021/5/10.
//

void insertSort(int R[], int n) {
  int i, j;
  int temp;
  for (i = 1; i < n; ++i) {
    temp = R[i];
    j = i - 1;
    while (j >= 0 && temp < R[j]) {  // Ñ­»·É¨Ãè
      R[j + 1] = R[j];
      --j;
    }
    R[j + 1] = temp; // ÕÒÑ°µ½²åÈëÎ»ÖÃ ²åÈë´ýÅÅ¹Ø¼ü×Ö
  }
}