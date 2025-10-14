#ifndef _java_awt_TextField_h_
#define _java_awt_TextField_h_
//$ class java.awt.TextField
//$ extends java.awt.TextComponent

#include <java/awt/TextComponent.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export TextField : public ::java::awt::TextComponent {
	$class(TextField, 0, ::java::awt::TextComponent)
public:
	TextField();
	void init$();
	void init$($String* text);
	void init$(int32_t columns);
	void init$($String* text, int32_t columns);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual bool echoCharIsSet();
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual int32_t getColumns();
	virtual char16_t getEchoChar();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t columns);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t columns);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	static void initIDs();
	virtual ::java::awt::Dimension* minimumSize(int32_t columns);
	virtual ::java::awt::Dimension* minimumSize() override;
	virtual $String* paramString() override;
	virtual ::java::awt::Dimension* preferredSize(int32_t columns);
	virtual ::java::awt::Dimension* preferredSize() override;
	virtual void processActionEvent(::java::awt::event::ActionEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	static $String* replaceEOL($String* text);
	virtual void setColumns(int32_t columns);
	virtual void setEchoChar(char16_t c);
	virtual void setEchoCharacter(char16_t c);
	virtual void setText($String* t) override;
	void writeObject(::java::io::ObjectOutputStream* s);
	int32_t columns = 0;
	char16_t echoChar = 0;
	::java::awt::event::ActionListener* actionListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xD6D5A0110EB14103;
	int32_t textFieldSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_TextField_h_