#ifndef _javax_swing_border_LineBorder_h_
#define _javax_swing_border_LineBorder_h_
//$ class javax.swing.border.LineBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

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
			class Border;
		}
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $import LineBorder : public ::javax::swing::border::AbstractBorder {
	$class(LineBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	LineBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(::java::awt::Color* color);
	void init$(::java::awt::Color* color, int32_t thickness);
	void init$(::java::awt::Color* color, int32_t thickness, bool roundedCorners);
	static ::javax::swing::border::Border* createBlackLineBorder();
	static ::javax::swing::border::Border* createGrayLineBorder();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::java::awt::Color* getLineColor();
	virtual bool getRoundedCorners();
	virtual int32_t getThickness();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::javax::swing::border::Border* blackLine;
	static ::javax::swing::border::Border* grayLine;
	int32_t thickness = 0;
	::java::awt::Color* lineColor = nullptr;
	bool roundedCorners = false;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_LineBorder_h_