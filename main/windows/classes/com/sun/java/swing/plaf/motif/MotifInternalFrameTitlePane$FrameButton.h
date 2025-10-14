#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$FrameButton_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$FrameButton_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane;
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

class $export MotifInternalFrameTitlePane$FrameButton : public ::javax::swing::JButton {
	$class(MotifInternalFrameTitlePane$FrameButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	MotifInternalFrameTitlePane$FrameButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void requestFocus() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocusInWindow;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$FrameButton_h_