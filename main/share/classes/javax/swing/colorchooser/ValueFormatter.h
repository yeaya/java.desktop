#ifndef _javax_swing_colorchooser_ValueFormatter_h_
#define _javax_swing_colorchooser_ValueFormatter_h_
//$ class javax.swing.colorchooser.ValueFormatter
//$ extends javax.swing.JFormattedTextField$AbstractFormatter
//$ implements java.awt.event.FocusListener,java.lang.Runnable

#include <java/awt/event/FocusListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFormattedTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DocumentFilter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class ValueFormatter : public ::javax::swing::JFormattedTextField$AbstractFormatter, public ::java::awt::event::FocusListener, public ::java::lang::Runnable {
	$class(ValueFormatter, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField$AbstractFormatter, ::java::awt::event::FocusListener, ::java::lang::Runnable)
public:
	ValueFormatter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t length, bool hex);
	virtual void focusGained(::java::awt::event::FocusEvent* event) override;
	virtual void focusLost(::java::awt::event::FocusEvent* event) override;
	virtual ::javax::swing::text::DocumentFilter* getDocumentFilter() override;
	static void init(int32_t length, bool hex, ::javax::swing::JFormattedTextField* text);
	bool isValid(int32_t length);
	bool isValid($String* text);
	virtual void run() override;
	virtual $Object* stringToValue($String* text) override;
	virtual $String* toString() override;
	virtual $String* valueToString(Object$* object) override;
	::javax::swing::text::DocumentFilter* filter = nullptr;
	int32_t length = 0;
	int32_t radix = 0;
	::javax::swing::JFormattedTextField* text = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ValueFormatter_h_