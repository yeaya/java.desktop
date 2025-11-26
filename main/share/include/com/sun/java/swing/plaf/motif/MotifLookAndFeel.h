#ifndef _com_sun_java_swing_plaf_motif_MotifLookAndFeel_h_
#define _com_sun_java_swing_plaf_motif_MotifLookAndFeel_h_
//$ class com.sun.java.swing.plaf.motif.MotifLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(MotifLookAndFeel, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	MotifLookAndFeel();
	void init$();
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifLookAndFeel_h_