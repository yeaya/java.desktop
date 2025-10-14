#ifndef _com_sun_java_swing_plaf_windows_XPStyle$GlyphButton_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$GlyphButton_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$GlyphButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import XPStyle$GlyphButton : public ::javax::swing::JButton {
	$class(XPStyle$GlyphButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	XPStyle$GlyphButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::java::awt::Component* parent, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$State* getState();
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::list;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void setPart(::java::awt::Component* parent, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	using ::javax::swing::JButton::setUI;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$GlyphButton_h_