#ifndef _TestCCEOnEditEvent_h_
#define _TestCCEOnEditEvent_h_
//$ class TestCCEOnEditEvent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Container;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export TestCCEOnEditEvent : public ::java::lang::Object {
	$class(TestCCEOnEditEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestCCEOnEditEvent();
	void init$();
	virtual void createAndShowGUI();
	void createTextArea();
	static void main($StringArray* arguments);
	::java::awt::Container* contentPane = nullptr;
	::javax::swing::JTextArea* textArea = nullptr;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#endif // _TestCCEOnEditEvent_h_