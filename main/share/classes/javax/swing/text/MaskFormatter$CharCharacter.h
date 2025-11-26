#ifndef _javax_swing_text_MaskFormatter$CharCharacter_h_
#define _javax_swing_text_MaskFormatter$CharCharacter_h_
//$ class javax.swing.text.MaskFormatter$CharCharacter
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

class MaskFormatter$CharCharacter : public ::javax::swing::text::MaskFormatter$MaskCharacter {
	$class(MaskFormatter$CharCharacter, $NO_CLASS_INIT, ::javax::swing::text::MaskFormatter$MaskCharacter)
public:
	MaskFormatter$CharCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0);
	virtual bool isValidCharacter(char16_t aChar) override;
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$CharCharacter_h_