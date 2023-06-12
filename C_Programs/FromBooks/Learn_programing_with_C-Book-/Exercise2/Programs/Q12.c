/*You are required to print the values of the int variables b, h, and n. 
  Write a statement that prints 
  (a) b with its rightmost digit in column 10, 
  (b) h with its rightmost digit in column 20, 
  (c) n with its rightmost digit in column 30.
*/

void main(){
    int b=14,h=20,n=12;
    printf("%-10d%-20d%-30d",b,h,n);
}