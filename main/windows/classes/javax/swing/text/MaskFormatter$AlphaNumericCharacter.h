#ifndef _javax_swing_text_MaskFormatter$AlphaNumericCharacter_h_
#define _javax_swing_text_MaskFormatter$AlphaNumericCharacter_h_
//$ class javax.swing.text.MaskFormatter$AlphaNumericCharacter
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

class MaskFormatter$AlphaNumericCharacter : public ::javax::swing::text::MaskFormatter$MaskCharacter {
	$class(MaskFormatter$AlphaNumericCharacter, $NO_CLASS_INIT, ::javax::swing::text::MaskFormatter$MaskCharacter)
public:
	MaskFormatter$AlphaNumericCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0);
	virtual bool isValidCharacter(char16_t aChar) override;
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$AlphaNumericCharacter_h_