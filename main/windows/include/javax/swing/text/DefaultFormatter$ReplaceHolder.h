#ifndef _javax_swing_text_DefaultFormatter$ReplaceHolder_h_
#define _javax_swing_text_DefaultFormatter$ReplaceHolder_h_
//$ class javax.swing.text.DefaultFormatter$ReplaceHolder
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

class $import DefaultFormatter$ReplaceHolder : public ::java::lang::Object {
	$class(DefaultFormatter$ReplaceHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultFormatter$ReplaceHolder();
	void init$();
	virtual void reset(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs);
	::javax::swing::text::DocumentFilter$FilterBypass* fb = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	$String* text = nullptr;
	::javax::swing::text::AttributeSet* attrs = nullptr;
	$Object* value = nullptr;
	int32_t cursorPosition = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultFormatter$ReplaceHolder_h_