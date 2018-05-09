/*
 * STDTypes.h
 *
 *  Created on: May 8, 2018
 *      Author: jaime
 */

#ifndef STDTYPES_H_
#define STDTYPES_H_


// Unsigned-Integer Values
typedef unsigned long long		UINT64;
typedef unsigned int			UINT32;
typedef unsigned short			UINT16;
typedef unsigned char			UINT8;

// Pointer-to-Unsigned-Integer Values
typedef unsigned long long *	PUINT64;
typedef unsigned int *			PUINT32;
typedef unsigned short *		PUINT16;
typedef unsigned char *			PUINT8;


#ifndef DWORD
typedef unsigned long       DWORD;
#endif // DWORD

// Signed-Integer Values
#ifndef INT16
typedef short				INT16;
#endif // INT16

#ifndef INT32
typedef int					INT32;
#endif // INT32

#ifndef INT64
typedef long long    		INT64;
#endif // INT64

#ifndef LONG
typedef long                LONG;
#endif // LONG

#ifndef LONGLONG
typedef long long			LONGLONG;
#endif

// Pointer-to-Signed-Integers
#ifndef PINT16
typedef short *				PINT16;
#endif // INT16

#ifndef PINT32
typedef int	*				PINT32;
#endif // INT32

#ifndef PINT64
typedef long long *    		PINT64;
#endif // INT64

#ifndef PLONG
typedef long *               PLONG;
#endif // LONG


#ifndef SIZE_T
//#define SIZE_T(arg)       ((size_t)(arg))
#define SIZE_T              size_t
//#typedef size_t 			SIZE_T;
#endif // SIZE_T

#ifndef boolean_t
typedef unsigned char       BOOLEAN;
#endif // boolean_t

// Signed-Integer Values
#ifndef INT8
typedef char				INT8;
#endif // INT8

// Pointer-to-Signed-Integers
#ifndef PINT8
typedef char *				PINT8;
#endif // INT8

#ifndef CHAR
typedef char				CHAR;
#endif

#ifndef PCHAR
typedef char *				PCHAR;
#endif // PCHAR

#ifndef PUCHAR
typedef unsigned char *		PUCHAR;
#endif // PUCHAR

#ifndef HANDLE
typedef int					HANDLE;
#endif

#ifndef FLOAT
typedef float				FLOAT;
#endif


#endif /* STDTYPES_H_ */
