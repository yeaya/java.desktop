#ifndef _javax_swing_JToolBar_h_
#define _javax_swing_JToolBar_h_
//$ class javax.swing.JToolBar
//$ extends javax.swing.JComponent
//$ implements javax.swing.SwingConstants,javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class LayoutManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
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
		class Action;
		class JButton;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class ToolBarUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JToolBar : public ::javax::swing::JComponent, public ::javax::swing::SwingConstants, public ::javax::accessibility::Accessible {
	$class(JToolBar, 0, ::javax::swing::JComponent, ::javax::swing::SwingConstants, ::javax::accessibility::Accessible)
public:
	JToolBar();
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
	void init$(int32_t orientation);
	void init$($String* name);
	void init$($String* name, int32_t orientation);
	virtual ::javax::swing::JButton* add(::javax::swing::Action* a);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addSeparator();
	virtual void addSeparator(::java::awt::Dimension* size);
	void checkOrientation(int32_t orientation);
	virtual ::java::beans::PropertyChangeListener* createActionChangeListener(::javax::swing::JButton* b);
	virtual ::javax::swing::JButton* createActionComponent(::javax::swing::Action* a);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getComponentAtIndex(int32_t i);
	virtual int32_t getComponentIndex(::java::awt::Component* c);
	virtual ::java::awt::Insets* getMargin();
	virtual int32_t getOrientation();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool isBorderPainted();
	virtual bool isFloatable();
	virtual bool isRollover();
	using ::javax::swing::JComponent::list;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setBorderPainted(bool b);
	virtual void setFloatable(bool b);
	virtual void setLayout(::java::awt::LayoutManager* mgr) override;
	virtual void setMargin(::java::awt::Insets* m);
	virtual void setOrientation(int32_t o);
	virtual void setRollover(bool rollover);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ToolBarUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	bool paintBorder$ = false;
	::java::awt::Insets* margin = nullptr;
	bool floatable = false;
	int32_t orientation = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JToolBar_h_