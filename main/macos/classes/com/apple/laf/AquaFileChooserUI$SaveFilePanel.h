#ifndef _com_apple_laf_AquaFileChooserUI$SaveFilePanel_h_
#define _com_apple_laf_AquaFileChooserUI$SaveFilePanel_h_
//$ class com.apple.laf.AquaFileChooserUI$SaveFilePanel
//$ extends com.apple.laf.AquaFileChooserUI$CustomFilePanel

#include <com/apple/laf/AquaFileChooserUI$CustomFilePanel.h>

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
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$SaveFilePanel : public ::com::apple::laf::AquaFileChooserUI$CustomFilePanel {
	$class(AquaFileChooserUI$SaveFilePanel, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$CustomFilePanel)
public:
	AquaFileChooserUI$SaveFilePanel();
	using ::com::apple::laf::AquaFileChooserUI$CustomFilePanel::getApproveButtonText;
	using ::com::apple::laf::AquaFileChooserUI$CustomFilePanel::getApproveButtonToolTipText;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void approveSelection(::javax::swing::JFileChooser* fc) override;
	virtual int32_t getApproveButtonMnemonic(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc) override;
	virtual $String* getCancelButtonToolTipText(::javax::swing::JFileChooser* fc) override;
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) override;
	virtual bool isSelectableInList(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$SaveFilePanel_h_