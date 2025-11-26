#ifndef _TestTextPosInPrint_h_
#define _TestTextPosInPrint_h_
//$ class TestTextPosInPrint
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Graphics;
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
	namespace awt {
		namespace print {
			class PageFormat;
			class PrinterJob;
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
		class JButton;
		class JDialog;
		class JFrame;
		class JLabel;
		class JPanel;
		class Timer;
	}
}

class $export TestTextPosInPrint : public ::java::awt::print::Printable {
	$class(TestTextPosInPrint, 0, ::java::awt::print::Printable)
public:
	TestTextPosInPrint();
	void init$();
	static $String* convertMillisToTimeStr(int32_t millis);
	static void createAndShowTestDialog();
	static void doTest();
	static void fail($String* failureMsg);
	static void lambda$createAndShowTestDialog$2(int64_t startTime, ::javax::swing::Timer* timer, ::javax::swing::JDialog* dialog, ::javax::swing::JLabel* testTimeoutLabel, ::java::awt::event::ActionEvent* e);
	static void lambda$createAndShowTestDialog$3(::javax::swing::JButton* passButton, ::javax::swing::JButton* failButton);
	static void lambda$createAndShowTestDialog$4(::javax::swing::JButton* passButton, ::javax::swing::JButton* failButton, ::javax::swing::JDialog* dialog);
	static void lambda$createAndShowTestDialog$5(::javax::swing::JButton* testButton, ::javax::swing::JButton* passButton, ::javax::swing::JButton* failButton, ::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$createAndShowTestDialog$6(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$createAndShowTestDialog$7(::javax::swing::JDialog* dialog, ::java::awt::event::ActionEvent* e);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static void pass();
	virtual int32_t print(::java::awt::Graphics* pg, ::java::awt::print::PageFormat* pf, int32_t pageNum) override;
	static ::java::util::concurrent::CountDownLatch* testEndedSignal;
	static const int32_t testTimeout = 0x000493E0;
	static $volatile($String*) testFailureMsg;
	static $volatile(bool) testPassed;
	static $volatile(bool) testFinished;
	static ::java::awt::print::PrinterJob* job;
	static ::javax::swing::JPanel* panel;
	static ::javax::swing::JFrame* f;
};

#endif // _TestTextPosInPrint_h_