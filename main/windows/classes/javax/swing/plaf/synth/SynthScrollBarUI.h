#ifndef _javax_swing_plaf_synth_SynthScrollBarUI_h_
#define _javax_swing_plaf_synth_SynthScrollBarUI_h_
//$ class javax.swing.plaf.synth.SynthScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
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
		class JButton;
		class JComponent;
		class JScrollBar;
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

class $export SynthScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthScrollBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthScrollBarUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static int32_t access$000(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$100(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$200(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$300(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$400(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static ::javax::swing::JScrollBar* access$500(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$600(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$700(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$800(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	static int32_t access$900(::javax::swing::plaf::synth::SynthScrollBarUI* x0);
	virtual void configureScrollBarColors() override;
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation) override;
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region, int32_t state);
	virtual ::java::awt::Dimension* getMinimumThumbSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual bool getSupportsAbsolutePositioning() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::basic::BasicScrollBarUI::paintThumb;
	virtual void paintThumb(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* thumbBounds);
	using ::javax::swing::plaf::basic::BasicScrollBarUI::paintTrack;
	virtual void paintTrack(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* trackBounds);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void setThumbRollover(bool active) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateButtonDirections();
	void updateStyle(::javax::swing::JScrollBar* c);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* thumbStyle = nullptr;
	::javax::swing::plaf::synth::SynthStyle* trackStyle = nullptr;
	bool validMinimumThumbSize = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthScrollBarUI_h_