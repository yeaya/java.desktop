#ifndef _com_sun_java_swing_plaf_motif_MotifOptionPaneUI$1_h_
#define _com_sun_java_swing_plaf_motif_MotifOptionPaneUI$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifOptionPaneUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifOptionPaneUI$1 : public ::javax::swing::JPanel {
	$class(MotifOptionPaneUI$1, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	MotifOptionPaneUI$1();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifOptionPaneUI* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	::com::sun::java::swing::plaf::motif::MotifOptionPaneUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifOptionPaneUI$1_h_