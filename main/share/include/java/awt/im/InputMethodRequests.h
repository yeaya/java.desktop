#ifndef _java_awt_im_InputMethodRequests_h_
#define _java_awt_im_InputMethodRequests_h_
//$ interface java.awt.im.InputMethodRequests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
	}
}

namespace java {
	namespace awt {
		namespace im {

class $import InputMethodRequests : public ::java::lang::Object {
	$interface(InputMethodRequests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::text::AttributedCharacterIterator* cancelLatestCommittedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) {return nullptr;}
	virtual ::java::text::AttributedCharacterIterator* getCommittedText(int32_t beginIndex, int32_t endIndex, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) {return nullptr;}
	virtual int32_t getCommittedTextLength() {return 0;}
	virtual int32_t getInsertPositionOffset() {return 0;}
	virtual ::java::awt::font::TextHitInfo* getLocationOffset(int32_t x, int32_t y) {return nullptr;}
	virtual ::java::text::AttributedCharacterIterator* getSelectedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) {return nullptr;}
	virtual ::java::awt::Rectangle* getTextLocation(::java::awt::font::TextHitInfo* offset) {return nullptr;}
};

		} // im
	} // awt
} // java

#endif // _java_awt_im_InputMethodRequests_h_