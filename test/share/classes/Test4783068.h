#ifndef _Test4783068_h_
#define _Test4783068_h_
//$ class Test4783068
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_COLOR")
#undef TEST_COLOR

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

class $export Test4783068 : public ::java::lang::Object {
	$class(Test4783068, 0, ::java::lang::Object)
public:
	Test4783068();
	void init$();
	static void main($StringArray* args);
	virtual void test();
	virtual void test(::javax::swing::JComponent* c);
	static ::java::awt::Color* TEST_COLOR;
	static $String* html;
};

#pragma pop_macro("TEST_COLOR")

#endif // _Test4783068_h_