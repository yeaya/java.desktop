#ifndef _javax_swing_JFormattedTextField_h_
#define _javax_swing_JFormattedTextField_h_
//$ class javax.swing.JFormattedTextField
//$ extends javax.swing.JTextField

#include <java/lang/Array.h>
#include <javax/swing/JTextField.h>

#pragma push_macro("COMMIT")
#undef COMMIT
#pragma push_macro("COMMIT_OR_REVERT")
#undef COMMIT_OR_REVERT
#pragma push_macro("PERSIST")
#undef PERSIST
#pragma push_macro("REVERT")
#undef REVERT

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class InputMethodEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace text {
		class Format;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class JFormattedTextField$AbstractFormatter;
		class JFormattedTextField$AbstractFormatterFactory;
		class JFormattedTextField$FocusLostHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentListener;
		}
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

class $export JFormattedTextField : public ::javax::swing::JTextField {
	$class(JFormattedTextField, 0, ::javax::swing::JTextField)
public:
	JFormattedTextField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	using ::javax::swing::JTextField::list;
	void init$();
	void init$(Object$* value);
	void init$(::java::text::Format* format);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatter* formatter);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatterFactory* factory);
	void init$(::javax::swing::JFormattedTextField$AbstractFormatterFactory* factory, Object$* currentValue);
	virtual void commitEdit();
	virtual $Array<::javax::swing::Action>* getActions() override;
	::javax::swing::JFormattedTextField$AbstractFormatterFactory* getDefaultFormatterFactory(Object$* type);
	virtual int32_t getFocusLostBehavior();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatter* getFormatter();
	virtual ::javax::swing::JFormattedTextField$AbstractFormatterFactory* getFormatterFactory();
	virtual $String* getUIClassID() override;
	virtual $Object* getValue();
	virtual void invalidEdit();
	virtual bool isEditValid();
	bool isEdited();
	using ::javax::swing::JTextField::print;
	virtual void processFocusEvent(::java::awt::event::FocusEvent* e) override;
	virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* e) override;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	virtual void setDocument(::javax::swing::text::Document* doc) override;
	void setEditValid(bool isValid);
	void setEdited(bool edited);
	virtual void setFocusLostBehavior(int32_t behavior);
	virtual void setFormatter(::javax::swing::JFormattedTextField$AbstractFormatter* format);
	void setFormatterActions($Array<::javax::swing::Action>* actions);
	virtual void setFormatterFactory(::javax::swing::JFormattedTextField$AbstractFormatterFactory* tf);
	using ::javax::swing::JTextField::setUI;
	virtual void setValue(Object$* value);
	void setValue(Object$* value, bool createFormat, bool firePC);
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static $Array<::javax::swing::Action>* defaultActions;
	static const int32_t COMMIT = 0;
	static const int32_t COMMIT_OR_REVERT = 1;
	static const int32_t REVERT = 2;
	static const int32_t PERSIST = 3;
	::javax::swing::JFormattedTextField$AbstractFormatterFactory* factory = nullptr;
	::javax::swing::JFormattedTextField$AbstractFormatter* format = nullptr;
	$Object* value = nullptr;
	bool editValid = false;
	int32_t focusLostBehavior = 0;
	bool edited = false;
	::javax::swing::event::DocumentListener* documentListener = nullptr;
	$Object* mask = nullptr;
	::javax::swing::ActionMap* textFormatterActionMap = nullptr;
	bool composedTextExists$ = false;
	::javax::swing::JFormattedTextField$FocusLostHandler* focusLostHandler = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("COMMIT")
#pragma pop_macro("COMMIT_OR_REVERT")
#pragma pop_macro("PERSIST")
#pragma pop_macro("REVERT")

#endif // _javax_swing_JFormattedTextField_h_