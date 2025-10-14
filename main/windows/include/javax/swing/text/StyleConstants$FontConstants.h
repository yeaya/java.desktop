#ifndef _javax_swing_text_StyleConstants$FontConstants_h_
#define _javax_swing_text_StyleConstants$FontConstants_h_
//$ class javax.swing.text.StyleConstants$FontConstants
//$ extends javax.swing.text.StyleConstants
//$ implements javax.swing.text.AttributeSet$FontAttribute,javax.swing.text.AttributeSet$CharacterAttribute

#include <javax/swing/text/AttributeSet$CharacterAttribute.h>
#include <javax/swing/text/AttributeSet$FontAttribute.h>
#include <javax/swing/text/StyleConstants.h>

namespace javax {
	namespace swing {
		namespace text {

class $import StyleConstants$FontConstants : public ::javax::swing::text::StyleConstants, public ::javax::swing::text::AttributeSet$FontAttribute, public ::javax::swing::text::AttributeSet$CharacterAttribute {
	$class(StyleConstants$FontConstants, $NO_CLASS_INIT, ::javax::swing::text::StyleConstants, ::javax::swing::text::AttributeSet$FontAttribute, ::javax::swing::text::AttributeSet$CharacterAttribute)
public:
	StyleConstants$FontConstants();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _javax_swing_text_StyleConstants$FontConstants_h_