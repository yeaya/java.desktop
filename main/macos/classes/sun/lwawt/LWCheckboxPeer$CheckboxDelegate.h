#ifndef _sun_lwawt_LWCheckboxPeer$CheckboxDelegate_h_
#define _sun_lwawt_LWCheckboxPeer$CheckboxDelegate_h_
//$ class sun.lwawt.LWCheckboxPeer$CheckboxDelegate
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JRadioButton;
		class JToggleButton;
	}
}
namespace sun {
	namespace lwawt {
		class LWCheckboxPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWCheckboxPeer$CheckboxDelegate : public ::javax::swing::JComponent {
	$class(LWCheckboxPeer$CheckboxDelegate, $NO_CLASS_INIT, ::javax::swing::JComponent)
public:
	LWCheckboxPeer$CheckboxDelegate();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	void init$(::sun::lwawt::LWCheckboxPeer* this$0);
	::javax::swing::JToggleButton* getCurrentButton();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	using ::javax::swing::JComponent::list;
	virtual void reshape(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setEnabled(bool enabled) override;
	virtual void setOpaque(bool isOpaque) override;
	void setRadioButton(bool showRadioButton);
	void setSelected(bool state);
	void setText($String* label);
	::sun::lwawt::LWCheckboxPeer* this$0 = nullptr;
	::javax::swing::JCheckBox* cb = nullptr;
	::javax::swing::JRadioButton* rb = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCheckboxPeer$CheckboxDelegate_h_