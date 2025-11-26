#ifndef _java_awt_MenuComponent$1_h_
#define _java_awt_MenuComponent$1_h_
//$ class java.awt.MenuComponent$1
//$ extends sun.awt.AWTAccessor$MenuComponentAccessor

#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>

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

namespace java {
	namespace awt {

class MenuComponent$1 : public ::sun::awt::AWTAccessor$MenuComponentAccessor {
	$class(MenuComponent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$MenuComponentAccessor)
public:
	MenuComponent$1();
	void init$();
	virtual ::sun::awt::AppContext* getAppContext(::java::awt::MenuComponent* menuComp) override;
	virtual ::java::awt::Font* getFont_NoClientCode(::java::awt::MenuComponent* menuComp) override;
	virtual ::java::awt::MenuContainer* getParent(::java::awt::MenuComponent* menuComp) override;
	virtual ::java::awt::peer::MenuComponentPeer* getPeer(::java::awt::MenuComponent* menuComp) override;
	virtual void setAppContext(::java::awt::MenuComponent* menuComp, ::sun::awt::AppContext* appContext) override;
	virtual void setParent(::java::awt::MenuComponent* menuComp, ::java::awt::MenuContainer* menuContainer) override;
};

	} // awt
} // java

#endif // _java_awt_MenuComponent$1_h_