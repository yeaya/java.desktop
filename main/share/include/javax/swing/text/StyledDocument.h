#ifndef _javax_swing_text_StyledDocument_h_
#define _javax_swing_text_StyledDocument_h_
//$ interface javax.swing.text.StyledDocument
//$ extends javax.swing.text.Document

#include <javax/swing/text/Document.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Style;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyledDocument : public ::javax::swing::text::Document {
	$interface(StyledDocument, $NO_CLASS_INIT, ::javax::swing::text::Document)
public:
	virtual ::javax::swing::text::Style* addStyle($String* nm, ::javax::swing::text::Style* parent) {return nullptr;}
	virtual ::java::awt::Color* getBackground(::javax::swing::text::AttributeSet* attr) {return nullptr;}
	virtual ::javax::swing::text::Element* getCharacterElement(int32_t pos) {return nullptr;}
	virtual ::java::awt::Font* getFont(::javax::swing::text::AttributeSet* attr) {return nullptr;}
	virtual ::java::awt::Color* getForeground(::javax::swing::text::AttributeSet* attr) {return nullptr;}
	virtual ::javax::swing::text::Style* getLogicalStyle(int32_t p) {return nullptr;}
	virtual ::javax::swing::text::Element* getParagraphElement(int32_t pos) {return nullptr;}
	virtual ::javax::swing::text::Style* getStyle($String* nm) {return nullptr;}
	virtual void removeStyle($String* nm) {}
	virtual void setCharacterAttributes(int32_t offset, int32_t length, ::javax::swing::text::AttributeSet* s, bool replace) {}
	virtual void setLogicalStyle(int32_t pos, ::javax::swing::text::Style* s) {}
	virtual void setParagraphAttributes(int32_t offset, int32_t length, ::javax::swing::text::AttributeSet* s, bool replace) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledDocument_h_