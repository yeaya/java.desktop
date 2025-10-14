#ifndef _bug6823603_h_
#define _bug6823603_h_
//$ class bug6823603
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_ELEMENT")
#undef TEST_ELEMENT

class $export bug6823603 : public ::java::lang::Object {
	$class(bug6823603, 0, ::java::lang::Object)
public:
	bug6823603();
	void init$();
	static void assertEquals($ObjectArray* expectedArray, $ObjectArray* actualArray);
	static void main($StringArray* args);
	static void testGenericSignatures();
	static void testGetSelectedValuesList();
	static void testRawSignatures();
	static $String* TEST_ELEMENT;
};

#pragma pop_macro("TEST_ELEMENT")

#endif // _bug6823603_h_