#ifndef _JInternalFrameIconTest$1$1_h_
#define _JInternalFrameIconTest$1$1_h_
//$ class JInternalFrameIconTest$1$1
//$ extends javax.swing.ImageIcon

#include <javax/swing/ImageIcon.h>

class JInternalFrameIconTest$1;
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class JInternalFrameIconTest$1$1 : public ::javax::swing::ImageIcon {
	$class(JInternalFrameIconTest$1$1, $NO_CLASS_INIT, ::javax::swing::ImageIcon)
public:
	JInternalFrameIconTest$1$1();
	void init$(::JInternalFrameIconTest$1* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::JInternalFrameIconTest$1* this$0 = nullptr;
};

#endif // _JInternalFrameIconTest$1$1_h_