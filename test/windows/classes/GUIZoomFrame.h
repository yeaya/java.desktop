#ifndef _GUIZoomFrame_h_
#define _GUIZoomFrame_h_
//$ class GUIZoomFrame
//$ extends java.awt.Frame

#include <java/awt/Frame.h>

namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JTextArea;
	}
}

class $export GUIZoomFrame : public ::java::awt::Frame {
	$class(GUIZoomFrame, $NO_CLASS_INIT, ::java::awt::Frame)
public:
	GUIZoomFrame();
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	void init$();
	using ::java::awt::Frame::remove;
	using ::java::awt::Frame::setCursor;
	using ::java::awt::Frame::show;
	using ::java::awt::Frame::isFocusCycleRoot;
	using ::java::awt::Frame::list;
	::javax::swing::JFrame* jframe1 = nullptr;
	::javax::swing::JFrame* jframe2 = nullptr;
	::javax::swing::JButton* jbutton = nullptr;
	::javax::swing::JTextArea* jtextarea = nullptr;
	$volatile(bool) maxHor = false;
	$volatile(bool) maxVer = false;
	$volatile(bool) maxBoth = false;
	$volatile(bool) normal = false;
	$volatile(bool) iconify = false;
};

#endif // _GUIZoomFrame_h_