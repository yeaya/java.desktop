#ifndef _GUIUndFrame_h_
#define _GUIUndFrame_h_
//$ class GUIUndFrame
//$ extends java.awt.Frame

#include <java/awt/Frame.h>

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
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JTextArea;
	}
}

class $export GUIUndFrame : public ::java::awt::Frame {
	$class(GUIUndFrame, $NO_CLASS_INIT, ::java::awt::Frame)
public:
	GUIUndFrame();
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	void init$();
	using ::java::awt::Frame::isFocusCycleRoot;
	void lambda$new$0(::java::awt::event::ActionEvent* e);
	void lambda$new$1(::java::awt::event::ActionEvent* e);
	void lambda$new$2(::java::awt::event::ActionEvent* e);
	void lambda$new$3(::java::awt::event::ActionEvent* e);
	using ::java::awt::Frame::remove;
	using ::java::awt::Frame::setCursor;
	using ::java::awt::Frame::show;
	using ::java::awt::Frame::list;
	::javax::swing::JFrame* jframe1 = nullptr;
	::javax::swing::JFrame* jframe2 = nullptr;
	::javax::swing::JFrame* jframe3 = nullptr;
	::java::awt::Component* comp = nullptr;
	::javax::swing::JButton* jbutton1 = nullptr;
	::javax::swing::JButton* jbutton2 = nullptr;
	::javax::swing::JButton* jbutton3 = nullptr;
	::javax::swing::JButton* jbutton4 = nullptr;
	::javax::swing::JTextArea* jtextarea = nullptr;
	$volatile(bool) win_act = false;
	$volatile(bool) win_deact = false;
	$volatile(bool) win_ico = false;
	$volatile(bool) win_deico = false;
	$volatile(bool) win_close = false;
};

#endif // _GUIUndFrame_h_