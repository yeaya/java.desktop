#ifndef _MultiUIDefaultsNPECheck$1_h_
#define _MultiUIDefaultsNPECheck$1_h_
//$ class MultiUIDefaultsNPECheck$1
//$ extends javax.swing.LookAndFeel

#include <javax/swing/LookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

class MultiUIDefaultsNPECheck$1 : public ::javax::swing::LookAndFeel {
	$class(MultiUIDefaultsNPECheck$1, $NO_CLASS_INIT, ::javax::swing::LookAndFeel)
public:
	MultiUIDefaultsNPECheck$1();
	void init$();
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
};

#endif // _MultiUIDefaultsNPECheck$1_h_