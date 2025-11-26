#ifndef _javax_swing_plaf_synth_SynthProgressBarUI_h_
#define _javax_swing_plaf_synth_SynthProgressBarUI_h_
//$ class javax.swing.plaf.synth.SynthProgressBarUI
//$ extends javax.swing.plaf.basic.BasicProgressBarUI
//$ implements javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Dimension;
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
		class JComponent;
		class JProgressBar;
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

class $import SynthProgressBarUI : public ::javax::swing::plaf::basic::BasicProgressBarUI, public ::javax::swing::plaf::synth::SynthUI, public ::java::beans::PropertyChangeListener {
	$class(SynthProgressBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicProgressBarUI, ::javax::swing::plaf::synth::SynthUI, ::java::beans::PropertyChangeListener)
public:
	SynthProgressBarUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Rectangle* getBox(::java::awt::Rectangle* r) override;
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, $String* title);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void setAnimationIndex(int32_t newValue) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JProgressBar* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	int32_t progressPadding = 0;
	bool rotateText = false;
	bool paintOutsideClip = false;
	bool tileWhenIndeterminate = false;
	int32_t tileWidth = 0;
	::java::awt::Dimension* minBarSize = nullptr;
	int32_t glowWidth = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthProgressBarUI_h_