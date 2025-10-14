#ifndef _javax_accessibility_AccessibleTextSequence_h_
#define _javax_accessibility_AccessibleTextSequence_h_
//$ class javax.accessibility.AccessibleTextSequence
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {

class $export AccessibleTextSequence : public ::java::lang::Object {
	$class(AccessibleTextSequence, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleTextSequence();
	void init$(int32_t start, int32_t end, $String* txt);
	int32_t startIndex = 0;
	int32_t endIndex = 0;
	$String* text = nullptr;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleTextSequence_h_