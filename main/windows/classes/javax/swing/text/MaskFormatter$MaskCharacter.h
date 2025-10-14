#ifndef _javax_swing_text_MaskFormatter$MaskCharacter_h_
#define _javax_swing_text_MaskFormatter$MaskCharacter_h_
//$ class javax.swing.text.MaskFormatter$MaskCharacter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class MaskFormatter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class MaskFormatter$MaskCharacter : public ::java::lang::Object {
	$class(MaskFormatter$MaskCharacter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MaskFormatter$MaskCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0);
	virtual void append(::java::lang::StringBuilder* buff, $String* formatting, $ints* index, $String* placeholder);
	virtual char16_t getChar(char16_t aChar);
	virtual bool isLiteral();
	virtual bool isValidCharacter(char16_t aChar);
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$MaskCharacter_h_