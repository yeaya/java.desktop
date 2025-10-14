#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$AudioAction_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$AudioAction_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$AudioAction : public ::javax::swing::AbstractAction {
	$class(WindowsLookAndFeel$AudioAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	WindowsLookAndFeel$AudioAction();
	void init$($String* name, $String* resource);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::java::lang::Runnable* audioRunnable = nullptr;
	$String* audioResource = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$AudioAction_h_