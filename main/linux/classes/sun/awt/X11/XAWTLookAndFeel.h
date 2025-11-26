#ifndef _sun_awt_X11_XAWTLookAndFeel_h_
#define _sun_awt_X11_XAWTLookAndFeel_h_
//$ class sun.awt.X11.XAWTLookAndFeel
//$ extends com.sun.java.swing.plaf.motif.MotifLookAndFeel

#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAWTLookAndFeel : public ::com::sun::java::swing::plaf::motif::MotifLookAndFeel {
	$class(XAWTLookAndFeel, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifLookAndFeel)
public:
	XAWTLookAndFeel();
	void init$();
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XAWTLookAndFeel_h_