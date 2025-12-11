#ifndef _com_apple_laf_AquaMenuBarBorder_h_
#define _com_apple_laf_AquaMenuBarBorder_h_
//$ class com.apple.laf.AquaMenuBarBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuBarBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(AquaMenuBarBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	AquaMenuBarBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuBarBorder_h_