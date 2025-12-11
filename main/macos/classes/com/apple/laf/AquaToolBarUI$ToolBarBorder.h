#ifndef _com_apple_laf_AquaToolBarUI$ToolBarBorder_h_
#define _com_apple_laf_AquaToolBarUI$ToolBarBorder_h_
//$ class com.apple.laf.AquaToolBarUI$ToolBarBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource,javax.swing.SwingConstants

#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/AbstractBorder.h>
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

class AquaToolBarUI$ToolBarBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource, public ::javax::swing::SwingConstants {
	$class(AquaToolBarUI$ToolBarBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource, ::javax::swing::SwingConstants)
public:
	AquaToolBarUI$ToolBarBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void fillHandle(::java::awt::Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2, bool horizontal);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* borderInsets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaToolBarUI$ToolBarBorder_h_