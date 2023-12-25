#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;
typedef signed long long sint64;

typedef enum 
{
	FALSE,
	TRUE
} bool_type;

typedef enum 
{
	LOW,
	HIGH
} state_type;

typedef enum 
{
	INPUT,
	OUTPUT
} dir_type;

#endif /* STD_TYPES_H_ */