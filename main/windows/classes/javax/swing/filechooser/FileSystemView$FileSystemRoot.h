#ifndef _javax_swing_filechooser_FileSystemView$FileSystemRoot_h_
#define _javax_swing_filechooser_FileSystemView$FileSystemRoot_h_
//$ class javax.swing.filechooser.FileSystemView$FileSystemRoot
//$ extends java.io.File

#include <java/io/File.h>

namespace javax {
	namespace swing {
		namespace filechooser {

class $export FileSystemView$FileSystemRoot : public ::java::io::File {
	$class(FileSystemView$FileSystemRoot, $NO_CLASS_INIT, ::java::io::File)
public:
	FileSystemView$FileSystemRoot();
	void init$(::java::io::File* f);
	void init$($String* s);
	virtual $String* getName() override;
	virtual bool isDirectory() override;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_FileSystemView$FileSystemRoot_h_