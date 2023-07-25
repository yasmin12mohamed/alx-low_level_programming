#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0){
printf(n, "is positive");
}elseif(n=0){
printf(n, "zero");
}else(n<0){
printf(n, "is negative");
}
return (0);
}
