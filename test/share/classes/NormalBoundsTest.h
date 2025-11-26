#ifndef _NormalBoundsTest_h_
#define _NormalBoundsTest_h_
//$ class NormalBoundsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export NormalBoundsTest : public ::java::lang::Object {
	$class(NormalBoundsTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NormalBoundsTest();
	void init$();
	static void createUI($String* lookAndFeelString);
	static void drag(::java::awt::Robot* r, ::java::awt::Point* startPt, ::java::awt::Point* endPt, int32_t button);
	static void executeTest(::java::awt::Robot* robot);
	static void main($StringArray* args);
	static void mouseMove(::java::awt::Robot* robot, ::java::awt::Point* startPt, ::java::awt::Point* endPt);
	static int32_t signWOZero(int32_t i);
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* mainFrame;
	static ::javax::swing::JInternalFrame* internalFrame;
	static ::java::awt::Rectangle* bounds;
};

#endif // _NormalBoundsTest_h_