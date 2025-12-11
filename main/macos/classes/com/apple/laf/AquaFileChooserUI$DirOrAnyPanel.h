#ifndef _com_apple_laf_AquaFileChooserUI$DirOrAnyPanel_h_
#define _com_apple_laf_AquaFileChooserUI$DirOrAnyPanel_h_
//$ class com.apple.laf.AquaFileChooserUI$DirOrAnyPanel
//$ extends com.apple.laf.AquaFileChooserUI$FCSubpanel

#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>

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
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$DirOrAnyPanel : public ::com::apple::laf::AquaFileChooserUI$FCSubpanel {
	$class(AquaFileChooserUI$DirOrAnyPanel, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$FCSubpanel)
public:
	AquaFileChooserUI$DirOrAnyPanel();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual ::javax::swing::JButton* getDefaultButton(::javax::swing::JFileChooser* fc) override;
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) override;
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DirOrAnyPanel_h_