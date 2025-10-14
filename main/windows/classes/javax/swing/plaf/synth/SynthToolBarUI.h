#ifndef _javax_swing_plaf_synth_SynthToolBarUI_h_
#define _javax_swing_plaf_synth_SynthToolBarUI_h_
//$ class javax.swing.plaf.synth.SynthToolBarUI
//$ extends javax.swing.plaf.basic.BasicToolBarUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class LayoutManager;
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
		class JToolBar;
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
			namespace synth {
				class Region;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthToolBarUI : public ::javax::swing::plaf::basic::BasicToolBarUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthToolBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthToolBarUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::LayoutManager* createLayout();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, ::javax::swing::plaf::synth::SynthStyle* style);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, ::javax::swing::plaf::synth::SynthStyle* style, int32_t state);
	virtual void installComponents() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContent(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* bounds);
	virtual void paintDragWindow(::java::awt::Graphics* g) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void setBorderToNonRollover(::java::awt::Component* c) override;
	virtual void setBorderToNormal(::java::awt::Component* c) override;
	virtual void setBorderToRollover(::java::awt::Component* c) override;
	virtual $String* toString() override;
	virtual void uninstallComponents() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JToolBar* c);
	::javax::swing::Icon* handleIcon = nullptr;
	::java::awt::Rectangle* contentRect = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* contentStyle = nullptr;
	::javax::swing::plaf::synth::SynthStyle* dragWindowStyle = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthToolBarUI_h_