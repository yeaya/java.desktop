#ifndef _com_apple_laf_AquaIcon$InvertableIcon_h_
#define _com_apple_laf_AquaIcon$InvertableIcon_h_
//$ interface com.apple.laf.AquaIcon$InvertableIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$InvertableIcon : public ::javax::swing::Icon {
	$interface(AquaIcon$InvertableIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	virtual ::javax::swing::Icon* getInvertedIcon() {return nullptr;}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$InvertableIcon_h_