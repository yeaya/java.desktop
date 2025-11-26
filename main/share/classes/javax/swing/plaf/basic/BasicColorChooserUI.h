#ifndef _javax_swing_plaf_basic_BasicColorChooserUI_h_
#define _javax_swing_plaf_basic_BasicColorChooserUI_h_
//$ class javax.swing.plaf.basic.BasicColorChooserUI
//$ extends javax.swing.plaf.ColorChooserUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/ColorChooserUI.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
		class JComponent;
		class JPanel;
		class JTabbedPane;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class AbstractColorChooserPanel;
			class ColorSelectionModel;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicColorChooserUI$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicColorChooserUI : public ::javax::swing::plaf::ColorChooserUI {
	$class(BasicColorChooserUI, 0, ::javax::swing::plaf::ColorChooserUI)
public:
	BasicColorChooserUI();
	void init$();
	virtual $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* createDefaultChoosers();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::javax::swing::plaf::basic::BasicColorChooserUI$Handler* getHandler();
	virtual void installDefaults();
	virtual void installListeners();
	virtual void installPreviewPanel();
	virtual void installUI(::javax::swing::JComponent* c) override;
	void selectionChanged(::javax::swing::colorchooser::ColorSelectionModel* model);
	virtual void uninstallDefaultChoosers();
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallPreviewPanel();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::JColorChooser* chooser = nullptr;
	::javax::swing::JTabbedPane* tabbedPane = nullptr;
	::javax::swing::JPanel* singlePanel = nullptr;
	::javax::swing::JPanel* previewPanelHolder = nullptr;
	::javax::swing::JComponent* previewPanel = nullptr;
	bool isMultiPanel = false;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
	$Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* defaultChoosers = nullptr;
	::javax::swing::event::ChangeListener* previewListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicColorChooserUI$Handler* handler = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicColorChooserUI_h_