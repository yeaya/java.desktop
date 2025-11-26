#ifndef _javax_swing_colorchooser_SlidingSpinner_h_
#define _javax_swing_colorchooser_SlidingSpinner_h_
//$ class javax.swing.colorchooser.SlidingSpinner
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JSlider;
		class JSpinner;
		class SpinnerNumberModel;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class ColorPanel;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class SlidingSpinner : public ::javax::swing::event::ChangeListener {
	$class(SlidingSpinner, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	SlidingSpinner();
	void init$(::javax::swing::colorchooser::ColorPanel* panel, ::javax::swing::JComponent* label);
	::javax::swing::JComponent* getLabel();
	::javax::swing::JSlider* getSlider();
	::javax::swing::JSpinner* getSpinner();
	float getValue();
	bool isVisible();
	void setRange(int32_t min, int32_t max);
	void setValue(float value);
	void setVisible(bool visible);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* event) override;
	::javax::swing::colorchooser::ColorPanel* panel = nullptr;
	::javax::swing::JComponent* label = nullptr;
	::javax::swing::SpinnerNumberModel* model = nullptr;
	::javax::swing::JSlider* slider = nullptr;
	::javax::swing::JSpinner* spinner = nullptr;
	float value = 0.0;
	bool internal = false;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_SlidingSpinner_h_