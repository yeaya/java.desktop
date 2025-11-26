#ifndef _javax_swing_text_AbstractDocument$DefaultFilterBypass_h_
#define _javax_swing_text_AbstractDocument$DefaultFilterBypass_h_
//$ class javax.swing.text.AbstractDocument$DefaultFilterBypass
//$ extends javax.swing.text.DocumentFilter$FilterBypass

#include <javax/swing/text/DocumentFilter$FilterBypass.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
			class AttributeSet;
			class Document;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class AbstractDocument$DefaultFilterBypass : public ::javax::swing::text::DocumentFilter$FilterBypass {
	$class(AbstractDocument$DefaultFilterBypass, $NO_CLASS_INIT, ::javax::swing::text::DocumentFilter$FilterBypass)
public:
	AbstractDocument$DefaultFilterBypass();
	void init$(::javax::swing::text::AbstractDocument* this$0);
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual void insertString(int32_t offset, $String* string, ::javax::swing::text::AttributeSet* attr) override;
	virtual void remove(int32_t offset, int32_t length) override;
	virtual void replace(int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs) override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$DefaultFilterBypass_h_