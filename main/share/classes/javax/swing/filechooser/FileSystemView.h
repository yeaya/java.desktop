#ifndef _javax_swing_filechooser_FileSystemView_h_
#define _javax_swing_filechooser_FileSystemView_h_
//$ class javax.swing.filechooser.FileSystemView
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
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
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class ShellFolder;
		}
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class $export FileSystemView : public ::java::lang::Object {
	$class(FileSystemView, 0, ::java::lang::Object)
public:
	FileSystemView();
	void init$();
	virtual ::java::io::File* createFileObject(::java::io::File* dir, $String* filename);
	virtual ::java::io::File* createFileObject($String* path);
	virtual ::java::io::File* createFileSystemRoot(::java::io::File* f);
	virtual ::java::io::File* createNewFolder(::java::io::File* containingDir) {return nullptr;}
	virtual ::java::io::File* getChild(::java::io::File* parent, $String* fileName);
	virtual $Array<::java::io::File>* getChooserComboBoxFiles();
	$Array<::java::io::File>* getChooserShortcutPanelFiles();
	virtual ::java::io::File* getDefaultDirectory();
	static ::javax::swing::filechooser::FileSystemView* getFileSystemView();
	virtual $Array<::java::io::File>* getFiles(::java::io::File* dir, bool useFileHiding);
	virtual ::java::io::File* getHomeDirectory();
	virtual ::java::io::File* getLinkLocation(::java::io::File* file);
	virtual ::java::io::File* getParentDirectory(::java::io::File* dir);
	virtual $Array<::java::io::File>* getRoots();
	virtual ::sun::awt::shell::ShellFolder* getShellFolder(::java::io::File* f);
	virtual $String* getSystemDisplayName(::java::io::File* f);
	virtual ::javax::swing::Icon* getSystemIcon(::java::io::File* f);
	virtual ::javax::swing::Icon* getSystemIcon(::java::io::File* f, int32_t width, int32_t height);
	virtual $String* getSystemTypeDescription(::java::io::File* f);
	virtual bool isComputerNode(::java::io::File* dir);
	virtual bool isDrive(::java::io::File* dir);
	virtual bool isFileSystem(::java::io::File* f);
	virtual bool isFileSystemRoot(::java::io::File* dir);
	virtual bool isFloppyDrive(::java::io::File* dir);
	virtual bool isHiddenFile(::java::io::File* f);
	virtual bool isLink(::java::io::File* file);
	virtual bool isParent(::java::io::File* folder, ::java::io::File* file);
	virtual bool isRoot(::java::io::File* f);
	virtual ::java::lang::Boolean* isTraversable(::java::io::File* f);
	static void lambda$new$0(::java::lang::ref::WeakReference* weakReference, ::java::beans::PropertyChangeEvent* evt);
	static void lambda$new$1(::java::beans::PropertyChangeListener* pcl);
	static ::javax::swing::filechooser::FileSystemView* windowsFileSystemView;
	static ::javax::swing::filechooser::FileSystemView* unixFileSystemView;
	static ::javax::swing::filechooser::FileSystemView* genericFileSystemView;
	bool useSystemExtensionHiding = false;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_FileSystemView_h_