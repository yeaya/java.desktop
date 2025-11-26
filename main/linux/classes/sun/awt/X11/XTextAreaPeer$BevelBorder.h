#ifndef _sun_awt_X11_XTextAreaPeer$BevelBorder_h_
#define _sun_awt_X11_XTextAreaPeer$BevelBorder_h_
//$ class sun.awt.X11.XTextAreaPeer$BevelBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$BevelBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(XTextAreaPeer$BevelBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	XTextAreaPeer$BevelBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isRaised, ::java::awt::Color* darkShadow, ::java::awt::Color* lightShadow);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isOpaque(::java::awt::Component* c);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* lightShadow = nullptr;
	::java::awt::Color* control = nullptr;
	bool isRaised = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$BevelBorder_h_