#ifndef _javax_swing_plaf_basic_BasicBorders$RolloverButtonBorder_h_
#define _javax_swing_plaf_basic_BasicBorders$RolloverButtonBorder_h_
//$ class javax.swing.plaf.basic.BasicBorders$RolloverButtonBorder
//$ extends javax.swing.plaf.basic.BasicBorders$ButtonBorder

#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicBorders$RolloverButtonBorder : public ::javax::swing::plaf::basic::BasicBorders$ButtonBorder {
	$class(BasicBorders$RolloverButtonBorder, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicBorders$ButtonBorder)
public:
	BasicBorders$RolloverButtonBorder();
	using ::javax::swing::plaf::basic::BasicBorders$ButtonBorder::getBorderInsets;
	void init$(::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight, ::java::awt::Color* lightHighlight);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders$RolloverButtonBorder_h_