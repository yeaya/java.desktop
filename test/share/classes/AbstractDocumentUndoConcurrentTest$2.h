#ifndef _AbstractDocumentUndoConcurrentTest$2_h_
#define _AbstractDocumentUndoConcurrentTest$2_h_
//$ class AbstractDocumentUndoConcurrentTest$2
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AbstractDocumentUndoConcurrentTest$2 : public ::java::lang::Thread {
	$class(AbstractDocumentUndoConcurrentTest$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AbstractDocumentUndoConcurrentTest$2();
	void init$($String* arg0);
	virtual void run() override;
};

#endif // _AbstractDocumentUndoConcurrentTest$2_h_