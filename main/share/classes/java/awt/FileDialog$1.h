#ifndef _java_awt_FileDialog$1_h_
#define _java_awt_FileDialog$1_h_
//$ class java.awt.FileDialog$1
//$ extends sun.awt.AWTAccessor$FileDialogAccessor

#include <java/lang/Array.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>

namespace java {
	namespace awt {
		class FileDialog;
	}
}
namespace java {
	namespace io {
		class File;
	}
}

namespace java {
	namespace awt {

class FileDialog$1 : public ::sun::awt::AWTAccessor$FileDialogAccessor {
	$class(FileDialog$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$FileDialogAccessor)
public:
	FileDialog$1();
	void init$();
	virtual bool isMultipleMode(::java::awt::FileDialog* fileDialog) override;
	virtual void setDirectory(::java::awt::FileDialog* fileDialog, $String* directory) override;
	virtual void setFile(::java::awt::FileDialog* fileDialog, $String* file) override;
	virtual void setFiles(::java::awt::FileDialog* fileDialog, $Array<::java::io::File>* files) override;
};

	} // awt
} // java

#endif // _java_awt_FileDialog$1_h_