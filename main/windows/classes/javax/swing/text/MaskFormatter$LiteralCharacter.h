#ifndef _javax_swing_text_MaskFormatter$LiteralCharacter_h_
#define _javax_swing_text_MaskFormatter$LiteralCharacter_h_
//$ class javax.swing.text.MaskFormatter$LiteralCharacter
//$ extends javax.swing.text.MaskFormatter$MaskCharacter

#include <javax/swing/text/MaskFormatter$MaskCharacter.h>

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

class MaskFormatter$LiteralCharacter : public ::javax::swing::text::MaskFormatter$MaskCharacter {
	$class(MaskFormatter$LiteralCharacter, $NO_CLASS_INIT, ::javax::swing::text::MaskFormatter$MaskCharacter)
public:
	MaskFormatter$LiteralCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0, char16_t fixedChar);
	virtual char16_t getChar(char16_t aChar) override;
	virtual bool isLiteral() override;
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
	char16_t fixedChar = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$LiteralCharacter_h_