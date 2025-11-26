#ifndef _FileFilterDescription$CustomFileFilter_h_
#define _FileFilterDescription$CustomFileFilter_h_
//$ class FileFilterDescription$CustomFileFilter
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class FileFilterDescription$CustomFileFilter : public ::javax::swing::filechooser::FileFilter {
	$class(FileFilterDescription$CustomFileFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	FileFilterDescription$CustomFileFilter();
	void init$();
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
};

#endif // _FileFilterDescription$CustomFileFilter_h_