#ifndef _javax_swing_plaf_basic_BasicIconFactory_h_
#define _javax_swing_plaf_basic_BasicIconFactory_h_
//$ class javax.swing.plaf.basic.BasicIconFactory
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicIconFactory : public ::java::io::Serializable {
	$class(BasicIconFactory, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	BasicIconFactory();
	void init$();
	static ::javax::swing::Icon* createEmptyFrameIcon();
	static ::javax::swing::Icon* getCheckBoxIcon();
	static ::javax::swing::Icon* getCheckBoxMenuItemIcon();
	static ::javax::swing::Icon* getMenuArrowIcon();
	static ::javax::swing::Icon* getMenuItemArrowIcon();
	static ::javax::swing::Icon* getMenuItemCheckIcon();
	static ::javax::swing::Icon* getRadioButtonIcon();
	static ::javax::swing::Icon* getRadioButtonMenuItemIcon();
	static ::javax::swing::Icon* frame_icon;
	static ::javax::swing::Icon* checkBoxIcon;
	static ::javax::swing::Icon* radioButtonIcon;
	static ::javax::swing::Icon* checkBoxMenuItemIcon;
	static ::javax::swing::Icon* radioButtonMenuItemIcon;
	static ::javax::swing::Icon* menuItemCheckIcon;
	static ::javax::swing::Icon* menuItemArrowIcon;
	static ::javax::swing::Icon* menuArrowIcon;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicIconFactory_h_