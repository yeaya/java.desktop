#ifndef _javax_swing_text_AbstractDocument_h_
#define _javax_swing_text_AbstractDocument_h_
//$ class javax.swing.text.AbstractDocument
//$ extends javax.swing.text.Document
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/text/Document.h>

#pragma push_macro("BAD_LOCATION")
#undef BAD_LOCATION
#pragma push_macro("BAD_LOCK_STATE")
#undef BAD_LOCK_STATE

namespace java {
	namespace io {
		class ObjectInputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class Dictionary;
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
			class DocumentListener;
			class EventListenerList;
			class UndoableEditEvent;
			class UndoableEditListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AttributeContext;
			class AbstractDocument$BranchElement;
			class AbstractDocument$Content;
			class AbstractDocument$DefaultDocumentEvent;
			class AttributeSet;
			class DocumentFilter;
			class DocumentFilter$FilterBypass;
			class Element;
			class Position;
			class Segment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument : public ::javax::swing::text::Document, public ::java::io::Serializable {
	$class(AbstractDocument, 0, ::javax::swing::text::Document, ::java::io::Serializable)
public:
	AbstractDocument();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::swing::text::Element* getDefaultRootElement() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AbstractDocument$Content* data);
	void init$(::javax::swing::text::AbstractDocument$Content* data, ::javax::swing::text::AbstractDocument$AttributeContext* context);
	virtual void addDocumentListener(::javax::swing::event::DocumentListener* listener) override;
	virtual void addUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) override;
	$bytes* calculateBidiLevels(int32_t firstPStart, int32_t lastPEnd);
	virtual ::javax::swing::text::Element* createBranchElement(::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a);
	virtual ::javax::swing::text::Element* createLeafElement(::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a, int32_t p0, int32_t p1);
	virtual ::javax::swing::text::Position* createPosition(int32_t offs) override;
	virtual void dump(::java::io::PrintStream* out);
	virtual void fireChangedUpdate(::javax::swing::event::DocumentEvent* e);
	virtual void fireInsertUpdate(::javax::swing::event::DocumentEvent* e);
	virtual void fireRemoveUpdate(::javax::swing::event::DocumentEvent* e);
	virtual void fireUndoableEditUpdate(::javax::swing::event::UndoableEditEvent* e);
	virtual int32_t getAsynchronousLoadPriority();
	::javax::swing::text::AbstractDocument$AttributeContext* getAttributeContext();
	virtual ::javax::swing::text::Element* getBidiRootElement();
	::javax::swing::text::AbstractDocument$Content* getContent();
	$Thread* getCurrentWriter();
	virtual ::javax::swing::text::DocumentFilter* getDocumentFilter();
	virtual $Array<::javax::swing::event::DocumentListener>* getDocumentListeners();
	virtual ::java::util::Dictionary* getDocumentProperties();
	virtual ::javax::swing::text::Position* getEndPosition() override;
	::javax::swing::text::DocumentFilter$FilterBypass* getFilterBypass();
	virtual int32_t getLength() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual ::javax::swing::text::Element* getParagraphElement(int32_t pos) {return nullptr;}
	virtual $Object* getProperty(Object$* key) override;
	virtual $Array<::javax::swing::text::Element>* getRootElements() override;
	virtual ::javax::swing::text::Position* getStartPosition() override;
	virtual $String* getText(int32_t offset, int32_t length) override;
	virtual void getText(int32_t offset, int32_t length, ::javax::swing::text::Segment* txt) override;
	virtual $Array<::javax::swing::event::UndoableEditListener>* getUndoableEditListeners();
	void handleInsertString(int32_t offs, $String* str, ::javax::swing::text::AttributeSet* a);
	virtual void handleRemove(int32_t offs, int32_t len);
	virtual void insertString(int32_t offs, $String* str, ::javax::swing::text::AttributeSet* a) override;
	virtual void insertUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng, ::javax::swing::text::AttributeSet* attr);
	static bool isLeftToRight(::javax::swing::text::Document* doc, int32_t p0, int32_t p1);
	virtual void postRemoveUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng);
	virtual void putProperty(Object$* key, Object$* value) override;
	void readLock();
	void readObject(::java::io::ObjectInputStream* s);
	void readUnlock();
	virtual void remove(int32_t offs, int32_t len) override;
	virtual void removeDocumentListener(::javax::swing::event::DocumentListener* listener) override;
	virtual void removeUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) override;
	virtual void removeUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng);
	virtual void render(::java::lang::Runnable* r) override;
	virtual void replace(int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs);
	virtual void setAsynchronousLoadPriority(int32_t p);
	virtual void setDocumentFilter(::javax::swing::text::DocumentFilter* filter);
	virtual void setDocumentProperties(::java::util::Dictionary* x);
	virtual $String* toString() override;
	virtual void updateBidi(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng);
	void writeLock();
	void writeUnlock();
	int32_t numReaders = 0;
	$Thread* currWriter = nullptr;
	int32_t numWriters = 0;
	bool notifyingListeners = false;
	static ::java::lang::Boolean* defaultI18NProperty;
	::java::util::Dictionary* documentProperties = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::text::AbstractDocument$Content* data = nullptr;
	::javax::swing::text::AbstractDocument$AttributeContext* context = nullptr;
	::javax::swing::text::AbstractDocument$BranchElement* bidiRoot = nullptr;
	::javax::swing::text::DocumentFilter* documentFilter = nullptr;
	::javax::swing::text::DocumentFilter$FilterBypass* filterBypass = nullptr;
	static $String* BAD_LOCK_STATE;
	static $String* BAD_LOCATION;
	static $String* ParagraphElementName;
	static $String* ContentElementName;
	static $String* SectionElementName;
	static $String* BidiElementName;
	static $String* ElementNameAttribute;
	static $String* I18NProperty;
	static $Object* MultiByteProperty;
	static $String* AsyncLoadPriority;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("BAD_LOCATION")
#pragma pop_macro("BAD_LOCK_STATE")

#endif // _javax_swing_text_AbstractDocument_h_