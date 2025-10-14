#ifndef _javax_swing_colorchooser_AbstractColorChooserPanel_h_
#define _javax_swing_colorchooser_AbstractColorChooserPanel_h_
//$ class javax.swing.colorchooser.AbstractColorChooserPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

#pragma push_macro("TRANSPARENCY_ENABLED_PROPERTY")
#undef TRANSPARENCY_ENABLED_PROPERTY

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JColorChooser;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class ColorSelectionModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class $import AbstractColorChooserPanel : public ::javax::swing::JPanel {
	$class(AbstractColorChooserPanel, 0, ::javax::swing::JPanel)
public:
	AbstractColorChooserPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$();
	virtual void buildChooser() {}
	virtual ::java::awt::Color* getColorFromModel();
	virtual ::javax::swing::colorchooser::ColorSelectionModel* getColorSelectionModel();
	virtual $String* getDisplayName() {return nullptr;}
	virtual int32_t getDisplayedMnemonicIndex();
	virtual int32_t getInt(Object$* key, int32_t defaultValue);
	virtual ::javax::swing::Icon* getLargeDisplayIcon() {return nullptr;}
	virtual int32_t getMnemonic();
	virtual ::javax::swing::Icon* getSmallDisplayIcon() {return nullptr;}
	virtual void installChooserPanel(::javax::swing::JColorChooser* enclosingChooser);
	virtual bool isColorTransparencySelectionEnabled();
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void setColorTransparencySelectionEnabled(bool b);
	virtual void setSelectedColor(::java::awt::Color* color);
	using ::javax::swing::JPanel::setUI;
	virtual void uninstallChooserPanel(::javax::swing::JColorChooser* enclosingChooser);
	virtual void updateChooser() {}
	static $String* TRANSPARENCY_ENABLED_PROPERTY;
	::java::beans::PropertyChangeListener* enabledListener = nullptr;
	::javax::swing::JColorChooser* chooser = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#pragma pop_macro("TRANSPARENCY_ENABLED_PROPERTY")

#endif // _javax_swing_colorchooser_AbstractColorChooserPanel_h_