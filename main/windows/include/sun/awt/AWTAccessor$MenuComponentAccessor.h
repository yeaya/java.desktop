#ifndef _sun_awt_AWTAccessor$MenuComponentAccessor_h_
#define _sun_awt_AWTAccessor$MenuComponentAccessor_h_
//$ interface sun.awt.AWTAccessor$MenuComponentAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Font;
		class MenuComponent;
		class MenuContainer;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class MenuComponentPeer;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$MenuComponentAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$MenuComponentAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::awt::AppContext* getAppContext(::java::awt::MenuComponent* menuComp) {return nullptr;}
	virtual ::java::awt::Font* getFont_NoClientCode(::java::awt::MenuComponent* menuComp) {return nullptr;}
	virtual ::java::awt::MenuContainer* getParent(::java::awt::MenuComponent* menuComp) {return nullptr;}
	virtual ::java::awt::peer::MenuComponentPeer* getPeer(::java::awt::MenuComponent* menuComp) {return nullptr;}
	virtual void setAppContext(::java::awt::MenuComponent* menuComp, ::sun::awt::AppContext* appContext) {}
	virtual void setParent(::java::awt::MenuComponent* menuComp, ::java::awt::MenuContainer* menuContainer) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$MenuComponentAccessor_h_