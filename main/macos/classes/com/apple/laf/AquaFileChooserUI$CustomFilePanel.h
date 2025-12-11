#ifndef _com_apple_laf_AquaFileChooserUI$CustomFilePanel_h_
#define _com_apple_laf_AquaFileChooserUI$CustomFilePanel_h_
//$ class com.apple.laf.AquaFileChooserUI$CustomFilePanel
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
		class JFileChooser;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$CustomFilePanel : public ::com::apple::laf::AquaFileChooserUI$FCSubpanel {
	$class(AquaFileChooserUI$CustomFilePanel, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$FCSubpanel)
public:
	AquaFileChooserUI$CustomFilePanel();
	using ::com::apple::laf::AquaFileChooserUI$FCSubpanel::getApproveButtonToolTipText;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void approveSelection(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc) override;
	virtual bool inOpenDirectoryMode(::javax::swing::JFileChooser* fc, ::java::io::File* f);
	virtual void installPanel(::javax::swing::JFileChooser* fc, bool controlButtonsAreShown) override;
	virtual bool isSelectableInList(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	virtual void updateButtonState(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$CustomFilePanel_h_