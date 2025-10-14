#ifndef _java_awt_font_StyledParagraph_h_
#define _java_awt_font_StyledParagraph_h_
//$ class java.awt.font.StyledParagraph
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE

namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Map;
		class Vector;
	}
}
namespace sun {
	namespace font {
		class Decoration;
	}
}

namespace java {
	namespace awt {
		namespace font {

class StyledParagraph : public ::java::lang::Object {
	$class(StyledParagraph, 0, ::java::lang::Object)
public:
	StyledParagraph();
	void init$(::java::text::AttributedCharacterIterator* aci, $chars* chars);
	void addDecoration(::sun::font::Decoration* d, int32_t index);
	void addFont(Object$* f, int32_t index);
	void addFonts($chars* chars, ::java::util::Map* attributes, int32_t start, int32_t limit);
	static ::java::util::Map* addInputMethodAttrs(::java::util::Map* oldStyles);
	static $ints* addToVector(Object$* obj, int32_t index, ::java::util::Vector* v, $ints* starts);
	static ::java::awt::font::StyledParagraph* deleteChar(::java::text::AttributedCharacterIterator* aci, $chars* chars, int32_t deletePos, ::java::awt::font::StyledParagraph* oldParagraph);
	static void deleteFrom(int32_t deleteAt, $ints* starts, int32_t numStarts);
	static int32_t findRunContaining(int32_t index, $ints* starts);
	::sun::font::Decoration* getDecorationAt(int32_t index);
	$Object* getFontOrGraphicAt(int32_t index);
	static $Object* getGraphicOrFont(::java::util::Map* attributes);
	int32_t getRunLimit(int32_t index);
	static ::java::awt::font::StyledParagraph* insertChar(::java::text::AttributedCharacterIterator* aci, $chars* chars, int32_t insertPos, ::java::awt::font::StyledParagraph* oldParagraph);
	static void insertInto(int32_t pos, $ints* starts, int32_t numStarts);
	int32_t length = 0;
	::sun::font::Decoration* decoration = nullptr;
	$Object* font = nullptr;
	::java::util::Vector* decorations = nullptr;
	$ints* decorationStarts = nullptr;
	::java::util::Vector* fonts = nullptr;
	$ints* fontStarts = nullptr;
	static int32_t INITIAL_SIZE;
};

		} // font
	} // awt
} // java

#pragma pop_macro("INITIAL_SIZE")

#endif // _java_awt_font_StyledParagraph_h_