#ifndef _bug4529206_h_
#define _bug4529206_h_
//$ class bug4529206
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JToolBar;
	}
}

class $export bug4529206 : public ::javax::swing::JFrame {
	$class(bug4529206, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	bug4529206();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	void buttonPressed(::java::awt::event::ActionEvent* e);
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	void makeToolbarFloat();
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JToolBar* jToolBar1;
};

#endif // _bug4529206_h_