#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$DoubleClickListener_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$DoubleClickListener_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DoubleClickListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$DoubleClickListener : public ::java::awt::event::MouseAdapter {
	$class(GTKFileChooserUI$DoubleClickListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	GTKFileChooserUI$DoubleClickListener();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0, ::javax::swing::JList* list);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
	::javax::swing::JList* list = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$DoubleClickListener_h_