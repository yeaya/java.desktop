#ifndef _java_awt_ScrollPane$AccessibleAWTScrollPane_h_
#define _java_awt_ScrollPane$AccessibleAWTScrollPane_h_
//$ class java.awt.ScrollPane$AccessibleAWTScrollPane
//$ extends java.awt.Container$AccessibleAWTContainer

#include <java/awt/Container$AccessibleAWTContainer.h>

namespace java {
	namespace awt {
		class ScrollPane;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $export ScrollPane$AccessibleAWTScrollPane : public ::java::awt::Container$AccessibleAWTContainer {
	$class(ScrollPane$AccessibleAWTScrollPane, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer)
public:
	ScrollPane$AccessibleAWTScrollPane();
	void init$(::java::awt::ScrollPane* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::ScrollPane* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0015AC8EC2C4112D;
};

	} // awt
} // java

#endif // _java_awt_ScrollPane$AccessibleAWTScrollPane_h_