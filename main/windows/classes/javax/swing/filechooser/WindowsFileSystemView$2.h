#ifndef _javax_swing_filechooser_WindowsFileSystemView$2_h_
#define _javax_swing_filechooser_WindowsFileSystemView$2_h_
//$ class javax.swing.filechooser.WindowsFileSystemView$2
//$ extends javax.swing.filechooser.FileSystemView$FileSystemRoot

#include <javax/swing/filechooser/FileSystemView$FileSystemRoot.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class WindowsFileSystemView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class WindowsFileSystemView$2 : public ::javax::swing::filechooser::FileSystemView$FileSystemRoot {
	$class(WindowsFileSystemView$2, $NO_CLASS_INIT, ::javax::swing::filechooser::FileSystemView$FileSystemRoot)
public:
	WindowsFileSystemView$2();
	void init$(::javax::swing::filechooser::WindowsFileSystemView* this$0, ::java::io::File* f);
	virtual bool exists() override;
	::javax::swing::filechooser::WindowsFileSystemView* this$0 = nullptr;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_WindowsFileSystemView$2_h_