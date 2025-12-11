#ifndef _sun_lwawt_macosx_CAccessibleText_h_
#define _sun_lwawt_macosx_CAccessibleText_h_
//$ class sun.lwawt.macosx.CAccessibleText
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleEditableText;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibleText : public ::java::lang::Object {
	$class(CAccessibleText, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CAccessibleText();
	void init$();
	static ::javax::accessibility::AccessibleEditableText* getAccessibleEditableText(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $doubles* getBoundsForRange(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t location, int32_t length);
	static int32_t getCharacterIndexAtPosition(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t x, int32_t y);
	static int32_t getLineNumberForIndex(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t index);
	static int32_t getLineNumberForIndex(::javax::accessibility::Accessible* a, int32_t index);
	static int32_t getLineNumberForInsertionPoint(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static int32_t getLineNumberForInsertionPoint(::javax::accessibility::Accessible* a);
	static $ints* getRangeForIndex(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t index);
	static $ints* getRangeForLine(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t line);
	static $ints* getRangeForLine(::javax::accessibility::Accessible* a, int32_t lineIndex);
	static $String* getSelectedText(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $ints* getSelectedTextRange(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getStringForRange(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t location, int32_t length);
	static $String* getTextRange(::javax::accessibility::AccessibleEditableText* aet, int32_t start, int32_t stop, ::java::awt::Component* c);
	static $ints* getVisibleCharacterRange(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $ints* getVisibleCharacterRange(::javax::accessibility::Accessible* a);
	static void setSelectedText(::javax::accessibility::Accessible* a, ::java::awt::Component* c, $String* newText);
	static void setSelectedTextRange(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t startIndex, int32_t endIndex);
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText_h_