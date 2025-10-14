#ifndef _javax_swing_plaf_metal_MetalComboBoxButton_h_
#define _javax_swing_plaf_metal_MetalComboBoxButton_h_
//$ class javax.swing.plaf.metal.MetalComboBoxButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class CellRendererPane;
		class Icon;
		class JComboBox;
		class JList;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalComboBoxButton : public ::javax::swing::JButton {
	$class(MetalComboBoxButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	MetalComboBoxButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$();
	void init$(::javax::swing::JComboBox* cb, ::javax::swing::Icon* i, ::javax::swing::CellRendererPane* pane, ::javax::swing::JList* list);
	void init$(::javax::swing::JComboBox* cb, ::javax::swing::Icon* i, bool onlyIcon, ::javax::swing::CellRendererPane* pane, ::javax::swing::JList* list);
	::javax::swing::JComboBox* getComboBox();
	::javax::swing::Icon* getComboIcon();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual bool isFocusTraversable() override;
	bool isIconOnly();
	using ::javax::swing::JButton::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	void setComboBox(::javax::swing::JComboBox* cb);
	void setComboIcon(::javax::swing::Icon* i);
	virtual void setEnabled(bool enabled) override;
	void setIconOnly(bool isIconOnly);
	using ::javax::swing::JButton::setUI;
	::javax::swing::JComboBox* comboBox = nullptr;
	::javax::swing::JList* listBox = nullptr;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::javax::swing::Icon* comboIcon = nullptr;
	bool iconOnly = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxButton_h_