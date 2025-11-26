#ifndef _javax_swing_filechooser_UnixFileSystemView_h_
#define _javax_swing_filechooser_UnixFileSystemView_h_
//$ class javax.swing.filechooser.UnixFileSystemView
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

class UnixFileSystemView : public ::javax::swing::filechooser::FileSystemView {
	$class(UnixFileSystemView, 0, ::javax::swing::filechooser::FileSystemView)
public:
	UnixFileSystemView();
	void init$();
	virtual ::java::io::File* createNewFolder(::java::io::File* containingDir) override;
	virtual bool isComputerNode(::java::io::File* dir) override;
	virtual bool isDrive(::java::io::File* dir) override;
	virtual bool isFileSystemRoot(::java::io::File* dir) override;
	virtual bool isFloppyDrive(::java::io::File* dir) override;
	static $String* newFolderString;
	static $String* newFolderNextString;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_UnixFileSystemView_h_