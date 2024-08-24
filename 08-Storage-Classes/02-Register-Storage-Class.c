#include <stdio.h>

int main(){
   /*
      storage - CPU register.
      default value - garbage value.
      scope - local to the block in which the variable is defiend.
      life - till the control remains within the block in which the varible is define.
   */
   register int i;
   /* we can't say for sure that it's value would alwayes stored in CPU register, because the number of CPU register are limited, they maybe busy
   doing some other task. in such an event "i" works as auro storage class */
   for(i = 1; i <= 10; i++){
      printf("%d\n",i);
   }
}