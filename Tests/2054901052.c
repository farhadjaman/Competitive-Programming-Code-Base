#include <stdio.h>

int tree_array_size;
int heap_size = 0;
const int INF = 100000;

void swap( char *a, char *b ) {
  char t;
  t = *a;
  *a = *b;
  *b = t;
}


int get_right_child(char A[], int index) {
  if((((2*index)+1) < tree_array_size) && (index >= 1))
    return (2*index)+1;
  return -1;
}

int get_left_child(char A[], int index) {
    if(((2*index) < tree_array_size) && (index >= 1))
        return 2*index;
    return -1;
}

int get_parent(char A[], int index) {
  if ((index > 1) && (index < tree_array_size)) {
    return index/2;
  }
  return -1;
}

void min_heapify(char A[], int index) {
  int left_child_index = get_left_child(A, index);
  int right_child_index = get_right_child(A, index);

  int smallest = index;

  if ((left_child_index <= heap_size) && (left_child_index>0)) {
    if (A[left_child_index] < A[smallest]) {
      smallest = left_child_index;
    }
  }

  if ((right_child_index <= heap_size && (right_child_index>0))) {
    if (A[right_child_index] < A[smallest]) {
      smallest = right_child_index;
    }
  }

  if (smallest != index) {
    swap(&A[index], &A[smallest]);
    min_heapify(A, smallest);
  }
}

void build_min_heap(char A[]) {
  int i;
  for(i=heap_size/2; i>=1; i--) {
    min_heapify(A, i);
  }
}

int minimum(char A[]) {
  return A[1];
}

int extract_min(char A[]) {
  int minm = A[1];
  A[1] = A[heap_size];
  heap_size--;
  min_heapify(A, 1);
  return minm;
}

void decrease_key(char A[], int index, char key) {
  A[index] = key;
  while((index>1) && (A[get_parent(A, index)] > A[index])) {
    swap(&A[index], &A[get_parent(A, index)]);
    index = get_parent(A, index);
  }
}

void increase_key(char A[], int index, char key) {
  A[index] = key;
  min_heapify(A, index);
}

void insert(char A[], char key) {
  heap_size++;
  A[heap_size] = INF;
  decrease_key(A, heap_size, key);
}

void print_heap(char A[]) {
  int i;
  for(i=1; i<=heap_size; i++) {
    printf("%c",A[i]);
  }
  printf("\n");
}

int main() {

  printf("Input the size of the string\n");
  scanf("%d",&tree_array_size);
  tree_array_size++;
  char A[tree_array_size];
  char c;
  for(int i=0;i<tree_array_size+1;i++)
  {
      scanf("%c",&c);
      insert(A, c);

  }
for(int i=0;i<tree_array_size;i++)
  {
      printf("%c", extract_min(A));
  }
}