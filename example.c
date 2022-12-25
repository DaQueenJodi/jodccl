#include <stdbool.h>
#define JODCCL_IMPLEMENTATION
#include "jodccl.h"

#include <stdio.h>


int main(int argc, char **argv) {

	(void) argc;
	
	int welp;
	bool foo;
	float bar;
	jcl_add_bool(&foo, "foo", "f", "fowo", false);
	jcl_add_int(&welp, "welp", "w", "wowo", true);
	jcl_add_float(&bar, "bar", "b", "uwu", false);

	JCLError err = jcl_parse_args(argv);
	if (err.err != JCL_PARSE_OK) {
		jcl_print_error(err);
		exit(1);
	}

	printf("bool: %d \n", foo);
	printf("int: %d \n", welp);
	printf("float: %f \n", bar);
	
	return 0;
}
