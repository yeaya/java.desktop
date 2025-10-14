#ifndef _HtmlFontSizeTest_h_
#define _HtmlFontSizeTest_h_
//$ class HtmlFontSizeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

class $export HtmlFontSizeTest : public ::java::lang::Object {
	$class(HtmlFontSizeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HtmlFontSizeTest();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::java::awt::Dimension* test(bool w3ccheck);
	static $volatile(::java::awt::Dimension*) w3cFrameSize;
	static $volatile(::java::awt::Dimension*) stdFrameSize;
};

#endif // _HtmlFontSizeTest_h_