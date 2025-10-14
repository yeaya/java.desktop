#ifndef _TestPopupMenu_h_
#define _TestPopupMenu_h_
//$ class TestPopupMenu
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JDesktopPane;
		class JFrame;
		class JLabel;
	}
}

class $export TestPopupMenu : public ::java::lang::Object {
	$class(TestPopupMenu, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestPopupMenu();
	void init$();
	virtual void blockTillDisplayed(::javax::swing::JComponent* comp);
	void createAndShowUI();
	void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	void lambda$createAndShowUI$3(::javax::swing::JDesktopPane* pane, ::java::awt::event::ActionEvent* e);
	void lambda$new$1();
	void lambda$new$2();
	static void main($StringArray* args);
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JLabel* label = nullptr;
	$volatile(::java::awt::Point*) p = nullptr;
	$volatile(::java::awt::Dimension*) d = nullptr;
};

#endif // _TestPopupMenu_h_