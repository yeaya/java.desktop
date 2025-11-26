#ifndef _javax_swing_text_StyleContext$NamedStyle_h_
#define _javax_swing_text_StyleContext$NamedStyle_h_
//$ class javax.swing.text.StyleContext$NamedStyle
//$ extends javax.swing.text.Style
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/Style.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class StyleContext;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StyleContext$NamedStyle : public ::javax::swing::text::Style, public ::java::io::Serializable {
	$class(StyleContext$NamedStyle, $NO_CLASS_INIT, ::javax::swing::text::Style, ::java::io::Serializable)
public:
	StyleContext$NamedStyle();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::StyleContext* this$0, $String* name, ::javax::swing::text::Style* parent);
	void init$(::javax::swing::text::StyleContext* this$0, ::javax::swing::text::Style* parent);
	void init$(::javax::swing::text::StyleContext* this$0);
	virtual void addAttribute(Object$* name, Object$* value) override;
	virtual void addAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual void fireStateChanged();
	virtual $Object* getAttribute(Object$* attrName) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual $String* getName() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	virtual bool isDefined(Object$* attrName) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeAttribute(Object$* name) override;
	virtual void removeAttributes(::java::util::Enumeration* names) override;
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void setName($String* name);
	virtual void setResolveParent(::javax::swing::text::AttributeSet* parent) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::text::StyleContext* this$0 = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::text::AttributeSet* attributes = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleContext$NamedStyle_h_