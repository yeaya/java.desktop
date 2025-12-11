#ifndef _com_apple_laf_AquaFileChooserUI$ScrollPaneCornerPanel_h_
#define _com_apple_laf_AquaFileChooserUI$ScrollPaneCornerPanel_h_
//$ class com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$ScrollPaneCornerPanel : public ::javax::swing::JPanel {
	$class(AquaFileChooserUI$ScrollPaneCornerPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	AquaFileChooserUI$ScrollPaneCornerPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	::javax::swing::border::Border* border = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$ScrollPaneCornerPanel_h_