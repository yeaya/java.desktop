#ifndef _javax_swing_text_DocumentFilter$FilterBypass_h_
#define _javax_swing_text_DocumentFilter$FilterBypass_h_
//$ class javax.swing.text.DocumentFilter$FilterBypass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DocumentFilter$FilterBypass : public ::java::lang::Object {
	$class(DocumentFilter$FilterBypass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocumentFilter$FilterBypass();
	void init$();
	virtual ::javax::swing::text::Document* getDocument() {return nullptr;}
	virtual void insertString(int32_t offset, $String* string, ::javax::swing::text::AttributeSet* attr) {}
	virtual void remove(int32_t offset, int32_t length) {}
	virtual void replace(int32_t offset, int32_t length, $String* string, ::javax::swing::text::AttributeSet* attrs) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DocumentFilter$FilterBypass_h_