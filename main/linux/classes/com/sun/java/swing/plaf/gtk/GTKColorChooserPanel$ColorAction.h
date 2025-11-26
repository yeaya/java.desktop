#ifndef _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorAction_h_
#define _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorAction_h_
//$ class com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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

class GTKColorChooserPanel$ColorAction : public ::javax::swing::AbstractAction {
	$class(GTKColorChooserPanel$ColorAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	GTKColorChooserPanel$ColorAction();
	void init$($String* name, int32_t type);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	int32_t type = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorAction_h_