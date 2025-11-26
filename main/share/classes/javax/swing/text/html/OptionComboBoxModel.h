#ifndef _javax_swing_text_html_OptionComboBoxModel_h_
#define _javax_swing_text_html_OptionComboBoxModel_h_
//$ class javax.swing.text.html.OptionComboBoxModel
//$ extends javax.swing.DefaultComboBoxModel

#include <javax/swing/DefaultComboBoxModel.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class Option;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class OptionComboBoxModel : public ::javax::swing::DefaultComboBoxModel {
	$class(OptionComboBoxModel, $NO_CLASS_INIT, ::javax::swing::DefaultComboBoxModel)
public:
	OptionComboBoxModel();
	void init$();
	virtual ::javax::swing::text::html::Option* getInitialSelection();
	virtual void setInitialSelection(::javax::swing::text::html::Option* option);
	::javax::swing::text::html::Option* selectedOption = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_OptionComboBoxModel_h_