#ifndef _TestDefaultFormatter_h_
#define _TestDefaultFormatter_h_
//$ class TestDefaultFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultFormatter;
		}
	}
}

class $export TestDefaultFormatter : public ::java::lang::Object {
	$class(TestDefaultFormatter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestDefaultFormatter();
	void init$();
	static void main($StringArray* args);
	static void testDefaultFormatter();
	static void testDefaultFormatter(::javax::swing::text::DefaultFormatter* formatter);
};

#endif // _TestDefaultFormatter_h_