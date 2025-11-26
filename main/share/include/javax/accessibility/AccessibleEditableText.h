#ifndef _javax_accessibility_AccessibleEditableText_h_
#define _javax_accessibility_AccessibleEditableText_h_
//$ interface javax.accessibility.AccessibleEditableText
//$ extends javax.accessibility.AccessibleText

#include <javax/accessibility/AccessibleText.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleEditableText : public ::javax::accessibility::AccessibleText {
	$interface(AccessibleEditableText, $NO_CLASS_INIT, ::javax::accessibility::AccessibleText)
public:
	virtual void cut(int32_t startIndex, int32_t endIndex) {}
	virtual void delete$(int32_t startIndex, int32_t endIndex) {}
	virtual $String* getTextRange(int32_t startIndex, int32_t endIndex) {return nullptr;}
	virtual void insertTextAtIndex(int32_t index, $String* s) {}
	virtual void paste(int32_t startIndex) {}
	virtual void replaceText(int32_t startIndex, int32_t endIndex, $String* s) {}
	virtual void selectText(int32_t startIndex, int32_t endIndex) {}
	virtual void setAttributes(int32_t startIndex, int32_t endIndex, ::javax::swing::text::AttributeSet* as) {}
	virtual void setTextContents($String* s) {}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleEditableText_h_