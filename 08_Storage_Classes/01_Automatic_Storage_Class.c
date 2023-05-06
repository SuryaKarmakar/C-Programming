#include <stdio.h>

int mian (){
	/*
		storage - memory.
		default value - an unpredictable garbage value.
		scope - local to the block in which the variable is defiend.
		life - till the control remains within the block in which the varible is define.
	*/
	auto int a;
	printf("the garbage value of a is : %d\n",a);

	auto int i = 1;
	{
		auto int i = 2;
		{
			auto int i = 3;
			printf("%d\n",i);
		}
		printf("%d\n",i);
	}
	printf("%d\n",i);

	return 0;
}