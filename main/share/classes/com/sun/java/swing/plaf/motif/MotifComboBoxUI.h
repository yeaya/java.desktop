#ifndef _com_sun_java_swing_plaf_motif_MotifComboBoxUI_h_
#define _com_sun_java_swing_plaf_motif_MotifComboBoxUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

#pragma push_macro("HORIZ_MARGIN")
#undef HORIZ_MARGIN

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class LayoutManager;
		class Rectangle;
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
		class JComboBox;
		class JComponent;
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
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI, public ::java::io::Serializable {
	$class(MotifComboBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI, ::java::io::Serializable)
public:
	MotifComboBoxUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JComboBox* access$000(::com::sun::java::swing::plaf::motif::MotifComboBoxUI* x0);
	virtual void configureEditor() override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual int32_t iconAreaWidth();
	virtual void installComponents() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	::java::awt::Component* motifGetEditor();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintCurrentValue(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	virtual ::java::awt::Rectangle* rectangleForArrowIcon();
	virtual ::java::awt::Rectangle* rectangleForCurrentValue() override;
	virtual $String* toString() override;
	virtual void uninstallComponents() override;
	::javax::swing::Icon* arrowIcon = nullptr;
	static const int32_t HORIZ_MARGIN = 3;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HORIZ_MARGIN")

#endif // _com_sun_java_swing_plaf_motif_MotifComboBoxUI_h_