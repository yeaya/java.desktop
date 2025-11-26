#ifndef _javax_swing_plaf_basic_BasicBorders$RadioButtonBorder_h_
#define _javax_swing_plaf_basic_BasicBorders$RadioButtonBorder_h_
//$ class javax.swing.plaf.basic.BasicBorders$RadioButtonBorder
//$ extends javax.swing.plaf.basic.BasicBorders$ButtonBorder

#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>

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
		namespace plaf {
			namespace basic {

class $import BasicBorders$RadioButtonBorder : public ::javax::swing::plaf::basic::BasicBorders$ButtonBorder {
	$class(BasicBorders$RadioButtonBorder, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicBorders$ButtonBorder)
public:
	BasicBorders$RadioButtonBorder();
	using ::javax::swing::plaf::basic::BasicBorders$ButtonBorder::getBorderInsets;
	void init$(::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight, ::java::awt::Color* lightHighlight);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders$RadioButtonBorder_h_