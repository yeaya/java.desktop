#ifndef _com_sun_java_swing_plaf_motif_MotifScrollBarButton_h_
#define _com_sun_java_swing_plaf_motif_MotifScrollBarButton_h_
//$ class com.sun.java.swing.plaf.motif.MotifScrollBarButton
//$ extends javax.swing.plaf.basic.BasicArrowButton

#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace java {
	namespace awt {
		class Color;
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

class $export MotifScrollBarButton : public ::javax::swing::plaf::basic::BasicArrowButton {
	$class(MotifScrollBarButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton)
public:
	MotifScrollBarButton();
	using ::javax::swing::plaf::basic::BasicArrowButton::contains;
	using ::javax::swing::plaf::basic::BasicArrowButton::enable;
	using ::javax::swing::plaf::basic::BasicArrowButton::getBounds;
	using ::javax::swing::plaf::basic::BasicArrowButton::getSize;
	using ::javax::swing::plaf::basic::BasicArrowButton::getLocation;
	using ::javax::swing::plaf::basic::BasicArrowButton::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicArrowButton::add;
	using ::javax::swing::plaf::basic::BasicArrowButton::getMousePosition;
	void init$(int32_t direction);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* lightShadow = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifScrollBarButton_h_