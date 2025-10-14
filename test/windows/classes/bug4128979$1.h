#ifndef _bug4128979$1_h_
#define _bug4128979$1_h_
//$ class bug4128979$1
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

class bug4128979;
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class bug4128979$1 : public ::javax::swing::Icon {
	$class(bug4128979$1, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	bug4128979$1();
	void init$(::bug4128979* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::bug4128979* this$0 = nullptr;
};

#endif // _bug4128979$1_h_