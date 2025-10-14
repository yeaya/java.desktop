#ifndef _javax_swing_plaf_basic_BasicLabelUI_h_
#define _javax_swing_plaf_basic_BasicLabelUI_h_
//$ class javax.swing.plaf.basic.BasicLabelUI
//$ extends javax.swing.plaf.LabelUI
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/LabelUI.h>

#pragma push_macro("BASIC_LABEL_UI_KEY")
#undef BASIC_LABEL_UI_KEY

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Dimension;
		class FontMetrics;
		class Graphics;
		class Rectangle;
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
		class JLabel;
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
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicLabelUI : public ::javax::swing::plaf::LabelUI, public ::java::beans::PropertyChangeListener {
	$class(BasicLabelUI, 0, ::javax::swing::plaf::LabelUI, ::java::beans::PropertyChangeListener)
public:
	BasicLabelUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents(::javax::swing::JLabel* c);
	virtual void installDefaults(::javax::swing::JLabel* c);
	virtual void installKeyboardActions(::javax::swing::JLabel* l);
	virtual void installListeners(::javax::swing::JLabel* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	$String* layout(::javax::swing::JLabel* label, ::java::awt::FontMetrics* fm, int32_t width, int32_t height);
	virtual $String* layoutCL(::javax::swing::JLabel* label, ::java::awt::FontMetrics* fontMetrics, $String* text, ::javax::swing::Icon* icon, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR);
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintDisabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY);
	virtual void paintEnabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallComponents(::javax::swing::JLabel* c);
	virtual void uninstallDefaults(::javax::swing::JLabel* c);
	virtual void uninstallKeyboardActions(::javax::swing::JLabel* c);
	virtual void uninstallListeners(::javax::swing::JLabel* c);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::basic::BasicLabelUI* labelUI;
	static $Object* BASIC_LABEL_UI_KEY;
	::java::awt::Rectangle* paintIconR = nullptr;
	::java::awt::Rectangle* paintTextR = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASIC_LABEL_UI_KEY")

#endif // _javax_swing_plaf_basic_BasicLabelUI_h_