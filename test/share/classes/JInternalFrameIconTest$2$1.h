#ifndef _JInternalFrameIconTest$2$1_h_
#define _JInternalFrameIconTest$2$1_h_
//$ class JInternalFrameIconTest$2$1
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

class JInternalFrameIconTest$2;
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class JInternalFrameIconTest$2$1 : public ::javax::swing::Icon {
	$class(JInternalFrameIconTest$2$1, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	JInternalFrameIconTest$2$1();
	void init$(::JInternalFrameIconTest$2* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::JInternalFrameIconTest$2* this$0 = nullptr;
};

#endif // _JInternalFrameIconTest$2$1_h_