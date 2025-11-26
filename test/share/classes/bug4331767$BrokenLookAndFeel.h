#ifndef _bug4331767$BrokenLookAndFeel_h_
#define _bug4331767$BrokenLookAndFeel_h_
//$ class bug4331767$BrokenLookAndFeel
//$ extends javax.swing.plaf.metal.MetalLookAndFeel

#include <javax/swing/plaf/metal/MetalLookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

class $export bug4331767$BrokenLookAndFeel : public ::javax::swing::plaf::metal::MetalLookAndFeel {
	$class(bug4331767$BrokenLookAndFeel, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalLookAndFeel)
public:
	bug4331767$BrokenLookAndFeel();
	void init$();
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	::javax::swing::UIDefaults* defaults = nullptr;
};

#endif // _bug4331767$BrokenLookAndFeel_h_