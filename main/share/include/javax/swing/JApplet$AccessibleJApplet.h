#ifndef _javax_swing_JApplet$AccessibleJApplet_h_
#define _javax_swing_JApplet$AccessibleJApplet_h_
//$ class javax.swing.JApplet$AccessibleJApplet
//$ extends java.applet.Applet$AccessibleApplet

#include <java/applet/Applet$AccessibleApplet.h>

namespace javax {
	namespace swing {
		class JApplet;
	}
}

namespace javax {
	namespace swing {

class $import JApplet$AccessibleJApplet : public ::java::applet::Applet$AccessibleApplet {
	$class(JApplet$AccessibleJApplet, $NO_CLASS_INIT, ::java::applet::Applet$AccessibleApplet)
public:
	JApplet$AccessibleJApplet();
	void init$(::javax::swing::JApplet* this$0);
	::javax::swing::JApplet* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JApplet$AccessibleJApplet_h_