#ifndef _javax_swing_JWindow$AccessibleJWindow_h_
#define _javax_swing_JWindow$AccessibleJWindow_h_
//$ class javax.swing.JWindow$AccessibleJWindow
//$ extends java.awt.Window$AccessibleAWTWindow

#include <java/awt/Window$AccessibleAWTWindow.h>

namespace javax {
	namespace swing {
		class JWindow;
	}
}

namespace javax {
	namespace swing {

class $import JWindow$AccessibleJWindow : public ::java::awt::Window$AccessibleAWTWindow {
	$class(JWindow$AccessibleJWindow, $NO_CLASS_INIT, ::java::awt::Window$AccessibleAWTWindow)
public:
	JWindow$AccessibleJWindow();
	void init$(::javax::swing::JWindow* this$0);
	::javax::swing::JWindow* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JWindow$AccessibleJWindow_h_