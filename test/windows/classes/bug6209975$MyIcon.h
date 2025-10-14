#ifndef _bug6209975$MyIcon_h_
#define _bug6209975$MyIcon_h_
//$ class bug6209975$MyIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

class bug6209975$ReturnObject;
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class $export bug6209975$MyIcon : public ::javax::swing::Icon {
	$class(bug6209975$MyIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	bug6209975$MyIcon();
	void init$(::bug6209975$ReturnObject* ro);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::bug6209975$ReturnObject* thisObject = nullptr;
};

#endif // _bug6209975$MyIcon_h_