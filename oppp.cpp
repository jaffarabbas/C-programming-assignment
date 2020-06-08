#include<stdio.h>

#include<iostream>

#include<conio.h>

void Union(int setA[6], int setB[6], int c, int d);
void Intersection(int setA[6], int setB[6], int c, int d);
void difference(int setA[6], int setB[6], int c, int d);
void symdiff(int setA[6], int setB[6], int c, int d);

int main() {
  int set1[6], set2[6], size, size2, i, j;
  int ch;

  printf("\nEnter the size first set:\n");
  scanf("%d", & size);
  printf("\nEnter the elements:\n");
  for (i = 0; i < size; i++) {
    scanf(" %d", & set1[i]);
  }
  printf("\nElement of First set:\n\n");
  for (i = 0; i < size; i++) {
    printf("%d\t", set1[i]);
  }
  printf("\nEnter the size second set:\n");
  scanf("%d", & size2);
  printf("\nEnter the elements:\n");
  for (i = 0; i < size2; i++) {
    scanf("%d", & set2[i]);
  }
  printf("\nElement of second set\n");
  for (i = 0; i < size2; i++) {
    printf("%d\t", set2[i]);
  }
//  for (;;) {
//    printf("\n\type 8.Union\ntype 9.Intersection\ntype 7.difference\n type 6.symm diff");
//    printf("\nEnter your choice:\n");
//    scanf("%d", & ch);
//    switch (ch) {
//    case 8:
//      Union(set1[6], set2[6], size, size2);
//      break;
//    case 9:
//      Intersection(set1[6], set2[6], size, size2);
//      break;
//    case 7:
//      difference(set1[6], set2[6], size, size2);
//      break;
//    case 6:
//      symdiff(set1[6], set2[6], size, size2);
//
//    }
Union(set1[6], set2[6], size, size2);
    getch();
  }
}

void Union(int a[6], int b[6], int c, int d) {
  int e[10], i, j, k = 0, flag = 0;
  for (i = 0; i < c; i++) {
    e[k] = a[i];
    k++;
  }
  for (i = 0; i < d; i++) {
    flag = 0;
    for (j = 0; j < c; j++) {
      if (b[i] == e[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      e[k] = b[i];
      k++;
    }
  }
  printf("\nElement of resultant set\n\n");
  for (i = 0; i < k; i++) {
    printf("\t%d", c);
  }
}
void Intersection(int a[6], int b[6], int c, int d) {
  int e[10], i, j, k = 0, flag = 0;
  for (i = 0; i < c; i++) {
    flag = 0;
    for (j = 0; j < d; j++) {
      if (a[i] == b[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      e[k] = a[i];
      k++;
    }
  }
  if (k == 0) {
    printf("\n\nResultant set is null set!\n");
  } else {
    printf("\nElement of resultant set\n");
    for (i = 0; i < k; i++) {
      printf("\t%d", c);
    }
  }
}
void difference(int a[6], int b[6], int c, int d) {
  int e[10], i, j, p, k = 0, flag = 0;
  for (i = 0; i < c; i++) {
    flag = 1;
    for (j = 0; j < d; j++) {
      if (a[i] == b[j]) {
        flag = 0;
        break;
      }
    }
    if (flag == 1) {
      e[k] = a[i];
      k++;
    }
  }
  p = k;
  printf("\nElement of resultant set\n");
  for (k = 0; k < p; k++) {

    printf("\t%d", c);
  }

}
void symdiff(int a[6], int b[6], int c, int d) {
  int i = 0, j = 0;
  while (i < c && j < d) {
    if (a[i] < b[j]) {
      printf("%d", a[i]);
      i++;
    } else if (b[j] < a[i]) {
      printf("%d", b[j]);
      j++;
    } else {
      i++;
      j++;
    }
  }

}
