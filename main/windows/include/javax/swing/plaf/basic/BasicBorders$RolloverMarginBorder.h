#ifndef _javax_swing_plaf_basic_BasicBorders$RolloverMarginBorder_h_
#define _javax_swing_plaf_basic_BasicBorders$RolloverMarginBorder_h_
//$ class javax.swing.plaf.basic.BasicBorders$RolloverMarginBorder
//$ extends javax.swing.border.EmptyBorder

#include <javax/swing/border/EmptyBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicBorders$RolloverMarginBorder : public ::javax::swing::border::EmptyBorder {
	$class(BasicBorders$RolloverMarginBorder, $NO_CLASS_INIT, ::javax::swing::border::EmptyBorder)
public:
	BasicBorders$RolloverMarginBorder();
	using ::javax::swing::border::EmptyBorder::getBorderInsets;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders$RolloverMarginBorder_h_