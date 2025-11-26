#ifndef _javax_swing_text_MaskFormatter$LowerCaseCharacter_h_
#define _javax_swing_text_MaskFormatter$LowerCaseCharacter_h_
//$ class javax.swing.text.MaskFormatter$LowerCaseCharacter
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

class MaskFormatter$LowerCaseCharacter : public ::javax::swing::text::MaskFormatter$MaskCharacter {
	$class(MaskFormatter$LowerCaseCharacter, $NO_CLASS_INIT, ::javax::swing::text::MaskFormatter$MaskCharacter)
public:
	MaskFormatter$LowerCaseCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0);
	virtual char16_t getChar(char16_t aChar) override;
	virtual bool isValidCharacter(char16_t aChar) override;
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$LowerCaseCharacter_h_