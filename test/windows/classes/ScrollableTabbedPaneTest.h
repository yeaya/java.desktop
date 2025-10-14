#ifndef _ScrollableTabbedPaneTest_h_
#define _ScrollableTabbedPaneTest_h_
//$ class ScrollableTabbedPaneTest
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
		class JTabbedPane;
	}
}

class $export ScrollableTabbedPaneTest : public ::java::lang::Object {
	$class(ScrollableTabbedPaneTest, 0, ::java::lang::Object)
public:
	ScrollableTabbedPaneTest();
	void init$();
	static void cleanUp();
	static void createLeftUI($String* shortLAF);
	static void createRightUI($String* shortLAF);
	static void createUI($String* shortLAF);
	static void executeCase($String* lookAndFeelString, $String* shortLAF);
	static void main($StringArray* args);
	static void runTestCase($String* shortLAF);
	static void stepsToExecute($String* shortLAF);
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTabbedPane* pane;
	static ::java::awt::Robot* robot;
	static $volatile($String*) errorString;
};

#endif // _ScrollableTabbedPaneTest_h_