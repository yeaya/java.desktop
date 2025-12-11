#ifndef _com_apple_laf_AquaFileChooserUI$OpenDirOrAnyPanel_h_
#define _com_apple_laf_AquaFileChooserUI$OpenDirOrAnyPanel_h_
//$ class com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel
//$ extends com.apple.laf.AquaFileChooserUI$DirOrAnyPanel

#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>

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
		class JComponent;
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$OpenDirOrAnyPanel : public ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel {
	$class(AquaFileChooserUI$OpenDirOrAnyPanel, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel)
public:
	AquaFileChooserUI$OpenDirOrAnyPanel();
	using ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel::getApproveButtonToolTipText;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual int32_t getApproveButtonMnemonic(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JComponent* getFocusComponent(::javax::swing::JFileChooser* fc) override;
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) override;
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$OpenDirOrAnyPanel_h_