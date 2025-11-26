#ifndef _javax_swing_filechooser_FileFilter_h_
#define _javax_swing_filechooser_FileFilter_h_
//$ class javax.swing.filechooser.FileFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class $import FileFilter : public ::java::lang::Object {
	$class(FileFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileFilter();
	void init$();
	virtual bool accept(::java::io::File* f) {return false;}
	virtual $String* getDescription() {return nullptr;}
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_FileFilter_h_