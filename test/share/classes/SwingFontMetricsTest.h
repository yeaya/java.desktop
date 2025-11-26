#ifndef _SwingFontMetricsTest_h_
#define _SwingFontMetricsTest_h_
//$ class SwingFontMetricsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOWER_CASE_TEXT")
#undef LOWER_CASE_TEXT
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("UPPER_CASE_TEXT")
#undef UPPER_CASE_TEXT

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export SwingFontMetricsTest : public ::java::lang::Object {
	$class(SwingFontMetricsTest, 0, ::java::lang::Object)
public:
	SwingFontMetricsTest();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static $String* LOWER_CASE_TEXT;
	static $String* UPPER_CASE_TEXT;
	static $String* TEXT;
	static bool passed;
	static ::java::util::concurrent::CountDownLatch* latch;
	static $Object* aaHint;
};

#pragma pop_macro("LOWER_CASE_TEXT")
#pragma pop_macro("TEXT")
#pragma pop_macro("UPPER_CASE_TEXT")

#endif // _SwingFontMetricsTest_h_