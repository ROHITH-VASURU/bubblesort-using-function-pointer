#include<stdio.h>
#define SIZE 10

void bubblesort(int [], int (*compare)(int ,int) );
int ascending(int ,int);
int descending(int, int);

int main(void)
{
  int array[SIZE] = {7,5,9,15,2,25,8,1,17,12};

  puts("Enter 1 for ascending oredre AND 2 for descending order");
  int order;
  scanf("%d", &order);

  puts("Array in original oredr is");
  for(size_t i=0; i < SIZE; i++)
  {
    printf("%d  ", array[i]);
  }

  if(order == 1)
  {
    puts("\nArray in assending order is : ");
    bubblesort(array, ascending);
  }
  if(order == 2)
  {
    puts("\nArray in decending order is : ");
    bubblesort(array, descending);
  }
  for(size_t i=0; i < SIZE; i++)
  {
    printf("%d  ", array[i]);
  }
  puts("");
}

void bubblesort(int *array, int (*compare)(int a, int b))
{
  void swap(int *, int *);

  for(size_t i=1; i < SIZE; i++)
  {
    for(size_t j=0; j < SIZE-1; j++)
    {
      if((*compare)(array[j], array[j+1]))
      {
        swap(&array[j], &array[j+1]);
      }
    }
  }
}

void swap(int *element1ptr, int *element2ptr)
{
  int hold = *element1ptr;
  *element1ptr = *element2ptr;
  *element2ptr = hold;
}

int ascending(int x, int y)
{
  return y < x;
}
int descending(int x, int y)
{
  return y > x;
}
