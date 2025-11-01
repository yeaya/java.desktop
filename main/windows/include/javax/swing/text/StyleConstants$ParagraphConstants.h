#ifndef _javax_swing_text_StyleConstants$ParagraphConstants_h_
#define _javax_swing_text_StyleConstants$ParagraphConstants_h_
//$ class javax.swing.text.StyleConstants$ParagraphConstants
//$ extends javax.swing.text.StyleConstants
//$ implements javax.swing.text.AttributeSet$ParagraphAttribute

#include <javax/swing/text/AttributeSet$ParagraphAttribute.h>
#include <javax/swing/text/StyleConstants.h>

namespace javax {
	namespace swing {
		namespace text {

class $import StyleConstants$ParagraphConstants : public ::javax::swing::text::StyleConstants, public ::javax::swing::text::AttributeSet$ParagraphAttribute {
	$class(StyleConstants$ParagraphConstants, $NO_CLASS_INIT, ::javax::swing::text::StyleConstants, ::javax::swing::text::AttributeSet$ParagraphAttribute)
public:
	StyleConstants$ParagraphConstants();
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

#endif // _javax_swing_text_StyleConstants$ParagraphConstants_h_