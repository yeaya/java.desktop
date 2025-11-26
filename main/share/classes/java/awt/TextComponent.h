#ifndef _java_awt_TextComponent_h_
#define _java_awt_TextComponent_h_
//$ class java.awt.TextComponent
//$ extends java.awt.Component
//$ implements javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class TextEvent;
			class TextListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
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

class $export TextComponent : public ::java::awt::Component, public ::javax::accessibility::Accessible {
	$class(TextComponent, $NO_CLASS_INIT, ::java::awt::Component, ::javax::accessibility::Accessible)
public:
	TextComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* text);
	virtual void addNotify() override;
	virtual void addTextListener(::java::awt::event::TextListener* l);
	virtual bool areInputMethodsEnabled() override;
	bool canAccessClipboard();
	virtual void enableInputMethods(bool enable) override;
	void enableInputMethodsIfNecessary();
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual int32_t getCaretPosition();
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual $String* getSelectedText();
	virtual int32_t getSelectionEnd();
	virtual int32_t getSelectionStart();
	virtual $String* getText();
	virtual $Array<::java::awt::event::TextListener>* getTextListeners();
	virtual bool isEditable();
	virtual $String* paramString() override;
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processTextEvent(::java::awt::event::TextEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeNotify() override;
	virtual void removeTextListener(::java::awt::event::TextListener* l);
	virtual void select(int32_t selectionStart, int32_t selectionEnd);
	virtual void selectAll();
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setCaretPosition(int32_t position);
	virtual void setEditable(bool b);
	virtual void setSelectionEnd(int32_t selectionEnd);
	virtual void setSelectionStart(int32_t selectionStart);
	virtual void setText($String* t);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* text = nullptr;
	bool editable = false;
	int32_t selectionStart = 0;
	int32_t selectionEnd = 0;
	bool backgroundSetByClientCode = false;
	::java::awt::event::TextListener* textListener = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xE1438AE5BD01EFE5;
	int32_t textComponentSerializedDataVersion = 0;
	bool checkForEnableIM = false;
};

	} // awt
} // java

#endif // _java_awt_TextComponent_h_