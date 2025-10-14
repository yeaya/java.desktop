#ifndef _java_applet_Applet$AccessibleApplet_h_
#define _java_applet_Applet$AccessibleApplet_h_
//$ class java.applet.Applet$AccessibleApplet
//$ extends java.awt.Panel$AccessibleAWTPanel

#include <java/awt/Panel$AccessibleAWTPanel.h>

namespace java {
	namespace applet {
		class Applet;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace applet {

class $import Applet$AccessibleApplet : public ::java::awt::Panel$AccessibleAWTPanel {
	$class(Applet$AccessibleApplet, $NO_CLASS_INIT, ::java::awt::Panel$AccessibleAWTPanel)
public:
	Applet$AccessibleApplet();
	void init$(::java::applet::Applet* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::applet::Applet* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x70CA3C4CD258F9E0;
};

	} // applet
} // java

#endif // _java_applet_Applet$AccessibleApplet_h_