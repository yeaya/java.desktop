#ifndef _com_apple_laf_AquaFileChooserUI$AcceptAllFileFilter_h_
#define _com_apple_laf_AquaFileChooserUI$AcceptAllFileFilter_h_
//$ class com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$AcceptAllFileFilter : public ::javax::swing::filechooser::FileFilter {
	$class(AquaFileChooserUI$AcceptAllFileFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	AquaFileChooserUI$AcceptAllFileFilter();
	void init$();
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$AcceptAllFileFilter_h_