#ifndef _AbstractDocumentUndoConcurrentTest$1_h_
#define _AbstractDocumentUndoConcurrentTest$1_h_
//$ class AbstractDocumentUndoConcurrentTest$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AbstractDocumentUndoConcurrentTest$1 : public ::java::lang::Thread {
	$class(AbstractDocumentUndoConcurrentTest$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AbstractDocumentUndoConcurrentTest$1();
	void init$($String* arg0);
	virtual void run() override;
};

#endif // _AbstractDocumentUndoConcurrentTest$1_h_