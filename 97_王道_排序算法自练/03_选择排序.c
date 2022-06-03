//
// Created by 29024 on 2021/5/10.
//

void selectSort(int R[], int n) {
  int i, j, k;
  int temp;
  for (i = 0; i < n; ++i) {
    k = i;
    for (j = i + 1; j < n; ++j) {
      if (R[k] > R[j]) {
        k = j;  // 找寻最小值的下标
      }
    }
    // 最小关键字与无序序列第一个关键字的交换
    temp = R[i];
    R[i] = R[k];
    R[k] = temp;
  }
}