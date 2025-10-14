#ifndef _javax_accessibility_AccessibleAttributeSequence_h_
#define _javax_accessibility_AccessibleAttributeSequence_h_
//$ class javax.accessibility.AccessibleAttributeSequence
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleAttributeSequence : public ::java::lang::Object {
	$class(AccessibleAttributeSequence, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleAttributeSequence();
	void init$(int32_t start, int32_t end, ::javax::swing::text::AttributeSet* attr);
	int32_t startIndex = 0;
	int32_t endIndex = 0;
	::javax::swing::text::AttributeSet* attributes = nullptr;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleAttributeSequence_h_