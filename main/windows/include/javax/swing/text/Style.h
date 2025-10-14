#ifndef _javax_swing_text_Style_h_
#define _javax_swing_text_Style_h_
//$ interface javax.swing.text.Style
//$ extends javax.swing.text.MutableAttributeSet

#include <javax/swing/text/MutableAttributeSet.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Style : public ::javax::swing::text::MutableAttributeSet {
	$interface(Style, $NO_CLASS_INIT, ::javax::swing::text::MutableAttributeSet)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual $String* getName() {return nullptr;}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Style_h_