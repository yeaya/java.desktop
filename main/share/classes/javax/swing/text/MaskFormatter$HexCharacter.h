#ifndef _javax_swing_text_MaskFormatter$HexCharacter_h_
#define _javax_swing_text_MaskFormatter$HexCharacter_h_
//$ class javax.swing.text.MaskFormatter$HexCharacter
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

class MaskFormatter$HexCharacter : public ::javax::swing::text::MaskFormatter$MaskCharacter {
	$class(MaskFormatter$HexCharacter, $NO_CLASS_INIT, ::javax::swing::text::MaskFormatter$MaskCharacter)
public:
	MaskFormatter$HexCharacter();
	void init$(::javax::swing::text::MaskFormatter* this$0);
	virtual char16_t getChar(char16_t aChar) override;
	virtual bool isValidCharacter(char16_t aChar) override;
	::javax::swing::text::MaskFormatter* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_MaskFormatter$HexCharacter_h_