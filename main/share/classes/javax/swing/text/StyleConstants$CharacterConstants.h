#ifndef _javax_swing_text_StyleConstants$CharacterConstants_h_
#define _javax_swing_text_StyleConstants$CharacterConstants_h_
//$ class javax.swing.text.StyleConstants$CharacterConstants
//$ extends javax.swing.text.StyleConstants
//$ implements javax.swing.text.AttributeSet$CharacterAttribute

#include <javax/swing/text/AttributeSet$CharacterAttribute.h>
#include <javax/swing/text/StyleConstants.h>

namespace javax {
	namespace swing {
		namespace text {

class $export StyleConstants$CharacterConstants : public ::javax::swing::text::StyleConstants, public ::javax::swing::text::AttributeSet$CharacterAttribute {
	$class(StyleConstants$CharacterConstants, $NO_CLASS_INIT, ::javax::swing::text::StyleConstants, ::javax::swing::text::AttributeSet$CharacterAttribute)
public:
	StyleConstants$CharacterConstants();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* representation);
	virtual $String* toString() override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleConstants$CharacterConstants_h_