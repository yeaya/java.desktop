#ifndef _javax_swing_plaf_basic_BasicBorders_h_
#define _javax_swing_plaf_basic_BasicBorders_h_
//$ class javax.swing.plaf.basic.BasicBorders
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicBorders : public ::java::lang::Object {
	$class(BasicBorders, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicBorders();
	void init$();
	static ::javax::swing::border::Border* getButtonBorder();
	static ::javax::swing::border::Border* getInternalFrameBorder();
	static ::javax::swing::border::Border* getMenuBarBorder();
	static ::javax::swing::border::Border* getProgressBarBorder();
	static ::javax::swing::border::Border* getRadioButtonBorder();
	static ::javax::swing::border::Border* getSplitPaneBorder();
	static ::javax::swing::border::Border* getSplitPaneDividerBorder();
	static ::javax::swing::border::Border* getTextFieldBorder();
	static ::javax::swing::border::Border* getToggleButtonBorder();
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders_h_