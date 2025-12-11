#ifndef _com_apple_laf_AquaComboBoxButton_h_
#define _com_apple_laf_AquaComboBoxButton_h_
//$ class com.apple.laf.AquaComboBoxButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
			class AquaPainter;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class ButtonModel;
		class CellRendererPane;
		class JComboBox;
		class JList;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxButton : public ::javax::swing::JButton {
	$class(AquaComboBoxButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	AquaComboBoxButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::com::apple::laf::AquaComboBoxUI* ui, ::javax::swing::JComboBox* comboBox, ::javax::swing::CellRendererPane* rendererPane, ::javax::swing::JList* list);
	virtual void doRendererPaint(::java::awt::Graphics* g, ::javax::swing::ButtonModel* buttonModel, bool editable, ::java::awt::Insets* insets, int32_t left, int32_t top, int32_t width, int32_t height);
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::ButtonModel* buttonModel);
	virtual bool isEnabled() override;
	virtual bool isFocusable() override;
	using ::javax::swing::JButton::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void setIsPopDown(bool isPopDown);
	virtual void setIsSquare(bool isSquare);
	using ::javax::swing::JButton::setUI;
	::javax::swing::JComboBox* comboBox = nullptr;
	::javax::swing::JList* list$ = nullptr;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::com::apple::laf::AquaComboBoxUI* ui = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
	bool isPopDown = false;
	bool isSquare = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxButton_h_