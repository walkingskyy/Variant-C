// Variant.h library project
// walkingskyy (c) https://github.com/walkingskyy/.
#ifndef VARIANT_H
#define VARIANT_H

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void*)0)
#endif
#endif



enum VariantType {
	VARIANT_NULL,
	VARIANT_INT,
	VARIANT_FLOAT,
	VARIANT_DOUBLE,
	VARIANT_CHAR,
	VARIANT_POINTER
};

struct Variant {
	enum VariantType type;
	union {
		int i;
		char c;
		float f;
		double d;
		void* p;
	};
};

// ---------------------- Setters ----------------------
void variant_setInt(struct Variant* variant, int i) {
	variant->type = VARIANT_INT;
	variant->i = i;
}
void variant_setChar(struct Variant* variant, char c) {
	variant->type = VARIANT_CHAR;
	variant->c = c;
}
void variant_setFloat(struct Variant* variant, float f) {
	variant->type = VARIANT_FLOAT;
	variant->f = f;
}
void variant_setDouble(struct Variant* variant, double d) {
	variant->type = VARIANT_DOUBLE;
	variant->d = d;
}
void variant_setPointer(struct Variant* variant, void* p) {
	variant->type = VARIANT_POINTER;
	variant->p = p;
}

// ---------------------- Is ----------------------
int variant_isInt(struct Variant variant)		{ return(variant.type == VARIANT_INT); }
int variant_isChar(struct Variant variant)		{ return(variant.type == VARIANT_CHAR); }
int variant_isFloat(struct Variant variant)		{ return(variant.type == VARIANT_FLOAT); }
int variant_isDouble(struct Variant variant)	{ return(variant.type == VARIANT_DOUBLE); }
int variant_isPointer(struct Variant variant)	{ return(variant.type == VARIANT_POINTER); }

// ---------------------- Getters ----------------------
int		variant_getInt(struct Variant variant)		{ return(variant_isInt(variant) ? variant.i : 0); }
char	variant_getChar(struct Variant variant)		{ return(variant_isChar(variant) ? variant.c : 0); }
float	variant_getFloat(struct Variant variant)	{ return(variant_isFloat(variant) ? variant.f : 0); }
double	variant_getDouble(struct Variant variant)	{ return(variant_isDouble(variant) ? variant.d : 0); }
void*	variant_getPointer(struct Variant variant)	{ return(variant_isPointer(variant) ? variant.p : NULL); }
#endif // VARIANT_H