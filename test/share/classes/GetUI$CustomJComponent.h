#ifndef _GetUI$CustomJComponent_h_
#define _GetUI$CustomJComponent_h_
//$ class GetUI$CustomJComponent
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

class GetUI$CustomJComponent : public ::javax::swing::JComponent {
	$class(GetUI$CustomJComponent, $NO_CLASS_INIT, ::javax::swing::JComponent)
public:
	GetUI$CustomJComponent();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	void init$();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	using ::javax::swing::JComponent::list;
	virtual void setUI(::javax::swing::plaf::ComponentUI* ui) override;
};

#endif // _GetUI$CustomJComponent_h_