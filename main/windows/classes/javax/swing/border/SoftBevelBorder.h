#ifndef _javax_swing_border_SoftBevelBorder_h_
#define _javax_swing_border_SoftBevelBorder_h_
//$ class javax.swing.border.SoftBevelBorder
//$ extends javax.swing.border.BevelBorder

#include <javax/swing/border/BevelBorder.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $export SoftBevelBorder : public ::javax::swing::border::BevelBorder {
	$class(SoftBevelBorder, $NO_CLASS_INIT, ::javax::swing::border::BevelBorder)
public:
	SoftBevelBorder();
	using ::javax::swing::border::BevelBorder::getBorderInsets;
	void init$(int32_t bevelType);
	void init$(int32_t bevelType, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	void init$(int32_t bevelType, ::java::awt::Color* highlightOuterColor, ::java::awt::Color* highlightInnerColor, ::java::awt::Color* shadowOuterColor, ::java::awt::Color* shadowInnerColor);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_SoftBevelBorder_h_