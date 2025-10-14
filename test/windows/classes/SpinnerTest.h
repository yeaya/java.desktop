#ifndef _SpinnerTest_h_
#define _SpinnerTest_h_
//$ class SpinnerTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JSpinner;
	}
}

class $export SpinnerTest : public ::java::lang::Object {
	$class(SpinnerTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpinnerTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JSpinner* spinner;
};

#endif // _SpinnerTest_h_