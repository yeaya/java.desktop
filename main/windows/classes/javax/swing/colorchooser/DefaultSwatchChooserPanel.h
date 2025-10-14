#ifndef _javax_swing_colorchooser_DefaultSwatchChooserPanel_h_
#define _javax_swing_colorchooser_DefaultSwatchChooserPanel_h_
//$ class javax.swing.colorchooser.DefaultSwatchChooserPanel
//$ extends javax.swing.colorchooser.AbstractColorChooserPanel

#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyListener;
			class MouseListener;
		}
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
			class RecentSwatchPanel;
			class SwatchPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class DefaultSwatchChooserPanel : public ::javax::swing::colorchooser::AbstractColorChooserPanel {
	$class(DefaultSwatchChooserPanel, $NO_CLASS_INIT, ::javax::swing::colorchooser::AbstractColorChooserPanel)
public:
	DefaultSwatchChooserPanel();
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::contains;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::enable;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getBounds;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getSize;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getLocation;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::firePropertyChange;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::add;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getMousePosition;
	void init$();
	virtual void buildChooser() override;
	virtual $String* getDisplayName() override;
	virtual int32_t getDisplayedMnemonicIndex() override;
	virtual ::javax::swing::Icon* getLargeDisplayIcon() override;
	virtual int32_t getMnemonic() override;
	virtual ::javax::swing::Icon* getSmallDisplayIcon() override;
	virtual void installChooserPanel(::javax::swing::JColorChooser* enclosingChooser) override;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::setUI;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocus;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocusInWindow;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::repaint;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::remove;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::list;
	virtual void uninstallChooserPanel(::javax::swing::JColorChooser* enclosingChooser) override;
	virtual void updateChooser() override;
	::javax::swing::colorchooser::SwatchPanel* swatchPanel = nullptr;
	::javax::swing::colorchooser::RecentSwatchPanel* recentSwatchPanel = nullptr;
	::java::awt::event::MouseListener* mainSwatchListener = nullptr;
	::java::awt::event::MouseListener* recentSwatchListener = nullptr;
	::java::awt::event::KeyListener* mainSwatchKeyListener = nullptr;
	::java::awt::event::KeyListener* recentSwatchKeyListener = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DefaultSwatchChooserPanel_h_