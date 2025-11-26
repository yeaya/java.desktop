#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$SynthFileChooserUIAccessor
//$ extends sun.swing.FilePane$FileChooserUIAccessor

#include <sun/swing/FilePane$FileChooserUIAccessor.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
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
		class Action;
		class JFileChooser;
		class JList;
		class JPanel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
			}
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$SynthFileChooserUIAccessor : public ::sun::swing::FilePane$FileChooserUIAccessor {
	$class(SynthFileChooserUIImpl$SynthFileChooserUIAccessor, $NO_CLASS_INIT, ::sun::swing::FilePane$FileChooserUIAccessor)
public:
	SynthFileChooserUIImpl$SynthFileChooserUIAccessor();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual ::javax::swing::JPanel* createDetailsView() override;
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JList* list) override;
	virtual ::javax::swing::JPanel* createList() override;
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener() override;
	virtual ::javax::swing::Action* getApproveSelectionAction() override;
	virtual ::javax::swing::Action* getChangeToParentDirectoryAction() override;
	virtual ::java::io::File* getDirectory() override;
	virtual ::javax::swing::JFileChooser* getFileChooser() override;
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel() override;
	virtual ::javax::swing::Action* getNewFolderAction() override;
	virtual bool isDirectorySelected() override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$SynthFileChooserUIAccessor_h_