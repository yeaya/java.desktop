#ifndef _com_apple_laf_AquaFileChooserUI$CustomDirOrAnyPanel_h_
#define _com_apple_laf_AquaFileChooserUI$CustomDirOrAnyPanel_h_
//$ class com.apple.laf.AquaFileChooserUI$CustomDirOrAnyPanel
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
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$CustomDirOrAnyPanel : public ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel {
	$class(AquaFileChooserUI$CustomDirOrAnyPanel, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel)
public:
	AquaFileChooserUI$CustomDirOrAnyPanel();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void approveSelection(::javax::swing::JFileChooser* fc) override;
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) override;
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$CustomDirOrAnyPanel_h_