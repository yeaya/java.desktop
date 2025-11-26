#ifndef _MissingCharsKorean_h_
#define _MissingCharsKorean_h_
//$ class MissingCharsKorean
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

class $export MissingCharsKorean : public ::java::lang::Object {
	$class(MissingCharsKorean, 0, ::java::lang::Object)
public:
	MissingCharsKorean();
	void init$();
	static void enterInput(::java::awt::Robot* robotKeyInput, $Array<int32_t, 2>* keyInputs);
	static void glyphTest();
	static void lambda$main$0();
	static void lambda$performTasks$3();
	static void lambda$setupUI$1(::javax::swing::JButton* btnStartTest, ::javax::swing::JButton* btnCancelTest, ::java::awt::event::ActionEvent* e);
	static void lambda$setupUI$2(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static void performTasks(::java::awt::Robot* robotForKeyInput);
	static bool setKeyInput(int32_t iCount);
	static void setTaskStatus(bool allTasksPerformed, int32_t taskCount);
	static void setupUI();
	static void validateInput();
	static bool testPassed;
	static bool startTest;
	static $ints* expectedResults;
	static $Array<int32_t, 2>* inKeyCodes;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JLabel* lblTestStatus;
	static ::javax::swing::JTextField* textFieldMain;
	static $String* testResult;
	static ::java::util::concurrent::CountDownLatch* testStartLatch;
};

#endif // _MissingCharsKorean_h_