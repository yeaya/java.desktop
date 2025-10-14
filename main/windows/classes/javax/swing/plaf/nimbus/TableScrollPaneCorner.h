#ifndef _javax_swing_plaf_nimbus_TableScrollPaneCorner_h_
#define _javax_swing_plaf_nimbus_TableScrollPaneCorner_h_
//$ class javax.swing.plaf.nimbus.TableScrollPaneCorner
//$ extends javax.swing.JComponent
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class TableScrollPaneCorner : public ::javax::swing::JComponent, public ::javax::swing::plaf::UIResource {
	$class(TableScrollPaneCorner, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::swing::plaf::UIResource)
public:
	TableScrollPaneCorner();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::javax::swing::JComponent::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual $String* toString() override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_TableScrollPaneCorner_h_