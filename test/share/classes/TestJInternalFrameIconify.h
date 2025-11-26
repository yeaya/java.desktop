#ifndef _TestJInternalFrameIconify_h_
#define _TestJInternalFrameIconify_h_
//$ class TestJInternalFrameIconify
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
		class JFrame;
	}
}

class $export TestJInternalFrameIconify : public ::java::lang::Object {
	$class(TestJInternalFrameIconify, 0, ::java::lang::Object)
public:
	TestJInternalFrameIconify();
	void init$();
	static void createUI($String* lookAndFeelString);
	static void executeTest($String* lookAndFeelString);
	static void main($StringArray* args);
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JDesktopPane* desktopPane;
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static $volatile($String*) errorMessage;
};

#endif // _TestJInternalFrameIconify_h_