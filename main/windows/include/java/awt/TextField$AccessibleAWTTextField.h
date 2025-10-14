#ifndef _java_awt_TextField$AccessibleAWTTextField_h_
#define _java_awt_TextField$AccessibleAWTTextField_h_
//$ class java.awt.TextField$AccessibleAWTTextField
//$ extends java.awt.TextComponent$AccessibleAWTTextComponent

#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>

namespace java {
	namespace awt {
		class TextField;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import TextField$AccessibleAWTTextField : public ::java::awt::TextComponent$AccessibleAWTTextComponent {
	$class(TextField$AccessibleAWTTextField, $NO_CLASS_INIT, ::java::awt::TextComponent$AccessibleAWTTextComponent)
public:
	TextField$AccessibleAWTTextField();
	void init$(::java::awt::TextField* this$0);
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::awt::TextField* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x564EE908C0073AF6;
};

	} // awt
} // java

#endif // _java_awt_TextField$AccessibleAWTTextField_h_