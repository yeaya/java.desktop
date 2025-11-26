#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$AcceptAllFileFilter_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$AcceptAllFileFilter_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicFileChooserUI$AcceptAllFileFilter : public ::javax::swing::filechooser::FileFilter {
	$class(BasicFileChooserUI$AcceptAllFileFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	BasicFileChooserUI$AcceptAllFileFilter();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$AcceptAllFileFilter_h_