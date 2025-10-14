#ifndef _javax_swing_JSpinner$DefaultEditor_h_
#define _javax_swing_JSpinner$DefaultEditor_h_
//$ class javax.swing.JSpinner$DefaultEditor
//$ extends javax.swing.JPanel
//$ implements javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,java.awt.LayoutManager

#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JSpinner;
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

class $import JSpinner$DefaultEditor : public ::javax::swing::JPanel, public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener, public ::java::awt::LayoutManager {
	$class(JSpinner$DefaultEditor, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener, ::java::awt::LayoutManager)
public:
	JSpinner$DefaultEditor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSpinner* spinner);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* child) override;
	virtual void commitEdit();
	virtual void dismiss(::javax::swing::JSpinner* spinner);
	virtual int32_t getBaseline(int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior() override;
	virtual ::javax::swing::JSpinner* getSpinner();
	virtual ::javax::swing::JFormattedTextField* getTextField();
	::java::awt::Dimension* insetSize(::java::awt::Container* parent);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	using ::javax::swing::JPanel::list;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	using ::javax::swing::JPanel::remove;
	virtual void removeLayoutComponent(::java::awt::Component* child) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$DefaultEditor_h_