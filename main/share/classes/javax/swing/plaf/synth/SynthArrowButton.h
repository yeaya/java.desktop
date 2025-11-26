#ifndef _javax_swing_plaf_synth_SynthArrowButton_h_
#define _javax_swing_plaf_synth_SynthArrowButton_h_
//$ class javax.swing.plaf.synth.SynthArrowButton
//$ extends javax.swing.JButton
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JButton.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthArrowButton : public ::javax::swing::JButton, public ::javax::swing::plaf::UIResource {
	$class(SynthArrowButton, $NO_CLASS_INIT, ::javax::swing::JButton, ::javax::swing::plaf::UIResource)
public:
	SynthArrowButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t direction);
	virtual int32_t getDirection();
	virtual $String* getUIClassID() override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	virtual void setDirection(int32_t dir);
	virtual void setFocusable(bool focusable) override;
	using ::javax::swing::JButton::setUI;
	virtual $String* toString() override;
	virtual void updateUI() override;
	int32_t direction = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthArrowButton_h_