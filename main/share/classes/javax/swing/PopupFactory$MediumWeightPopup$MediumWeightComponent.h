#ifndef _javax_swing_PopupFactory$MediumWeightPopup$MediumWeightComponent_h_
#define _javax_swing_PopupFactory$MediumWeightPopup$MediumWeightComponent_h_
//$ class javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent
//$ extends java.awt.Panel
//$ implements javax.swing.SwingHeavyWeight

#include <java/awt/Panel.h>
#include <javax/swing/SwingHeavyWeight.h>

namespace javax {
	namespace swing {

class PopupFactory$MediumWeightPopup$MediumWeightComponent : public ::java::awt::Panel, public ::javax::swing::SwingHeavyWeight {
	$class(PopupFactory$MediumWeightPopup$MediumWeightComponent, $NO_CLASS_INIT, ::java::awt::Panel, ::javax::swing::SwingHeavyWeight)
public:
	PopupFactory$MediumWeightPopup$MediumWeightComponent();
	using ::java::awt::Panel::add;
	using ::java::awt::Panel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::java::awt::Panel::remove;
	using ::java::awt::Panel::list;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$MediumWeightPopup$MediumWeightComponent_h_