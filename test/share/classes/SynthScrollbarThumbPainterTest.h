#ifndef _SynthScrollbarThumbPainterTest_h_
#define _SynthScrollbarThumbPainterTest_h_
//$ class SynthScrollbarThumbPainterTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class MyFrame;
namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}

class $export SynthScrollbarThumbPainterTest : public ::java::lang::Object {
	$class(SynthScrollbarThumbPainterTest, 0, ::java::lang::Object)
public:
	SynthScrollbarThumbPainterTest();
	void init$();
	static void constructTestUI($String* lookAndFeelString);
	static void disposeTestUI();
	static void lambda$disposeTestUI$0();
	static void main($StringArray* args);
	static void testScrollBarThumbPainter();
	static ::java::awt::Robot* testRobot;
	static ::java::awt::Point* pos;
	static ::MyFrame* testFrame;
};

#endif // _SynthScrollbarThumbPainterTest_h_