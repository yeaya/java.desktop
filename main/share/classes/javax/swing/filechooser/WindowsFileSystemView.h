#ifndef _javax_swing_filechooser_WindowsFileSystemView_h_
#define _javax_swing_filechooser_WindowsFileSystemView_h_
//$ class javax.swing.filechooser.WindowsFileSystemView
//$ extends javax.swing.filechooser.FileSystemView

#include <javax/swing/filechooser/FileSystemView.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class WindowsFileSystemView : public ::javax::swing::filechooser::FileSystemView {
	$class(WindowsFileSystemView, 0, ::javax::swing::filechooser::FileSystemView)
public:
	WindowsFileSystemView();
	using ::javax::swing::filechooser::FileSystemView::createFileObject;
	void init$();
	virtual ::java::io::File* createFileObject($String* path) override;
	virtual ::java::io::File* createFileSystemRoot(::java::io::File* f) override;
	virtual ::java::io::File* createNewFolder(::java::io::File* containingDir) override;
	virtual ::java::io::File* getChild(::java::io::File* parent, $String* fileName) override;
	virtual ::java::io::File* getHomeDirectory() override;
	virtual $String* getSystemTypeDescription(::java::io::File* f) override;
	virtual bool isDrive(::java::io::File* dir) override;
	virtual bool isFloppyDrive(::java::io::File* dir) override;
	virtual ::java::lang::Boolean* isTraversable(::java::io::File* f) override;
	static $String* newFolderString;
	static $String* newFolderNextString;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_WindowsFileSystemView_h_