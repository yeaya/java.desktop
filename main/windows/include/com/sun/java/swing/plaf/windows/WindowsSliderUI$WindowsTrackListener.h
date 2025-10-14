#ifndef _com_sun_java_swing_plaf_windows_WindowsSliderUI$WindowsTrackListener_h_
#define _com_sun_java_swing_plaf_windows_WindowsSliderUI$WindowsTrackListener_h_
//$ class com.sun.java.swing.plaf.windows.WindowsSliderUI$WindowsTrackListener
//$ extends javax.swing.plaf.basic.BasicSliderUI$TrackListener

#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsSliderUI;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsSliderUI$WindowsTrackListener : public ::javax::swing::plaf::basic::BasicSliderUI$TrackListener {
	$class(WindowsSliderUI$WindowsTrackListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI$TrackListener)
public:
	WindowsSliderUI$WindowsTrackListener();
	void init$(::com::sun::java::swing::plaf::windows::WindowsSliderUI* this$0);
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void updatePressed(bool newPressed);
	virtual void updateRollover(bool newRollover);
	::com::sun::java::swing::plaf::windows::WindowsSliderUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsSliderUI$WindowsTrackListener_h_