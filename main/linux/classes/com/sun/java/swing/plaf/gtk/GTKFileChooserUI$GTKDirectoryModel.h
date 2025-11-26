#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryModel_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryModel_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel
//$ extends javax.swing.plaf.basic.BasicDirectoryModel

#include <javax/swing/plaf/basic/BasicDirectoryModel.h>

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
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKDirectoryModel : public ::javax::swing::plaf::basic::BasicDirectoryModel {
	$class(GTKFileChooserUI$GTKDirectoryModel, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDirectoryModel)
public:
	GTKFileChooserUI$GTKDirectoryModel();
	using ::javax::swing::plaf::basic::BasicDirectoryModel::fireContentsChanged;
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void sort(::java::util::Vector* v) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryModel_h_