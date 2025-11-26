#ifndef _bug8032667_h_
#define _bug8032667_h_
//$ class bug8032667
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JComponent;
	}
}

class $export bug8032667 : public ::javax::swing::JApplet {
	$class(bug8032667, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug8032667();
	using ::javax::swing::JApplet::getImage;
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static ::javax::swing::JCheckBox* getCheckBox($String* text, bool selected);
	static ::java::awt::Image* getImage(::javax::swing::JComponent* component);
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	static const int32_t scale = 2;
	static const int32_t width = 130;
	static const int32_t height = 50;
	static const int32_t scaledWidth = 260; // scale * width
	static const int32_t scaledHeight = 100; // scale * height
};

#endif // _bug8032667_h_