#ifndef _TestJTextPaneHTMLRendering_h_
#define _TestJTextPaneHTMLRendering_h_
//$ class TestJTextPaneHTMLRendering
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Dictionary;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPanel;
		class JTextPane;
	}
}

class $export TestJTextPaneHTMLRendering : public ::java::lang::Object {
	$class(TestJTextPaneHTMLRendering, 0, ::java::lang::Object)
public:
	TestJTextPaneHTMLRendering();
	void init$();
	static void createTestUI(::javax::swing::JPanel* panel);
	static void createUI();
	static void lambda$createUI$0(::java::awt::event::ActionEvent* e);
	static void lambda$createUI$1(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static void runTest();
	static ::javax::swing::JFrame* mainFrame;
	static ::java::util::Dictionary* cache;
	static ::javax::swing::JTextPane* textPane;
	static ::java::net::URL* urlArrow;
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _TestJTextPaneHTMLRendering_h_