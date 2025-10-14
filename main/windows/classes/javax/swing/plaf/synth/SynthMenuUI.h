#ifndef _javax_swing_plaf_synth_SynthMenuUI_h_
#define _javax_swing_plaf_synth_SynthMenuUI_h_
//$ class javax.swing.plaf.synth.SynthMenuUI
//$ extends javax.swing.plaf.basic.BasicMenuUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
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
		class JMenuItem;
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

class $export SynthMenuUI : public ::javax::swing::plaf::basic::BasicMenuUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthMenuUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	int32_t getComponentState(::javax::swing::JComponent* c);
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, int32_t state);
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t defaultTextIconGap) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JMenuItem* mi);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* accStyle = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthMenuUI_h_