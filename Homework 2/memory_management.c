//In which memory sections (CODE, STATIC, HEAP, STACK) do the following reside?
#define C 2
const int val = 16;
char arr[] = "foo";
void foo(int arg)
{
   char *str = (char *)malloc(C * val);
   char *ptr = arr;
}

// arg => STACK
// arr => STATIC
// val => CODE
// str => STATIC
// *str => HEAP
// C => CODE