#ifndef _javax_swing_text_MutableAttributeSet_h_
#define _javax_swing_text_MutableAttributeSet_h_
//$ interface javax.swing.text.MutableAttributeSet
//$ extends javax.swing.text.AttributeSet

#include <javax/swing/text/AttributeSet.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import MutableAttributeSet : public ::javax::swing::text::AttributeSet {
	$interface(MutableAttributeSet, $NO_CLASS_INIT, ::javax::swing::text::AttributeSet)
public:
	virtual void addAttribute(Object$* name, Object$* value) {}
	virtual void addAttributes(::javax::swing::text::AttributeSet* attributes) {}
	virtual void removeAttribute(Object$* name) {}
	virtual void removeAttributes(::java::util::Enumeration* names) {}
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attributes) {}
	virtual void setResolveParent(::javax::swing::text::AttributeSet* parent) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MutableAttributeSet_h_