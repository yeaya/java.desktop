#ifndef _javax_swing_plaf_synth_SynthButtonUI_h_
#define _javax_swing_plaf_synth_SynthButtonUI_h_
//$ class javax.swing.plaf.synth.SynthButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

#pragma push_macro("SYNTH_BUTTON_UI_KEY")
#undef SYNTH_BUTTON_UI_KEY

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
		class AbstractButton;
		class Icon;
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

class $export SynthButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthButtonUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::plaf::basic::BasicButtonUI::getTextShiftOffset;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::javax::swing::Icon* getDefaultIcon(::javax::swing::AbstractButton* b);
	::javax::swing::Icon* getEnabledIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* defaultIcon);
	virtual ::javax::swing::Icon* getIcon(::javax::swing::AbstractButton* b);
	::javax::swing::Icon* getIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* specificIcon, ::javax::swing::Icon* defaultIcon, int32_t state);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	::javax::swing::Icon* getPressedIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* defaultIcon);
	::javax::swing::Icon* getRolloverIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* defaultIcon);
	::javax::swing::Icon* getSelectedIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* defaultIcon);
	virtual ::javax::swing::Icon* getSizingIcon(::javax::swing::AbstractButton* b);
	::javax::swing::Icon* getSpecificIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* specificSelectedIcon, ::javax::swing::Icon* specificIcon, ::javax::swing::Icon* defaultIcon, int32_t state);
	::javax::swing::Icon* getSynthDisabledIcon(::javax::swing::AbstractButton* b, ::javax::swing::Icon* defaultIcon);
	::javax::swing::Icon* getSynthIcon(::javax::swing::AbstractButton* b, int32_t synthConstant);
	int32_t getTextShiftOffset(::javax::swing::plaf::synth::SynthContext* state);
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void installListeners(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	virtual void uninstallListeners(::javax::swing::AbstractButton* b) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void updateStyle(::javax::swing::AbstractButton* b);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	static $Object* SYNTH_BUTTON_UI_KEY;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SYNTH_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_synth_SynthButtonUI_h_