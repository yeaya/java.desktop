#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$BasicFileView_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$BasicFileView_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView
//$ extends javax.swing.filechooser.FileView

#include <javax/swing/filechooser/FileView.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class Icon;
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

class $import BasicFileChooserUI$BasicFileView : public ::javax::swing::filechooser::FileView {
	$class(BasicFileChooserUI$BasicFileView, $NO_CLASS_INIT, ::javax::swing::filechooser::FileView)
public:
	BasicFileChooserUI$BasicFileView();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual void cacheIcon(::java::io::File* f, ::javax::swing::Icon* i);
	virtual void clearIconCache();
	virtual ::javax::swing::Icon* getCachedIcon(::java::io::File* f);
	virtual $String* getDescription(::java::io::File* f) override;
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f) override;
	virtual $String* getName(::java::io::File* f) override;
	virtual $String* getTypeDescription(::java::io::File* f) override;
	virtual ::java::lang::Boolean* isHidden(::java::io::File* f);
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
	::java::util::Hashtable* iconCache = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$BasicFileView_h_