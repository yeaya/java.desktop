#ifndef _javax_swing_JPasswordField_h_
#define _javax_swing_JPasswordField_h_
//$ class javax.swing.JPasswordField
//$ extends javax.swing.JTextField

#include <java/lang/Array.h>
#include <javax/swing/JTextField.h>

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
		namespace text {
			class Document;
		}
	}
}

namespace javax {
	namespace swing {

class $import JPasswordField : public ::javax::swing::JTextField {
	$class(JPasswordField, 0, ::javax::swing::JTextField)
public:
	JPasswordField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$();
	void init$($String* text);
	void init$(int32_t columns);
	void init$($String* text, int32_t columns);
	void init$(::javax::swing::text::Document* doc, $String* txt, int32_t columns);
	virtual void copy() override;
	virtual bool customSetUIProperty($String* propertyName, Object$* value);
	virtual void cut() override;
	virtual bool echoCharIsSet();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual char16_t getEchoChar();
	virtual $chars* getPassword();
	virtual $String* getText() override;
	virtual $String* getText(int32_t offs, int32_t len) override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JTextField::list;
	virtual $String* paramString() override;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	virtual void setEchoChar(char16_t c);
	virtual void setText($String* t) override;
	using ::javax::swing::JTextField::setUI;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	char16_t echoChar = 0;
	bool echoCharSet = false;
};

	} // swing
} // javax

#endif // _javax_swing_JPasswordField_h_