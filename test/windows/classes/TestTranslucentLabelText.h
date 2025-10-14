#ifndef _TestTranslucentLabelText_h_
#define _TestTranslucentLabelText_h_
//$ class TestTranslucentLabelText
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Thread;
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
		class JButton;
		class JDialog;
		class JFrame;
		class JLabel;
	}
}

class $export TestTranslucentLabelText : public ::java::lang::Object {
	$class(TestTranslucentLabelText, 0, ::java::lang::Object)
public:
	TestTranslucentLabelText();
	void init$();
	static ::javax::swing::JLabel* create($String* text);
	static void doTest(::java::lang::Runnable* action);
	static void fail();
	static void lambda$doTest$0(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$doTest$1(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$doTest$2(::javax::swing::JButton* testButton, ::java::lang::Runnable* action, ::javax::swing::JButton* passButton, ::javax::swing::JButton* failButton, ::java::awt::event::ActionEvent* e);
	static void lambda$main$3();
	static void main($StringArray* args);
	static void pass();
	static void runTest();
	static ::java::awt::Color* background;
	static ::java::awt::Color* foreground;
	static ::java::awt::Font* font;
	static ::javax::swing::JFrame* frame;
	static bool testResult;
	static ::java::util::concurrent::CountDownLatch* latch;
	static $Thread* mainThread;
	static bool testPassed;
	static bool testGeneratedInterrupt;
};

#endif // _TestTranslucentLabelText_h_