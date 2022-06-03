//
// Created by 29024 on 2021/5/10.
//

void bubbleSort(int R[], int n) {
  int i, j, flag;
  int temp;
  for (i = n - 1; i >= 1; --i) {
    flag = 0; // 标记本趟排序是否发生了交换
    for (j = 1; j <= i; ++j) {
      temp = R[j];
      R[j] = R[j - 1];
      R[j - 1] = temp;
      flag = 1;
    }
    if (flag == 0) {
      return;
    }
  }
}