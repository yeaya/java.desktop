#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFCPropertyChangeListener_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFCPropertyChangeListener_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

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
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKFCPropertyChangeListener : public ::java::beans::PropertyChangeListener {
	$class(GTKFileChooserUI$GTKFCPropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	GTKFileChooserUI$GTKFCPropertyChangeListener();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKFCPropertyChangeListener_h_