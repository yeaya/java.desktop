#ifndef _com_apple_laf_AquaComboBoxUI_h_
#define _com_apple_laf_AquaComboBoxUI_h_
//$ class com.apple.laf.AquaComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI
//$ implements com.apple.laf.AquaUtilControlSize$Sizeable

#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

#pragma push_macro("APPLICATOR")
#undef APPLICATOR
#pragma push_macro("ISSQUARE_CLIENT_PROPERTY_KEY")
#undef ISSQUARE_CLIENT_PROPERTY_KEY
#pragma push_macro("IS_TABLE_CELL_EDITOR")
#undef IS_TABLE_CELL_EDITOR
#pragma push_macro("POPDOWN_CLIENT_PROPERTY_KEY")
#undef POPDOWN_CLIENT_PROPERTY_KEY

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
			class ClientPropertyApplicator;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusListener;
			class ItemListener;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ComboBoxEditor;
		class JButton;
		class JComboBox;
		class JComponent;
		class JList;
		class ListCellRenderer;
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
				class ComboPopup;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI, public ::com::apple::laf::AquaUtilControlSize$Sizeable {
	$class(AquaComboBoxUI, 0, ::javax::swing::plaf::basic::BasicComboBoxUI, ::com::apple::laf::AquaUtilControlSize$Sizeable)
public:
	AquaComboBoxUI();
	using ::javax::swing::plaf::basic::BasicComboBoxUI::isTableCellEditor;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::basic::ComboPopup* access$000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::plaf::basic::ComboPopup* access$100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Component* access$1000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$1100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$1200(::com::apple::laf::AquaComboBoxUI* x0);
	static bool access$1302(::com::apple::laf::AquaComboBoxUI* x0, bool x1);
	static ::javax::swing::JComboBox* access$1400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$1700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$1800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$2400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$2600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$2700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$2800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$2900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::plaf::basic::ComboPopup* access$300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$3200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$3900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$4900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::plaf::basic::ComboPopup* access$500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$5000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$5100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$5200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$5300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$5400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$5500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$5600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$5700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$5800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Insets* access$5900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::plaf::basic::ComboPopup* access$600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$6000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$6100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Component* access$6200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Rectangle* access$6300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Component* access$6400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$6500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$6600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$6700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$6800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$6900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::plaf::basic::ComboPopup* access$700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$7000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$7100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$7200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$7300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$7400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$7500(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$7600(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$7700(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$7800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$7900(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$800(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JList* access$8000(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$8100(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$8200(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$8300(::com::apple::laf::AquaComboBoxUI* x0);
	static ::javax::swing::JButton* access$8400(::com::apple::laf::AquaComboBoxUI* x0);
	static ::java::awt::Component* access$900(::com::apple::laf::AquaComboBoxUI* x0);
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size) override;
	virtual ::javax::swing::JButton* createArrowButton() override;
	virtual ::javax::swing::ComboBoxEditor* createEditor() override;
	virtual ::java::awt::event::FocusListener* createFocusListener() override;
	virtual ::java::awt::event::ItemListener* createItemListener() override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	virtual ::javax::swing::ListCellRenderer* createRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::apple::laf::ClientPropertyApplicator* getApplicator();
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::basic::ComboPopup* getPopup();
	virtual void installComponents() override;
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	static bool isPopdown(::javax::swing::JComboBox* c);
	static bool isTableCellEditor(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual $String* toString() override;
	static void triggerSelectionEvent(::javax::swing::JComboBox* comboBox, ::java::awt::event::ActionEvent* e);
	virtual void uninstallComponents() override;
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static $String* POPDOWN_CLIENT_PROPERTY_KEY;
	static $String* ISSQUARE_CLIENT_PROPERTY_KEY;
	bool wasOpaque = false;
	::javax::swing::Action* highlightNextAction = nullptr;
	::javax::swing::Action* highlightPreviousAction = nullptr;
	::javax::swing::Action* highlightFirstAction = nullptr;
	::javax::swing::Action* highlightLastAction = nullptr;
	::javax::swing::Action* highlightPageUpAction = nullptr;
	::javax::swing::Action* highlightPageDownAction = nullptr;
	static $String* IS_TABLE_CELL_EDITOR;
	::javax::swing::Action* triggerSelectionAction = nullptr;
	static ::javax::swing::Action* toggleSelectionAction;
	::javax::swing::Action* hideAction = nullptr;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* APPLICATOR;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("APPLICATOR")
#pragma pop_macro("ISSQUARE_CLIENT_PROPERTY_KEY")
#pragma pop_macro("IS_TABLE_CELL_EDITOR")
#pragma pop_macro("POPDOWN_CLIENT_PROPERTY_KEY")

#endif // _com_apple_laf_AquaComboBoxUI_h_