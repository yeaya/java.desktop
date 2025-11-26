#ifndef _javax_swing_JPanel_h_
#define _javax_swing_JPanel_h_
//$ class javax.swing.JPanel
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class LayoutManager;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class PanelUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JPanel : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JPanel, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JPanel();
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
	void init$(::java::awt::LayoutManager* layout, bool isDoubleBuffered);
	void init$(::java::awt::LayoutManager* layout);
	void init$(bool isDoubleBuffered);
	void init$();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::setUI;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setUI(::javax::swing::plaf::PanelUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JPanel_h_