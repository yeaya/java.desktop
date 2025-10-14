#ifndef _bug7031551_h_
#define _bug7031551_h_
//$ class bug7031551
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_ELEMENT1")
#undef TEST_ELEMENT1
#pragma push_macro("TEST_ELEMENT2")
#undef TEST_ELEMENT2
#pragma push_macro("TEST_ELEMENT3")
#undef TEST_ELEMENT3

class $export bug7031551 : public ::java::lang::Object {
	$class(bug7031551, 0, ::java::lang::Object)
public:
	bug7031551();
	void init$();
	static void assertEquals(Object$* expectedObject, Object$* actualObject);
	static void main($StringArray* args);
	static void testGenericSignatures();
	static void testRawSignatures();
	static $String* TEST_ELEMENT1;
	static $String* TEST_ELEMENT2;
	static $String* TEST_ELEMENT3;
};

#pragma pop_macro("TEST_ELEMENT1")
#pragma pop_macro("TEST_ELEMENT2")
#pragma pop_macro("TEST_ELEMENT3")

#endif // _bug7031551_h_