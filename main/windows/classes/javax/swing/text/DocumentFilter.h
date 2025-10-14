#ifndef _javax_swing_text_DocumentFilter_h_
#define _javax_swing_text_DocumentFilter_h_
//$ class javax.swing.text.DocumentFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DocumentFilter$FilterBypass;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DocumentFilter : public ::java::lang::Object {
	$class(DocumentFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocumentFilter();
	void init$();
	virtual void insertString(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, ::javax::swing::text::AttributeSet* attr);
	virtual void remove(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length);
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs);
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DocumentFilter_h_