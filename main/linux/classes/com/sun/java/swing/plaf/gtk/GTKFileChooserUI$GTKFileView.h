#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFileView_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFileView_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView
//$ extends javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView

#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKFileChooserUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKFileView : public ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView {
	$class(GTKFileChooserUI$GTKFileView, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView)
public:
	GTKFileChooserUI$GTKFileView();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void cacheIcon(::java::io::File* f, ::javax::swing::Icon* i) override;
	virtual void clearIconCache() override;
	virtual ::javax::swing::Icon* getCachedIcon(::java::io::File* f) override;
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFileView_h_