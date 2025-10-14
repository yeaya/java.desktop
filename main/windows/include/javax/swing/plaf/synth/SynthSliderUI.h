#ifndef _javax_swing_plaf_synth_SynthSliderUI_h_
#define _javax_swing_plaf_synth_SynthSliderUI_h_
//$ class javax.swing.plaf.synth.SynthSliderUI
//$ extends javax.swing.plaf.basic.BasicSliderUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
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
		class JSlider;
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
				class BasicSliderUI$TrackListener;
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

class $import SynthSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthSliderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthSliderUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSlider* c);
	static ::java::awt::Rectangle* access$000(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$100(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$1000(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static int32_t access$1100(::javax::swing::plaf::synth::SynthSliderUI* x0, int32_t x1);
	static bool access$1200(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$1300(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$1400(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$1500(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$1600(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$1700(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$1800(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$1900(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static bool access$200(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$2000(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static bool access$2100(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$2200(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$2300(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$2400(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$300(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$400(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$500(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$600(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$700(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::java::awt::Rectangle* access$800(::javax::swing::plaf::synth::SynthSliderUI* x0);
	static ::javax::swing::JSlider* access$900(::javax::swing::plaf::synth::SynthSliderUI* x0);
	virtual void calculateGeometry() override;
	virtual void calculateThumbLocation() override;
	virtual ::javax::swing::plaf::basic::BasicSliderUI$TrackListener* createTrackListener(::javax::swing::JSlider* s) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	int32_t getComponentState(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* region);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* subregion);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* subregion, int32_t state);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	int32_t getPadForLabel(int32_t i);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getThumbSize() override;
	virtual void installDefaults(::javax::swing::JSlider* slider) override;
	virtual void installListeners(::javax::swing::JSlider* slider) override;
	virtual void layout();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::basic::BasicSliderUI::paintThumb;
	virtual void paintThumb(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* thumbBounds);
	using ::javax::swing::plaf::basic::BasicSliderUI::paintTrack;
	virtual void paintTrack(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* trackBounds);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void recalculateIfInsetsChanged() override;
	void setThumbActive(bool active);
	virtual void setThumbLocation(int32_t x, int32_t y) override;
	void setThumbPressed(bool pressed);
	virtual $String* toString() override;
	virtual void uninstallDefaults(::javax::swing::JSlider* slider) override;
	virtual void uninstallListeners(::javax::swing::JSlider* slider) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JSlider* c);
	void updateThumbState(int32_t x, int32_t y);
	void updateThumbState(int32_t x, int32_t y, bool pressed);
	virtual int32_t valueForXPosition(int32_t xPos) override;
	virtual int32_t valueForYPosition(int32_t yPos) override;
	virtual int32_t xPositionForValue(int32_t value) override;
	using ::javax::swing::plaf::basic::BasicSliderUI::yPositionForValue;
	virtual int32_t yPositionForValue(int32_t value, int32_t trackY, int32_t trackHeight) override;
	::java::awt::Rectangle* valueRect = nullptr;
	bool paintValue = false;
	::java::awt::Dimension* lastSize = nullptr;
	int32_t trackHeight = 0;
	int32_t trackBorder = 0;
	int32_t thumbWidth = 0;
	int32_t thumbHeight = 0;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* sliderTrackStyle = nullptr;
	::javax::swing::plaf::synth::SynthStyle* sliderThumbStyle = nullptr;
	bool thumbActive = false;
	bool thumbPressed = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSliderUI_h_