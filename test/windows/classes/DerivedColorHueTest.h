#ifndef _DerivedColorHueTest_h_
#define _DerivedColorHueTest_h_
//$ class DerivedColorHueTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
	}
}

class $export DerivedColorHueTest : public ::java::lang::Object {
	$class(DerivedColorHueTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DerivedColorHueTest();
	void init$();
	static $floats* hsb(::java::awt::Color* c);
	static $String* hsbString(::java::awt::Color* c);
	static void main($StringArray* args);
};

#endif // _DerivedColorHueTest_h_