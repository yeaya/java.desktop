#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$DragPane_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$DragPane_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopPaneUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifDesktopPaneUI$DragPane : public ::javax::swing::JComponent {
	$class(MotifDesktopPaneUI$DragPane, $NO_CLASS_INIT, ::javax::swing::JComponent)
public:
	MotifDesktopPaneUI$DragPane();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI* this$0);
	using ::javax::swing::JComponent::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$DragPane_h_