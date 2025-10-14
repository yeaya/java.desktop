#ifndef _javax_swing_JTextField_h_
#define _javax_swing_JTextField_h_
//$ class javax.swing.JTextField
//$ extends javax.swing.text.JTextComponent
//$ implements javax.swing.SwingConstants

#include <java/lang/Array.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/JTextComponent.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
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
		class BoundedRangeModel;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTextField : public ::javax::swing::text::JTextComponent, public ::javax::swing::SwingConstants {
	$class(JTextField, 0, ::javax::swing::text::JTextComponent, ::javax::swing::SwingConstants)
public:
	JTextField();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::JTextComponent::getToolTipText;
	using ::javax::swing::text::JTextComponent::contains;
	using ::javax::swing::text::JTextComponent::enable;
	using ::javax::swing::text::JTextComponent::getBounds;
	using ::javax::swing::text::JTextComponent::getSize;
	using ::javax::swing::text::JTextComponent::getLocation;
	using ::javax::swing::text::JTextComponent::firePropertyChange;
	using ::javax::swing::text::JTextComponent::add;
	using ::javax::swing::text::JTextComponent::getMousePosition;
	using ::javax::swing::text::JTextComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* text);
	void init$(int32_t columns);
	void init$($String* text, int32_t columns);
	void init$(::javax::swing::text::Document* doc, $String* text, int32_t columns);
	virtual void actionPropertyChanged(::javax::swing::Action* action, $String* propertyName);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void configurePropertiesFromAction(::javax::swing::Action* a);
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener(::javax::swing::Action* a);
	virtual ::javax::swing::text::Document* createDefaultModel();
	virtual void fireActionPerformed();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::Action* getAction();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $Array<::javax::swing::Action>* getActions() override;
	virtual int32_t getColumnWidth();
	virtual int32_t getColumns();
	virtual int32_t getHorizontalAlignment();
	virtual ::javax::swing::BoundedRangeModel* getHorizontalVisibility();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getScrollOffset();
	virtual $String* getUIClassID() override;
	virtual bool hasActionListener();
	bool isListener($Class* c, ::java::awt::event::ActionListener* a);
	virtual bool isValidateRoot() override;
	virtual $String* paramString() override;
	virtual void postActionEvent();
	using ::javax::swing::text::JTextComponent::print;
	using ::javax::swing::text::JTextComponent::remove;
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	using ::javax::swing::text::JTextComponent::requestFocus;
	using ::javax::swing::text::JTextComponent::requestFocusInWindow;
	using ::javax::swing::text::JTextComponent::repaint;
	virtual void scrollRectToVisible(::java::awt::Rectangle* r) override;
	virtual void setAction(::javax::swing::Action* a);
	virtual void setActionCommand($String* command);
	void setActionCommandFromAction(::javax::swing::Action* action);
	virtual void setColumns(int32_t columns);
	virtual void setDocument(::javax::swing::text::Document* doc) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setHorizontalAlignment(int32_t alignment);
	virtual void setScrollOffset(int32_t scrollOffset);
	using ::javax::swing::text::JTextComponent::setUI;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::Action* action$ = nullptr;
	::java::beans::PropertyChangeListener* actionPropertyChangeListener = nullptr;
	static $String* notifyAction;
	::javax::swing::BoundedRangeModel* visibility = nullptr;
	int32_t horizontalAlignment = 0;
	int32_t columns = 0;
	int32_t columnWidth = 0;
	$String* command = nullptr;
	static $Array<::javax::swing::Action>* defaultActions;
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JTextField_h_