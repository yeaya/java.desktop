#ifndef _SpanTest_h_
#define _SpanTest_h_
//$ class SpanTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class SpanTest : public ::java::lang::Runnable {
	$class(SpanTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SpanTest();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	void createUI();
	virtual void dispose();
	virtual void run() override;
	static void spanTest();
	static ::javax::swing::JFrame* f;
	static ::javax::swing::JDialog* dialog;
	bool testResult = false;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _SpanTest_h_