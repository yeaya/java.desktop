#ifndef _javax_swing_Popup$DefaultFrame_h_
#define _javax_swing_Popup$DefaultFrame_h_
//$ class javax.swing.Popup$DefaultFrame
//$ extends java.awt.Frame

#include <java/awt/Frame.h>

namespace javax {
	namespace swing {

class $import Popup$DefaultFrame : public ::java::awt::Frame {
	$class(Popup$DefaultFrame, $NO_CLASS_INIT, ::java::awt::Frame)
public:
	Popup$DefaultFrame();
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	void init$();
	using ::java::awt::Frame::remove;
	using ::java::awt::Frame::setCursor;
	using ::java::awt::Frame::show;
	using ::java::awt::Frame::isFocusCycleRoot;
	using ::java::awt::Frame::list;
};

	} // swing
} // javax

#endif // _javax_swing_Popup$DefaultFrame_h_