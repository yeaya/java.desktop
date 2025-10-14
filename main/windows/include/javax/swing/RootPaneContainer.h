#ifndef _javax_swing_RootPaneContainer_h_
#define _javax_swing_RootPaneContainer_h_
//$ interface javax.swing.RootPaneContainer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JLayeredPane;
		class JRootPane;
	}
}

namespace javax {
	namespace swing {

class $import RootPaneContainer : public ::java::lang::Object {
	$interface(RootPaneContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Container* getContentPane() {return nullptr;}
	virtual ::java::awt::Component* getGlassPane() {return nullptr;}
	virtual ::javax::swing::JLayeredPane* getLayeredPane() {return nullptr;}
	virtual ::javax::swing::JRootPane* getRootPane() {return nullptr;}
	virtual void setContentPane(::java::awt::Container* contentPane) {}
	virtual void setGlassPane(::java::awt::Component* glassPane) {}
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) {}
};

	} // swing
} // javax

#endif // _javax_swing_RootPaneContainer_h_