#ifndef _sun_swing_FilePane$FileChooserUIAccessor_h_
#define _sun_swing_FilePane$FileChooserUIAccessor_h_
//$ interface sun.swing.FilePane$FileChooserUIAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export FilePane$FileChooserUIAccessor : public ::java::lang::Object {
	$interface(FilePane$FileChooserUIAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::JPanel* createDetailsView() {return nullptr;}
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JList* list) {return nullptr;}
	virtual ::javax::swing::JPanel* createList() {return nullptr;}
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener() {return nullptr;}
	virtual ::javax::swing::Action* getApproveSelectionAction() {return nullptr;}
	virtual ::javax::swing::Action* getChangeToParentDirectoryAction() {return nullptr;}
	virtual ::java::io::File* getDirectory() {return nullptr;}
	virtual ::javax::swing::JFileChooser* getFileChooser() {return nullptr;}
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel() {return nullptr;}
	virtual ::javax::swing::Action* getNewFolderAction() {return nullptr;}
	virtual bool isDirectorySelected() {return false;}
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$FileChooserUIAccessor_h_