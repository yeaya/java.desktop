#ifndef _javax_swing_JSpinner_h_
#define _javax_swing_JSpinner_h_
//$ class javax.swing.JSpinner
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("DISABLED_ACTION")
#undef DISABLED_ACTION

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
		class SpinnerModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class SpinnerUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JSpinner : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JSpinner, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JSpinner();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::SpinnerModel* model);
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* listener);
	virtual void commitEdit();
	virtual ::javax::swing::JComponent* createEditor(::javax::swing::SpinnerModel* model);
	virtual void fireStateChanged();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::javax::swing::JComponent* getEditor();
	virtual ::javax::swing::SpinnerModel* getModel();
	virtual $Object* getNextValue();
	virtual $Object* getPreviousValue();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual $Object* getValue();
	using ::javax::swing::JComponent::remove;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* listener);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setEditor(::javax::swing::JComponent* editor);
	virtual void setModel(::javax::swing::SpinnerModel* model);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::SpinnerUI* ui);
	virtual void setValue(Object$* value);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static ::javax::swing::Action* DISABLED_ACTION;
	::javax::swing::SpinnerModel* model = nullptr;
	::javax::swing::JComponent* editor = nullptr;
	::javax::swing::event::ChangeListener* modelListener = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	bool editorExplicitlySet = false;
};

	} // swing
} // javax

#pragma pop_macro("DISABLED_ACTION")

#endif // _javax_swing_JSpinner_h_