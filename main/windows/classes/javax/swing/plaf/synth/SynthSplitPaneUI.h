#ifndef _javax_swing_plaf_synth_SynthSplitPaneUI_h_
#define _javax_swing_plaf_synth_SynthSplitPaneUI_h_
//$ class javax.swing.plaf.synth.SynthSplitPaneUI
//$ extends javax.swing.plaf.basic.BasicSplitPaneUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JSplitPane;
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
				class BasicSplitPaneDivider;
			}
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

class $export SynthSplitPaneUI : public ::javax::swing::plaf::basic::BasicSplitPaneUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthSplitPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthSplitPaneUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* createDefaultDivider() override;
	virtual ::java::awt::Component* createDefaultNonContinuousLayoutDivider() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void finishedPaintingChildren(::javax::swing::JSplitPane* jc, ::java::awt::Graphics* g) override;
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* subregion);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, int32_t state);
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void paintDragDivider(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JSplitPane* splitPane);
	::java::util::Set* managingFocusForwardTraversalKeys = nullptr;
	::java::util::Set* managingFocusBackwardTraversalKeys = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* dividerStyle = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSplitPaneUI_h_