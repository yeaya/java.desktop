#ifndef _Test8015926_h_
#define _Test8015926_h_
//$ class Test8015926
//$ extends javax.swing.event.TreeModelListener
//$ implements java.lang.Runnable,java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <javax/swing/event/TreeModelListener.h>

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeModelEvent;
		}
	}
}

class $export Test8015926 : public ::javax::swing::event::TreeModelListener, public ::java::lang::Runnable, public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(Test8015926, $NO_CLASS_INIT, ::javax::swing::event::TreeModelListener, ::java::lang::Runnable, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	Test8015926();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	virtual $String* toString() override;
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* event) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* event) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* event) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* event) override;
	virtual void uncaughtException($Thread* thread, $Throwable* exception) override;
	::javax::swing::JTree* tree = nullptr;
};

#endif // _Test8015926_h_