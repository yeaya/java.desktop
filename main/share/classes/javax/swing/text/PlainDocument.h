#ifndef _javax_swing_text_PlainDocument_h_
#define _javax_swing_text_PlainDocument_h_
//$ class javax.swing.text.PlainDocument
//$ extends javax.swing.text.AbstractDocument

#include <javax/swing/text/AbstractDocument.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AbstractElement;
			class AbstractDocument$Content;
			class AbstractDocument$DefaultDocumentEvent;
			class AttributeSet;
			class Element;
			class Segment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export PlainDocument : public ::javax::swing::text::AbstractDocument {
	$class(PlainDocument, 0, ::javax::swing::text::AbstractDocument)
public:
	PlainDocument();
	void init$();
	void init$(::javax::swing::text::AbstractDocument$Content* c);
	virtual ::javax::swing::text::AbstractDocument$AbstractElement* createDefaultRoot();
	virtual ::javax::swing::text::Element* getDefaultRootElement() override;
	virtual ::javax::swing::text::Element* getParagraphElement(int32_t pos) override;
	void insertComposedTextUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng, ::javax::swing::text::AttributeSet* attr);
	virtual void insertString(int32_t offs, $String* str, ::javax::swing::text::AttributeSet* a) override;
	virtual void insertUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng, ::javax::swing::text::AttributeSet* attr) override;
	virtual void removeUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng) override;
	static $String* tabSizeAttribute;
	static $String* lineLimitAttribute;
	::javax::swing::text::AbstractDocument$AbstractElement* defaultRoot = nullptr;
	::java::util::Vector* added = nullptr;
	::java::util::Vector* removed = nullptr;
	::javax::swing::text::Segment* s = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_PlainDocument_h_