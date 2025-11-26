#ifndef _sun_awt_X11_FileDialogFilter_h_
#define _sun_awt_X11_FileDialogFilter_h_
//$ class sun.awt.X11.FileDialogFilter
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class FileDialogFilter : public ::java::io::FilenameFilter {
	$class(FileDialogFilter, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	FileDialogFilter();
	void init$($String* f);
	virtual bool accept(::java::io::File* dir, $String* fileName) override;
	$String* convert($String* filter);
	bool matches($String* input, $String* filter);
	$String* filter = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_FileDialogFilter_h_