#include <stdio.h>

int main(void)
{

	int w , *pointer_int;
	char x ,*pointer_char;
	float y, *pointer_float;
	char z[6]="Dennis";
	char *pointer_string;

	w = 72;
	x = 'A';
	y = 123.45;

	printf("w: address=%p, content=%i\n",&w, w);
	printf("x: address=%p, content=%c\n",&x, x);
	printf("y: address=%p, content=%f\n",&y, y);
	printf("z: address=%p, content=%s\n\n",&z, z);

	pointer_int = &w;
	pointer_char = &x;
	pointer_float = &y;
	pointer_string = &z[1];

	printf("pointer int: address=%p, content=%p\n",&pointer_int, pointer_int);
	printf("pointer char: address=%p, content=%p\n",&pointer_char, pointer_char);
	printf("pointer float: address=%p, content=%p\n",&pointer_float, pointer_float);
	printf("pointer string: address=%p, content=%p\n\n",&pointer_string, pointer_string);

	printf("content pointer int: %i\n", *pointer_int);
	printf("content pointer char: %c\n", *pointer_char);
	printf("content pointer float: %f\n", *pointer_float);

	return (0);
}
