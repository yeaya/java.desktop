#ifndef _javax_swing_colorchooser_ColorChooserPanel_h_
#define _javax_swing_colorchooser_ColorChooserPanel_h_
//$ class javax.swing.colorchooser.ColorChooserPanel
//$ extends javax.swing.colorchooser.AbstractColorChooserPanel
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>

#pragma push_macro("MASK")
#undef MASK

namespace java {
	namespace awt {
		class Container;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JFormattedTextField;
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class ColorModel;
			class ColorPanel;
			class DiagramComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorChooserPanel : public ::javax::swing::colorchooser::AbstractColorChooserPanel, public ::java::beans::PropertyChangeListener {
	$class(ColorChooserPanel, $NO_CLASS_INIT, ::javax::swing::colorchooser::AbstractColorChooserPanel, ::java::beans::PropertyChangeListener)
public:
	ColorChooserPanel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::contains;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::enable;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getBounds;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getSize;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getLocation;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::firePropertyChange;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::add;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::colorchooser::ColorModel* model);
	virtual void buildChooser() override;
	virtual $String* getDisplayName() override;
	virtual int32_t getDisplayedMnemonicIndex() override;
	virtual ::javax::swing::Icon* getLargeDisplayIcon() override;
	virtual int32_t getMnemonic() override;
	virtual ::javax::swing::Icon* getSmallDisplayIcon() override;
	virtual bool isColorTransparencySelectionEnabled() override;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::list;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocus;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocusInWindow;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::repaint;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::remove;
	virtual void setColorTransparencySelectionEnabled(bool b) override;
	virtual void setEnabled(bool enabled) override;
	static void setEnabled(::java::awt::Container* container, bool enabled);
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::setInheritsPopupMenu;
	static void setInheritsPopupMenu(::javax::swing::JComponent* component, bool value);
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::setUI;
	virtual $String* toString() override;
	virtual void updateChooser() override;
	static const int32_t MASK = 0xFF000000;
	::javax::swing::colorchooser::ColorModel* model = nullptr;
	::javax::swing::colorchooser::ColorPanel* panel = nullptr;
	::javax::swing::colorchooser::DiagramComponent* slider = nullptr;
	::javax::swing::colorchooser::DiagramComponent* diagram = nullptr;
	::javax::swing::JFormattedTextField* text = nullptr;
	::javax::swing::JLabel* label = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#pragma pop_macro("MASK")

#endif // _javax_swing_colorchooser_ColorChooserPanel_h_