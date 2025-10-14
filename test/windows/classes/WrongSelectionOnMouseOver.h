#ifndef _WrongSelectionOnMouseOver_h_
#define _WrongSelectionOnMouseOver_h_
//$ class WrongSelectionOnMouseOver
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
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
		class JMenu;
		class UIManager$LookAndFeelInfo;
	}
}

class $export WrongSelectionOnMouseOver : public ::java::lang::Runnable {
	$class(WrongSelectionOnMouseOver, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WrongSelectionOnMouseOver();
	void init$(::javax::swing::UIManager$LookAndFeelInfo* laf);
	void createUI();
	virtual void disposeUI();
	void lambda$test$0();
	static void main($StringArray* args);
	virtual void run() override;
	virtual void test();
	::java::util::concurrent::CountDownLatch* firstMenuSelected = nullptr;
	::java::util::concurrent::CountDownLatch* secondMenuMouseEntered = nullptr;
	::java::util::concurrent::CountDownLatch* secondMenuSelected = nullptr;
	::javax::swing::JMenu* m1 = nullptr;
	::javax::swing::JMenu* m2 = nullptr;
	::javax::swing::UIManager$LookAndFeelInfo* laf = nullptr;
	::javax::swing::JFrame* frame1 = nullptr;
	::javax::swing::JFrame* frame2 = nullptr;
	::java::awt::Point* menu1location = nullptr;
	::java::awt::Point* menu2location = nullptr;
};

#endif // _WrongSelectionOnMouseOver_h_