#ifndef _javax_accessibility_AccessibleExtendedText_h_
#define _javax_accessibility_AccessibleExtendedText_h_
//$ interface javax.accessibility.AccessibleExtendedText
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTRIBUTE_RUN")
#undef ATTRIBUTE_RUN
#pragma push_macro("LINE")
#undef LINE

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleTextSequence;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleExtendedText : public ::java::lang::Object {
	$interface(AccessibleExtendedText, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Rectangle* getTextBounds(int32_t startIndex, int32_t endIndex) {return nullptr;}
	virtual $String* getTextRange(int32_t startIndex, int32_t endIndex) {return nullptr;}
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAfter(int32_t part, int32_t index) {return nullptr;}
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceAt(int32_t part, int32_t index) {return nullptr;}
	virtual ::javax::accessibility::AccessibleTextSequence* getTextSequenceBefore(int32_t part, int32_t index) {return nullptr;}
	static const int32_t LINE = 4;
	static const int32_t ATTRIBUTE_RUN = 5;
};

	} // accessibility
} // javax

#pragma pop_macro("ATTRIBUTE_RUN")
#pragma pop_macro("LINE")

#endif // _javax_accessibility_AccessibleExtendedText_h_