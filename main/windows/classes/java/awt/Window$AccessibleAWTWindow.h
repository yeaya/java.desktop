#ifndef _java_awt_Window$AccessibleAWTWindow_h_
#define _java_awt_Window$AccessibleAWTWindow_h_
//$ class java.awt.Window$AccessibleAWTWindow
//$ extends java.awt.Container$AccessibleAWTContainer

#include <java/awt/Container$AccessibleAWTContainer.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $export Window$AccessibleAWTWindow : public ::java::awt::Container$AccessibleAWTContainer {
	$class(Window$AccessibleAWTWindow, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer)
public:
	Window$AccessibleAWTWindow();
	void init$(::java::awt::Window* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::awt::Window* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x3A7EEE9758AE9524;
};

	} // awt
} // java

#endif // _java_awt_Window$AccessibleAWTWindow_h_