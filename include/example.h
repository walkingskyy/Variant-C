// Variant.h library project
// walkingskyy (c) https://github.com/walkingskyy/.
#ifndef EXAMPLE_H
#define EXAMPLE_H
#include<stdio.h>
#include"variant.h"

// helper
static char* getStringFromType(enum VariantType type) {
	switch (type) {
	case VARIANT_INT:		return "int";
	case VARIANT_CHAR:		return "char";
	case VARIANT_FLOAT:		return "float";
	case VARIANT_DOUBLE:	return "double";
	case VARIANT_POINTER:	return "pointer";
	case VARIANT_NULL:		return "null";
	}
}

void variant_example() {

	printf("		variant array: \n");
	struct Variant variant_array[5];

	// int array
	printf("variant<int>array:\n");
	for (int i = 0; i < 5; i++) variant_setInt(&variant_array[i], i);
	for (int i = 0; i < 5; i++) printf("%d ", variant_getInt(variant_array[i]));
	printf("\n\n");


	// char array
	printf("variant<char>array:\n");
	for (int i = 0; i < 5; i++) variant_setChar(&variant_array[i], 'A' + i);
	for (int i = 0; i < 5; i++) printf("%c ", variant_getChar(variant_array[i]));
	printf("\n\n");


	// float array
	printf("variant<float>array:\n");
	for (int i = 0; i < 5; i++) variant_setFloat(&variant_array[i], i+0.5);
	for (int i = 0; i < 5; i++) printf("%f ", variant_getFloat(variant_array[i]));
	printf("\n\n");


	// checking
	printf("		variant type checking: \n");
	struct Variant variant_check;

	variant_setInt(&variant_check, 1);
	printf("1) current variant type = %s\n",			getStringFromType(variant_check.type));
	printf("variant_isInt(variant_check)     = %d\n",	variant_isInt(variant_check));
	printf("variant_isChar(variant_check)    = %d\n",	variant_isChar(variant_check));
	printf("variant_isFloat(variant_check)   = %d\n",	variant_isFloat(variant_check));
	printf("variant_isDouble(variant_check)  = %d\n",	variant_isDouble(variant_check));
	printf("variant_isPointer(variant_check) = %d\n",	variant_isPointer(variant_check));
	printf("\n\n");

	variant_setChar(&variant_check, 'A');
	printf("2) current variant type = %s\n",			getStringFromType(variant_check.type));
	printf("variant_isInt(variant_check)     = %d\n",	variant_isInt(variant_check));
	printf("variant_isChar(variant_check)    = %d\n",	variant_isChar(variant_check));
	printf("variant_isFloat(variant_check)   = %d\n",	variant_isFloat(variant_check));
	printf("variant_isDouble(variant_check)  = %d\n",	variant_isDouble(variant_check));
	printf("variant_isPointer(variant_check) = %d\n",	variant_isPointer(variant_check));
}
#endif // EXAMPLE_H