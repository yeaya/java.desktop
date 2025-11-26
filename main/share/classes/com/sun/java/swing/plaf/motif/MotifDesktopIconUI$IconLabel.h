#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconLabel_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconLabel_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopIconUI;
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
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifDesktopIconUI$IconLabel : public ::javax::swing::JPanel {
	$class(MotifDesktopIconUI$IconLabel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	MotifDesktopIconUI$IconLabel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0, ::javax::swing::JInternalFrame* f);
	virtual void forwardEventToParent(::java::awt::event::MouseEvent* e);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0 = nullptr;
	::javax::swing::JInternalFrame* frame = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconLabel_h_