#ifndef _AbstractDocumentUndoConcurrentTest$3_h_
#define _AbstractDocumentUndoConcurrentTest$3_h_
//$ class AbstractDocumentUndoConcurrentTest$3
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace javax {
	namespace swing {
		namespace undo {
			class UndoManager;
		}
	}
}

class AbstractDocumentUndoConcurrentTest$3 : public ::java::lang::Thread {
	$class(AbstractDocumentUndoConcurrentTest$3, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AbstractDocumentUndoConcurrentTest$3();
	void init$($String* arg0, ::javax::swing::undo::UndoManager* val$undoManager);
	virtual void run() override;
	::javax::swing::undo::UndoManager* val$undoManager = nullptr;
};

#endif // _AbstractDocumentUndoConcurrentTest$3_h_