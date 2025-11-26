#ifndef _VirtualFileSystemView_h_
#define _VirtualFileSystemView_h_
//$ class VirtualFileSystemView
//$ extends javax.swing.filechooser.FileSystemView

#include <java/lang/Array.h>
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

class VirtualFileSystemView : public ::javax::swing::filechooser::FileSystemView {
	$class(VirtualFileSystemView, $NO_CLASS_INIT, ::javax::swing::filechooser::FileSystemView)
public:
	VirtualFileSystemView();
	void init$();
	virtual ::java::io::File* createNewFolder(::java::io::File* dir) override;
	virtual ::java::io::File* getDefaultDirectory() override;
	virtual $Array<::java::io::File>* getFiles(::java::io::File* dir, bool hide_hidden) override;
	virtual ::java::io::File* getHomeDirectory() override;
	virtual ::java::io::File* getParentDirectory(::java::io::File* dir) override;
	virtual $Array<::java::io::File>* getRoots() override;
	virtual $String* getSystemDisplayName(::java::io::File* file) override;
	virtual bool isDrive(::java::io::File* dir) override;
	virtual bool isFloppyDrive(::java::io::File* dir) override;
	virtual bool isRoot(::java::io::File* dir) override;
	virtual ::java::lang::Boolean* isTraversable(::java::io::File* file) override;
};

#endif // _VirtualFileSystemView_h_