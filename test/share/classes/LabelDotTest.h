#ifndef _LabelDotTest_h_
#define _LabelDotTest_h_
//$ class LabelDotTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JLabel;
		class JMenu;
	}
}

class $export LabelDotTest : public ::java::lang::Object {
	$class(LabelDotTest, 0, ::java::lang::Object)
public:
	LabelDotTest();
	void init$();
	static void createUI();
	static void lambda$main$2();
	static void lambda$main$3();
	static void lambda$runTest$0();
	static void lambda$runTest$1(::java::awt::Robot* robot, int32_t i);
	static void main($StringArray* args);
	static void runTest(int32_t iterations);
	static $String* longText;
	static $String* shortText;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JLabel* label;
	static ::javax::swing::JMenu* menu;
	static $volatile(bool) isException;
};

#endif // _LabelDotTest_h_