#ifndef _javax_swing_plaf_synth_SynthTextPaneUI_h_
#define _javax_swing_plaf_synth_SynthTextPaneUI_h_
//$ class javax.swing.plaf.synth.SynthTextPaneUI
//$ extends javax.swing.plaf.synth.SynthEditorPaneUI

#include <javax/swing/plaf/synth/SynthEditorPaneUI.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
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
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthTextPaneUI : public ::javax::swing::plaf::synth::SynthEditorPaneUI {
	$class(SynthTextPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthEditorPaneUI)
public:
	SynthTextPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::synth::SynthEditorPaneUI::paint;
	using ::javax::swing::plaf::synth::SynthEditorPaneUI::paintBackground;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	void updateFont(::java::awt::Font* font);
	void updateForeground(::java::awt::Color* color);
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTextPaneUI_h_