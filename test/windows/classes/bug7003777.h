#ifndef _bug7003777_h_
#define _bug7003777_h_
//$ class bug7003777
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_STRINGS")
#undef TEST_STRINGS

class $export bug7003777 : public ::java::lang::Object {
	$class(bug7003777, 0, ::java::lang::Object)
public:
	bug7003777();
	void init$();
	static void main($StringArray* args);
	static $StringArray* TEST_STRINGS;
};

#pragma pop_macro("TEST_STRINGS")

#endif // _bug7003777_h_