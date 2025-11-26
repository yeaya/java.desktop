#ifndef _javax_swing_plaf_FileChooserUI_h_
#define _javax_swing_plaf_FileChooserUI_h_
//$ class javax.swing.plaf.FileChooserUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

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
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
			class FileView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export FileChooserUI : public ::javax::swing::plaf::ComponentUI {
	$class(FileChooserUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	FileChooserUI();
	void init$();
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) {}
	virtual ::javax::swing::filechooser::FileFilter* getAcceptAllFileFilter(::javax::swing::JFileChooser* fc) {return nullptr;}
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc) {return nullptr;}
	virtual ::javax::swing::JButton* getDefaultButton(::javax::swing::JFileChooser* fc);
	virtual $String* getDialogTitle(::javax::swing::JFileChooser* fc) {return nullptr;}
	virtual ::javax::swing::filechooser::FileView* getFileView(::javax::swing::JFileChooser* fc) {return nullptr;}
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) {}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_FileChooserUI_h_