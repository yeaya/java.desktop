#ifndef _javax_swing_border_CompoundBorder_h_
#define _javax_swing_border_CompoundBorder_h_
//$ class javax.swing.border.CompoundBorder
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
			class Border;
		}
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $import CompoundBorder : public ::javax::swing::border::AbstractBorder {
	$class(CompoundBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	CompoundBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$();
	void init$(::javax::swing::border::Border* outsideBorder, ::javax::swing::border::Border* insideBorder);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::javax::swing::border::Border* getInsideBorder();
	virtual ::javax::swing::border::Border* getOutsideBorder();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::javax::swing::border::Border* outsideBorder = nullptr;
	::javax::swing::border::Border* insideBorder = nullptr;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_CompoundBorder_h_