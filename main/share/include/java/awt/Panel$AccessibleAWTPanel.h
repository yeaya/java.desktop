#ifndef _java_awt_Panel$AccessibleAWTPanel_h_
#define _java_awt_Panel$AccessibleAWTPanel_h_
//$ class java.awt.Panel$AccessibleAWTPanel
//$ extends java.awt.Container$AccessibleAWTContainer

#include <java/awt/Container$AccessibleAWTContainer.h>

namespace java {
	namespace awt {
		class Panel;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $import Panel$AccessibleAWTPanel : public ::java::awt::Container$AccessibleAWTContainer {
	$class(Panel$AccessibleAWTPanel, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer)
public:
	Panel$AccessibleAWTPanel();
	void init$(::java::awt::Panel* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::Panel* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xA70CB235889D65B6;
};

	} // awt
} // java

#endif // _java_awt_Panel$AccessibleAWTPanel_h_