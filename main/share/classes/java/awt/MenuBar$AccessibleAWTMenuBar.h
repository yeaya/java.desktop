#ifndef _java_awt_MenuBar$AccessibleAWTMenuBar_h_
#define _java_awt_MenuBar$AccessibleAWTMenuBar_h_
//$ class java.awt.MenuBar$AccessibleAWTMenuBar
//$ extends java.awt.MenuComponent$AccessibleAWTMenuComponent

#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>

namespace java {
	namespace awt {
		class MenuBar;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $export MenuBar$AccessibleAWTMenuBar : public ::java::awt::MenuComponent$AccessibleAWTMenuComponent {
	$class(MenuBar$AccessibleAWTMenuBar, $NO_CLASS_INIT, ::java::awt::MenuComponent$AccessibleAWTMenuComponent)
public:
	MenuBar$AccessibleAWTMenuBar();
	void init$(::java::awt::MenuBar* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::MenuBar* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x88F63A2928AC3F19;
};

	} // awt
} // java

#endif // _java_awt_MenuBar$AccessibleAWTMenuBar_h_