#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$SelectionListener_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$SelectionListener_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$SelectionListener
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

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
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$SelectionListener : public ::javax::swing::event::ListSelectionListener {
	$class(GTKFileChooserUI$SelectionListener, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	GTKFileChooserUI$SelectionListener();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$SelectionListener_h_