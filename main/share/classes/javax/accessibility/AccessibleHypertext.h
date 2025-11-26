#ifndef _javax_accessibility_AccessibleHypertext_h_
#define _javax_accessibility_AccessibleHypertext_h_
//$ interface javax.accessibility.AccessibleHypertext
//$ extends javax.accessibility.AccessibleText

#include <javax/accessibility/AccessibleText.h>

namespace javax {
	namespace accessibility {
		class AccessibleHyperlink;
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleHypertext : public ::javax::accessibility::AccessibleText {
	$interface(AccessibleHypertext, $NO_CLASS_INIT, ::javax::accessibility::AccessibleText)
public:
	virtual ::javax::accessibility::AccessibleHyperlink* getLink(int32_t linkIndex) {return nullptr;}
	virtual int32_t getLinkCount() {return 0;}
	virtual int32_t getLinkIndex(int32_t charIndex) {return 0;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleHypertext_h_