//
// Created by 29024 on 2021/5/10.
//

void merge(int A[], int low, int mid, int high)
{
  int k, begin1, begin2, end1, end2;
  begin1 = low;
  end1 = mid;
  begin2 = mid + 1;
  end2 = high;
  int *temp = (int *)malloc(sizeof(int) * (high - low + 1));
  for (k = 0; begin1 <= end1 && begin2 <= end2; k++)
  {
    if (A[begin1] <= A[begin2])
      temp[k] = A[begin1++];
    else
      temp[k] = A[begin2++];
  }
  if (begin1 <= end1) // ��ʣ
    memcpy(temp + k, A + begin1, (end1 - begin1 + 1) * sizeof(int));
  else //��ʣ
    memcpy(temp + k, A + begin2, (end2 - begin2 + 1) * sizeof(int));
  memcpy(A + low, temp, (high - low + 1) * sizeof(int)); //������Ƶ�ԭ����
  free(temp);                                            //�ͷſռ�
}

void mergeSort(int A[], int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;
    mergeSort(A, low, mid);
    mergeSort(A, mid + 1, high);
    merge(A, low, mid, high);
  }
}
