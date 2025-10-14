#ifndef _javax_swing_plaf_metal_MetalComboBoxUI_h_
#define _javax_swing_plaf_metal_MetalComboBoxUI_h_
//$ class javax.swing.plaf.metal.MetalComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI

#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

namespace java {
	namespace awt {
		class Container;
		class Dimension;
		class Graphics;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class ComboBoxEditor;
		class JButton;
		class JComboBox;
		class JComponent;
		class JList;
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalComboBoxUI$MetalComboBoxLayoutManager;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI {
	$class(MetalComboBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI)
public:
	MetalComboBoxUI();
	void init$();
	static ::javax::swing::JButton* access$000(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JButton* access$100(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$200(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$300(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JButton* access$400(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JButton* access$500(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JList* access$600(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JButton* access$700(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	static ::javax::swing::JList* access$800(::javax::swing::plaf::metal::MetalComboBoxUI* x0);
	virtual void configureEditor() override;
	virtual ::javax::swing::JButton* createArrowButton() override;
	virtual ::javax::swing::ComboBoxEditor* createEditor() override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void editablePropertyChanged(::java::beans::PropertyChangeEvent* e);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual void layoutComboBox(::java::awt::Container* parent, ::javax::swing::plaf::metal::MetalComboBoxUI$MetalComboBoxLayoutManager* manager);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintCurrentValue(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	virtual void paintCurrentValueBackground(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	virtual void removeListeners();
	virtual void unconfigureEditor() override;
	void updateButtonForOcean(::javax::swing::JButton* button);
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxUI_h_