#ifndef _com_apple_laf_AquaFileChooserUI$FCSubpanel_h_
#define _com_apple_laf_AquaFileChooserUI$FCSubpanel_h_
//$ class com.apple.laf.AquaFileChooserUI$FCSubpanel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$FCSubpanel : public ::java::lang::Object {
	$class(AquaFileChooserUI$FCSubpanel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaFileChooserUI$FCSubpanel();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void approveSelection(::javax::swing::JFileChooser* fc);
	virtual int32_t getApproveButtonMnemonic(::javax::swing::JFileChooser* fc);
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc);
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc, $String* fallbackText);
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc);
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc, $String* fallbackText);
	virtual $String* getCancelButtonToolTipText(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::JButton* getDefaultButton(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::JComponent* getFocusComponent(::javax::swing::JFileChooser* fc);
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) {}
	virtual bool isSelectableInList(::javax::swing::JFileChooser* fc, ::java::io::File* f);
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) {}
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$FCSubpanel_h_