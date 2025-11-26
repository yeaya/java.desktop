#ifndef _javax_swing_text_TextLayoutStrategy$AttributedSegment_h_
#define _javax_swing_text_TextLayoutStrategy$AttributedSegment_h_
//$ class javax.swing.text.TextLayoutStrategy$AttributedSegment
//$ extends javax.swing.text.Segment
//$ implements java.text.AttributedCharacterIterator

#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/text/Segment.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class TextLayoutStrategy$AttributedSegment : public ::javax::swing::text::Segment, public ::java::text::AttributedCharacterIterator {
	$class(TextLayoutStrategy$AttributedSegment, 0, ::javax::swing::text::Segment, ::java::text::AttributedCharacterIterator)
public:
	TextLayoutStrategy$AttributedSegment();
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual char16_t first() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual int32_t hashCode() override;
	virtual char16_t last() override;
	void init$();
	virtual ::java::util::Set* getAllAttributeKeys() override;
	virtual $Object* getAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual ::java::util::Map* getAttributes() override;
	virtual ::java::awt::Font* getFont(int32_t childIndex);
	virtual int32_t getFontBoundary(int32_t childIndex, int32_t dir);
	virtual int32_t getRunLimit() override;
	virtual int32_t getRunLimit(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual int32_t getRunLimit(::java::util::Set* attributes) override;
	virtual int32_t getRunStart() override;
	virtual int32_t getRunStart(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual int32_t getRunStart(::java::util::Set* attributes) override;
	virtual ::javax::swing::text::View* getView();
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual char16_t setIndex(int32_t position) override;
	void setShaper(Object$* shaper);
	virtual void setView(::javax::swing::text::View* v);
	virtual int32_t toIteratorIndex(int32_t pos);
	virtual int32_t toModelPosition(int32_t index);
	virtual $String* toString() override;
	::javax::swing::text::View* v = nullptr;
	static ::java::util::Set* keys;
	$Object* shaper = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TextLayoutStrategy$AttributedSegment_h_