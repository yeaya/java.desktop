#ifndef _javax_swing_border_StrokeBorder_h_
#define _javax_swing_border_StrokeBorder_h_
//$ class javax.swing.border.StrokeBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

namespace java {
	namespace awt {
		class BasicStroke;
		class Component;
		class Graphics;
		class Insets;
		class Paint;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $import StrokeBorder : public ::javax::swing::border::AbstractBorder {
	$class(StrokeBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	StrokeBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(::java::awt::BasicStroke* stroke);
	void init$(::java::awt::BasicStroke* stroke, ::java::awt::Paint* paint);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::java::awt::Paint* getPaint();
	virtual ::java::awt::BasicStroke* getStroke();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::java::awt::BasicStroke* stroke = nullptr;
	::java::awt::Paint* paint = nullptr;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_StrokeBorder_h_