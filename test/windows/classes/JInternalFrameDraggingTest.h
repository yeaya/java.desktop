#ifndef _JInternalFrameDraggingTest_h_
#define _JInternalFrameDraggingTest_h_
//$ class JInternalFrameDraggingTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKGROUND_COLOR")
#undef BACKGROUND_COLOR
#pragma push_macro("FRAME_SIZE")
#undef FRAME_SIZE
#pragma push_macro("N")
#undef N

namespace java {
	namespace awt {
		class Color;
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
		class JFrame;
		class JInternalFrame;
	}
}

class $export JInternalFrameDraggingTest : public ::java::lang::Object {
	$class(JInternalFrameDraggingTest, 0, ::java::lang::Object)
public:
	JInternalFrameDraggingTest();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Point* getDesktopPaneLocation();
	static ::java::awt::Point* getInternalFrameLocation();
	static void lambda$getDesktopPaneLocation$2($Array<::java::awt::Point>* points);
	static void lambda$getInternalFrameLocation$1($Array<::java::awt::Point>* points);
	static void lambda$main$0();
	static void main($StringArray* args);
	static void moveFrame(::java::awt::Robot* robot, int32_t w, int32_t h, int32_t N);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JDesktopPane* desktopPane;
	static ::javax::swing::JInternalFrame* internalFrame;
	static int32_t FRAME_SIZE;
	static ::java::awt::Color* BACKGROUND_COLOR;
};

#pragma pop_macro("BACKGROUND_COLOR")
#pragma pop_macro("FRAME_SIZE")
#pragma pop_macro("N")

#endif // _JInternalFrameDraggingTest_h_