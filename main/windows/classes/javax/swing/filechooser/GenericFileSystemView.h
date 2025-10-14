#ifndef _javax_swing_filechooser_GenericFileSystemView_h_
#define _javax_swing_filechooser_GenericFileSystemView_h_
//$ class javax.swing.filechooser.GenericFileSystemView
//$ extends javax.swing.filechooser.FileSystemView

#include <javax/swing/filechooser/FileSystemView.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class GenericFileSystemView : public ::javax::swing::filechooser::FileSystemView {
	$class(GenericFileSystemView, 0, ::javax::swing::filechooser::FileSystemView)
public:
	GenericFileSystemView();
	void init$();
	virtual ::java::io::File* createNewFolder(::java::io::File* containingDir) override;
	static $String* newFolderString;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_GenericFileSystemView_h_