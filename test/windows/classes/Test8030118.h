#ifndef _Test8030118_h_
#define _Test8030118_h_
//$ class Test8030118
//$ extends javax.swing.event.DocumentListener
//$ implements java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class PlainDocument;
		}
	}
}

class $export Test8030118 : public ::javax::swing::event::DocumentListener, public ::java::lang::Runnable {
	$class(Test8030118, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener, ::java::lang::Runnable)
public:
	Test8030118();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* string);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* event) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* event) override;
	static void main($StringArray* args);
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* event) override;
	virtual void run() override;
	virtual $String* toString() override;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	::javax::swing::text::PlainDocument* doc = nullptr;
};

#endif // _Test8030118_h_