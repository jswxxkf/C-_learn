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
        k = j;  // ��Ѱ��Сֵ���±�
      }
    }
    // ��С�ؼ������������е�һ���ؼ��ֵĽ���
    temp = R[i];
    R[i] = R[k];
    R[k] = temp;
  }
}