#include <stdio.h>
#include <stdlib.h>

int main(){
	char* buffer = 0;
	long length;
	FILE * f = fopen("/Users/FunghiApe/Documents/TestCodes/OpenGL/antons_opengl_tutorials_book/00_hello_triangle/vertex_shader.glsl", "rb");
	if(f){
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = (char*)malloc(length);
		if(buffer){
			fread(buffer, 1, length, f);
		}
		fclose(f);
	}
	printf("%s", buffer);
	/* printf("Hello World"); */
	return 0;
}
