#ifndef _MyFrame_h_
#define _MyFrame_h_
//$ class MyFrame
//$ extends javax.swing.JFrame

#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

class MyFrame : public ::javax::swing::JFrame {
	$class(MyFrame, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	MyFrame();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	virtual ::java::awt::Color* getPixelColor(int32_t x, int32_t y);
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	void paintFrameToBufferedImage(::java::awt::Component* component);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	::java::awt::image::BufferedImage* bi = nullptr;
	$String* content = nullptr;
};

#endif // _MyFrame_h_