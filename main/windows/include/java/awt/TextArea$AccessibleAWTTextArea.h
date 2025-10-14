#ifndef _java_awt_TextArea$AccessibleAWTTextArea_h_
#define _java_awt_TextArea$AccessibleAWTTextArea_h_
//$ class java.awt.TextArea$AccessibleAWTTextArea
//$ extends java.awt.TextComponent$AccessibleAWTTextComponent

#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>

namespace java {
	namespace awt {
		class TextArea;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import TextArea$AccessibleAWTTextArea : public ::java::awt::TextComponent$AccessibleAWTTextComponent {
	$class(TextArea$AccessibleAWTTextArea, $NO_CLASS_INIT, ::java::awt::TextComponent$AccessibleAWTTextComponent)
public:
	TextArea$AccessibleAWTTextArea();
	void init$(::java::awt::TextArea* this$0);
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::awt::TextArea* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x3031F68179AFD823;
};

	} // awt
} // java

#endif // _java_awt_TextArea$AccessibleAWTTextArea_h_