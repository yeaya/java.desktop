#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$MetalFileChooserUIAccessor_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$MetalFileChooserUIAccessor_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$MetalFileChooserUIAccessor
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$MetalFileChooserUIAccessor : public ::sun::swing::FilePane$FileChooserUIAccessor {
	$class(MetalFileChooserUI$MetalFileChooserUIAccessor, $NO_CLASS_INIT, ::sun::swing::FilePane$FileChooserUIAccessor)
public:
	MetalFileChooserUI$MetalFileChooserUIAccessor();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
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
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$MetalFileChooserUIAccessor_h_