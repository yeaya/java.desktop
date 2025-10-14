#ifndef _TitledBorderLabel_h_
#define _TitledBorderLabel_h_
//$ class TitledBorderLabel
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class JButton;
		class JDialog;
		class JFrame;
		class JLabel;
		class JPanel;
		class Timer;
	}
}

class $export TitledBorderLabel : public ::java::lang::Object {
	$class(TitledBorderLabel, 0, ::java::lang::Object)
public:
	TitledBorderLabel();
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
	static ::java::util::concurrent::CountDownLatch* testEndedSignal;
	static const int32_t testTimeout = 0x000493E0;
	static $volatile($String*) testFailureMsg;
	static $volatile(bool) testPassed;
	static $volatile(bool) testFinished;
	static ::javax::swing::JPanel* panel;
	static ::javax::swing::JFrame* frame;
};

#endif // _TitledBorderLabel_h_