#ifndef _TitledBorderLabelUITest$TestLookAndFeel_h_
#define _TitledBorderLabelUITest$TestLookAndFeel_h_
//$ class TitledBorderLabelUITest$TestLookAndFeel
//$ extends javax.swing.plaf.metal.MetalLookAndFeel

#include <javax/swing/plaf/metal/MetalLookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

class $export TitledBorderLabelUITest$TestLookAndFeel : public ::javax::swing::plaf::metal::MetalLookAndFeel {
	$class(TitledBorderLabelUITest$TestLookAndFeel, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalLookAndFeel)
public:
	TitledBorderLabelUITest$TestLookAndFeel();
	void init$();
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
};

#endif // _TitledBorderLabelUITest$TestLookAndFeel_h_