#ifndef _com_sun_java_swing_plaf_motif_MotifIconFactory_h_
#define _com_sun_java_swing_plaf_motif_MotifIconFactory_h_
//$ class com.sun.java.swing.plaf.motif.MotifIconFactory
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifIconFactory : public ::java::io::Serializable {
	$class(MotifIconFactory, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	MotifIconFactory();
	void init$();
	static ::javax::swing::Icon* getCheckBoxIcon();
	static ::javax::swing::Icon* getMenuArrowIcon();
	static ::javax::swing::Icon* getMenuItemArrowIcon();
	static ::javax::swing::Icon* getMenuItemCheckIcon();
	static ::javax::swing::Icon* getRadioButtonIcon();
	static ::javax::swing::Icon* checkBoxIcon;
	static ::javax::swing::Icon* radioButtonIcon;
	static ::javax::swing::Icon* menuItemCheckIcon;
	static ::javax::swing::Icon* menuItemArrowIcon;
	static ::javax::swing::Icon* menuArrowIcon;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifIconFactory_h_