#ifndef _bug7142955_h_
#define _bug7142955_h_
//$ class bug7142955
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_COLOR")
#undef TEST_COLOR

namespace java {
	namespace awt {
		class Color;
	}
}

class $export bug7142955 : public ::java::lang::Object {
	$class(bug7142955, 0, ::java::lang::Object)
public:
	bug7142955();
	void init$();
	static void main($StringArray* args);
	static ::java::awt::Color* TEST_COLOR;
};

#pragma pop_macro("TEST_COLOR")

#endif // _bug7142955_h_