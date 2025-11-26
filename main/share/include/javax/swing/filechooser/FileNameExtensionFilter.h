#ifndef _javax_swing_filechooser_FileNameExtensionFilter_h_
#define _javax_swing_filechooser_FileNameExtensionFilter_h_
//$ class javax.swing.filechooser.FileNameExtensionFilter
//$ extends javax.swing.filechooser.FileFilter

#include <java/lang/Array.h>
#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class $import FileNameExtensionFilter : public ::javax::swing::filechooser::FileFilter {
	$class(FileNameExtensionFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	FileNameExtensionFilter();
	void init$($String* description, $StringArray* extensions);
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
	$StringArray* getExtensions();
	virtual $String* toString() override;
	$String* description = nullptr;
	$StringArray* extensions = nullptr;
	$StringArray* lowerCaseExtensions = nullptr;
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_FileNameExtensionFilter_h_