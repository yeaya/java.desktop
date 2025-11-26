#ifndef _java_awt_Dialog$AccessibleAWTDialog_h_
#define _java_awt_Dialog$AccessibleAWTDialog_h_
//$ class java.awt.Dialog$AccessibleAWTDialog
//$ extends java.awt.Window$AccessibleAWTWindow

#include <java/awt/Window$AccessibleAWTWindow.h>

namespace java {
	namespace awt {
		class Dialog;
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

class $export Dialog$AccessibleAWTDialog : public ::java::awt::Window$AccessibleAWTWindow {
	$class(Dialog$AccessibleAWTDialog, $NO_CLASS_INIT, ::java::awt::Window$AccessibleAWTWindow)
public:
	Dialog$AccessibleAWTDialog();
	void init$(::java::awt::Dialog* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::awt::Dialog* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x43214B5BA9B4FCD1;
};

	} // awt
} // java

#endif // _java_awt_Dialog$AccessibleAWTDialog_h_