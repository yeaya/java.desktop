#ifndef _javax_swing_border_EmptyBorder_h_
#define _javax_swing_border_EmptyBorder_h_
//$ class javax.swing.border.EmptyBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $export EmptyBorder : public ::javax::swing::border::AbstractBorder {
	$class(EmptyBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	EmptyBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right);
	void init$(::java::awt::Insets* borderInsets);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::java::awt::Insets* getBorderInsets();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	int32_t left = 0;
	int32_t right = 0;
	int32_t top = 0;
	int32_t bottom = 0;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_EmptyBorder_h_