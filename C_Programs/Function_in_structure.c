#include <stdio.h>
#include <stdbool.h>

struct MyStruct {
  int data;
//   void (*myFunction)(struct MyStruct*);
  bool (*IsCutted)(struct MyStruct*, int ix, int nCutted, int* pCutted);                  //cannot use static inside structure
//   int (*CanCut)(struct MyStruct*,int n1, int*p1);   //complex<double>& p2);
};


bool IsCutted(struct MyStruct* obj,int ix, int nCutted, int* pCutted)
{
    if (pCutted == NULL)
    {
      return false;
    }

    for (int j = 0; j < nCutted; j++)
    {
        // printf("value of ncutted %d\n",nCutted);
      if (pCutted[j] == ix)
      {
        return true;
      }
    }
}
// int CanCut(struct MtStruct* obj,int n1, int*p1); //complex<double>& p2);

// void myFunctionImpl(struct MyStruct* obj) {
//   // Code for the function
//   // You can access the structure's data using obj->data
//   printf("Data: %d\n", obj->data);
// }

int main() {
  struct MyStruct obj;
  obj.data = 2;
//   obj.myFunction = myFunctionImpl;

  // Call the function on the structure object
//   obj.myFunction(&obj);
    int cutted[] = {1, 3, 5};  // Example array of cutted values
    int nCutted = sizeof(cutted) / sizeof(cutted[0]);  // Calculate the size of the array
    // printf("value : %d\n",obj.IsCutted(&obj,3,4,(int*)2));
     bool isCutted = IsCutted(&obj, 3, nCutted, cutted);
    printf("Is 3 cutted? %s\n", isCutted ? "Yes" : "No");

  return 0;
}

