#ifndef _javax_swing_text_StyleConstants$ColorConstants_h_
#define _javax_swing_text_StyleConstants$ColorConstants_h_
//$ class javax.swing.text.StyleConstants$ColorConstants
//$ extends javax.swing.text.StyleConstants
//$ implements javax.swing.text.AttributeSet$ColorAttribute,javax.swing.text.AttributeSet$CharacterAttribute

#include <javax/swing/text/AttributeSet$CharacterAttribute.h>
#include <javax/swing/text/AttributeSet$ColorAttribute.h>
#include <javax/swing/text/StyleConstants.h>

namespace javax {
	namespace swing {
		namespace text {

class $import StyleConstants$ColorConstants : public ::javax::swing::text::StyleConstants, public ::javax::swing::text::AttributeSet$ColorAttribute, public ::javax::swing::text::AttributeSet$CharacterAttribute {
	$class(StyleConstants$ColorConstants, $NO_CLASS_INIT, ::javax::swing::text::StyleConstants, ::javax::swing::text::AttributeSet$ColorAttribute, ::javax::swing::text::AttributeSet$CharacterAttribute)
public:
	StyleConstants$ColorConstants();
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

#endif // _javax_swing_text_StyleConstants$ColorConstants_h_