#ifndef _CheckCommonUseCases$1_h_
#define _CheckCommonUseCases$1_h_
//$ class CheckCommonUseCases$1
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
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

class CheckCommonUseCases$1 : public ::javax::swing::event::DocumentListener {
	$class(CheckCommonUseCases$1, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	CheckCommonUseCases$1();
	void init$(::java::util::concurrent::atomic::AtomicInteger* val$insert, ::java::util::concurrent::atomic::AtomicInteger* val$remove, ::java::util::concurrent::atomic::AtomicInteger* val$update);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	::java::util::concurrent::atomic::AtomicInteger* val$update = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* val$remove = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* val$insert = nullptr;
};

#endif // _CheckCommonUseCases$1_h_