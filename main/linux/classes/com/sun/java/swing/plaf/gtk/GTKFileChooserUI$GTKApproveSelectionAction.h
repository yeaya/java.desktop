#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKApproveSelectionAction_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKApproveSelectionAction_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKApproveSelectionAction
//$ extends javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction

#include <javax/swing/plaf/basic/BasicFileChooserUI$ApproveSelectionAction.h>

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
			class ActionEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKApproveSelectionAction : public ::javax::swing::plaf::basic::BasicFileChooserUI$ApproveSelectionAction {
	$class(GTKFileChooserUI$GTKApproveSelectionAction, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicFileChooserUI$ApproveSelectionAction)
public:
	GTKFileChooserUI$GTKApproveSelectionAction();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKApproveSelectionAction_h_