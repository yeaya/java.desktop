#ifndef _JapaneseReadingAttributes_h_
#define _JapaneseReadingAttributes_h_
//$ class JapaneseReadingAttributes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
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
		class ArrayList;
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
		class JFrame;
		class JLabel;
		class JTextField;
	}
}

class $export JapaneseReadingAttributes : public ::java::lang::Object {
	$class(JapaneseReadingAttributes, 0, ::java::lang::Object)
public:
	JapaneseReadingAttributes();
	void init$();
	static void enterInput(::java::awt::Robot* robotKeyInput, ::java::util::ArrayList* keyInputs);
	static void glyphTest();
	static void lambda$main$0();
	static void lambda$performTasks$3();
	static void lambda$performTasks$4();
	static void lambda$setupUI$1(::javax::swing::JButton* btnStartTest, ::javax::swing::JButton* btnCancelTest, ::java::awt::event::ActionEvent* e);
	static void lambda$setupUI$2(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static void performTasks(::java::awt::Robot* robotForKeyInput);
	static bool setTaskStatus($String* readingValue, int32_t passCount);
	static void setupUI();
	static bool testPassed;
	static bool startTest;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JLabel* lblTestStatus;
	static ::javax::swing::JTextField* textFieldMain;
	static ::javax::swing::JTextField* textFieldReading;
	static $String* testResult;
	static $String* readingPass1;
	static $String* readingPass2;
	static ::java::util::concurrent::CountDownLatch* testStartLatch;
};

#endif // _JapaneseReadingAttributes_h_