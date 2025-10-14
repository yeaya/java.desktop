#ifndef _javax_accessibility_AccessibleText_h_
#define _javax_accessibility_AccessibleText_h_
//$ interface javax.accessibility.AccessibleText
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHARACTER")
#undef CHARACTER
#pragma push_macro("SENTENCE")
#undef SENTENCE
#pragma push_macro("WORD")
#undef WORD

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleText : public ::java::lang::Object {
	$interface(AccessibleText, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getAfterIndex(int32_t part, int32_t index) {return nullptr;}
	virtual $String* getAtIndex(int32_t part, int32_t index) {return nullptr;}
	virtual $String* getBeforeIndex(int32_t part, int32_t index) {return nullptr;}
	virtual int32_t getCaretPosition() {return 0;}
	virtual int32_t getCharCount() {return 0;}
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) {return nullptr;}
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) {return nullptr;}
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) {return 0;}
	virtual $String* getSelectedText() {return nullptr;}
	virtual int32_t getSelectionEnd() {return 0;}
	virtual int32_t getSelectionStart() {return 0;}
	static const int32_t CHARACTER = 1;
	static const int32_t WORD = 2;
	static const int32_t SENTENCE = 3;
};

	} // accessibility
} // javax

#pragma pop_macro("CHARACTER")
#pragma pop_macro("SENTENCE")
#pragma pop_macro("WORD")

#endif // _javax_accessibility_AccessibleText_h_