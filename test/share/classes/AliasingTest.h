#ifndef _AliasingTest_h_
#define _AliasingTest_h_
//$ class AliasingTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
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
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class JFrame;
	}
}

class AliasingTest : public ::java::lang::Runnable {
	$class(AliasingTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AliasingTest();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	static void aliasingTest();
	static ::java::awt::Component* createHtmlViewer(bool antialiasing);
	static ::java::awt::Component* createSplitPane();
	void createUI();
	virtual void dispose();
	static $String* getHtml();
	void lambda$createUI$1(::java::awt::event::ActionEvent* e);
	void lambda$createUI$2(::java::awt::event::ActionEvent* e);
	void lambda$run$0();
	virtual void run() override;
	static ::javax::swing::JFrame* f;
	static ::javax::swing::JDialog* dialog;
	bool testResult = false;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _AliasingTest_h_