#ifndef _sun_awt_AWTAccessor$FileDialogAccessor_h_
#define _sun_awt_AWTAccessor$FileDialogAccessor_h_
//$ interface sun.awt.AWTAccessor$FileDialogAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace sun {
	namespace awt {

class $export AWTAccessor$FileDialogAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$FileDialogAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isMultipleMode(::java::awt::FileDialog* fileDialog) {return false;}
	virtual void setDirectory(::java::awt::FileDialog* fileDialog, $String* directory) {}
	virtual void setFile(::java::awt::FileDialog* fileDialog, $String* file) {}
	virtual void setFiles(::java::awt::FileDialog* fileDialog, $Array<::java::io::File>* files) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$FileDialogAccessor_h_