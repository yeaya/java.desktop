#ifndef _javax_swing_border_MatteBorder_h_
#define _javax_swing_border_MatteBorder_h_
//$ class javax.swing.border.MatteBorder
//$ extends javax.swing.border.EmptyBorder

#include <javax/swing/border/EmptyBorder.h>

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
		class Icon;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $export MatteBorder : public ::javax::swing::border::EmptyBorder {
	$class(MatteBorder, $NO_CLASS_INIT, ::javax::swing::border::EmptyBorder)
public:
	MatteBorder();
	using ::javax::swing::border::EmptyBorder::getBorderInsets;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right, ::java::awt::Color* matteColor);
	void init$(::java::awt::Insets* borderInsets, ::java::awt::Color* matteColor);
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right, ::javax::swing::Icon* tileIcon);
	void init$(::java::awt::Insets* borderInsets, ::javax::swing::Icon* tileIcon);
	void init$(::javax::swing::Icon* tileIcon);
	::java::awt::Insets* computeInsets(::java::awt::Insets* insets);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::java::awt::Insets* getBorderInsets() override;
	virtual ::java::awt::Color* getMatteColor();
	virtual ::javax::swing::Icon* getTileIcon();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	void paintEdge(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, int32_t tileW, int32_t tileH);
	::java::awt::Color* color = nullptr;
	::javax::swing::Icon* tileIcon = nullptr;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_MatteBorder_h_