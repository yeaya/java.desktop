#ifndef _com_apple_laf_AquaTextPasswordFieldUI$AquaPasswordView_h_
#define _com_apple_laf_AquaTextPasswordFieldUI$AquaPasswordView_h_
//$ class com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView
//$ extends javax.swing.text.PasswordView

#include <javax/swing/text/PasswordView.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTextPasswordFieldUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextPasswordFieldUI$AquaPasswordView : public ::javax::swing::text::PasswordView {
	$class(AquaTextPasswordFieldUI$AquaPasswordView, $NO_CLASS_INIT, ::javax::swing::text::PasswordView)
public:
	AquaTextPasswordFieldUI$AquaPasswordView();
	void init$(::com::apple::laf::AquaTextPasswordFieldUI* this$0, ::javax::swing::text::Element* elem);
	using ::javax::swing::text::PasswordView::modelToView;
	virtual void setupDefaultEchoCharacter();
	using ::javax::swing::text::PasswordView::viewToModel;
	::com::apple::laf::AquaTextPasswordFieldUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextPasswordFieldUI$AquaPasswordView_h_