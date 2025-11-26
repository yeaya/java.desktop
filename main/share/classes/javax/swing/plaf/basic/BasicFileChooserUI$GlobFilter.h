#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$GlobFilter_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$GlobFilter_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$GlobFilter
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
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

class $export BasicFileChooserUI$GlobFilter : public ::javax::swing::filechooser::FileFilter {
	$class(BasicFileChooserUI$GlobFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	BasicFileChooserUI$GlobFilter();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
	virtual void setPattern($String* globPattern);
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
	::java::util::regex::Pattern* pattern = nullptr;
	$String* globPattern = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$GlobFilter_h_