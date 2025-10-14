#ifndef _javax_swing_text_StyledEditorKit$1_h_
#define _javax_swing_text_StyledEditorKit$1_h_
//$ class javax.swing.text.StyledEditorKit$1
//$ extends javax.swing.text.SimpleAttributeSet

#include <javax/swing/text/SimpleAttributeSet.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyledEditorKit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class StyledEditorKit$1 : public ::javax::swing::text::SimpleAttributeSet {
	$class(StyledEditorKit$1, $NO_CLASS_INIT, ::javax::swing::text::SimpleAttributeSet)
public:
	StyledEditorKit$1();
	void init$(::javax::swing::text::StyledEditorKit* this$0);
	virtual $Object* clone() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	::javax::swing::text::StyledEditorKit* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$1_h_