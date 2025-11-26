#include <AbstractDocumentUndoConcurrentTest$3.h>

#include <AbstractDocumentUndoConcurrentTest.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest = ::AbstractDocumentUndoConcurrentTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $UndoManager = ::javax::swing::undo::UndoManager;

$FieldInfo _AbstractDocumentUndoConcurrentTest$3_FieldInfo_[] = {
	{"val$undoManager", "Ljavax/swing/undo/UndoManager;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocumentUndoConcurrentTest$3, val$undoManager)},
	{}
};

$MethodInfo _AbstractDocumentUndoConcurrentTest$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/undo/UndoManager;)V", nullptr, 0, $method(static_cast<void(AbstractDocumentUndoConcurrentTest$3::*)($String*,$UndoManager*)>(&AbstractDocumentUndoConcurrentTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractDocumentUndoConcurrentTest$3_EnclosingMethodInfo_ = {
	"AbstractDocumentUndoConcurrentTest",
	"test",
	"()V"
};

$InnerClassInfo _AbstractDocumentUndoConcurrentTest$3_InnerClassesInfo_[] = {
	{"AbstractDocumentUndoConcurrentTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocumentUndoConcurrentTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"AbstractDocumentUndoConcurrentTest$3",
	"java.lang.Thread",
	nullptr,
	_AbstractDocumentUndoConcurrentTest$3_FieldInfo_,
	_AbstractDocumentUndoConcurrentTest$3_MethodInfo_,
	nullptr,
	&_AbstractDocumentUndoConcurrentTest$3_EnclosingMethodInfo_,
	_AbstractDocumentUndoConcurrentTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AbstractDocumentUndoConcurrentTest"
};

$Object* allocate$AbstractDocumentUndoConcurrentTest$3($Class* clazz) {
	return $of($alloc(AbstractDocumentUndoConcurrentTest$3));
}

void AbstractDocumentUndoConcurrentTest$3::init$($String* arg0, $UndoManager* val$undoManager) {
	$set(this, val$undoManager, val$undoManager);
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$3::run() {
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	for (int32_t i = 0; i < 1000; ++i) {
		if ($nc(this->val$undoManager)->canUndoOrRedo()) {
			$nc(this->val$undoManager)->undoOrRedo();
		}
		if ($nc(this->val$undoManager)->canUndo()) {
			$nc(this->val$undoManager)->undo();
		}
	}
	$nc($System::out)->println("t3 done"_s);
}

AbstractDocumentUndoConcurrentTest$3::AbstractDocumentUndoConcurrentTest$3() {
}

$Class* AbstractDocumentUndoConcurrentTest$3::load$($String* name, bool initialize) {
	$loadClass(AbstractDocumentUndoConcurrentTest$3, name, initialize, &_AbstractDocumentUndoConcurrentTest$3_ClassInfo_, allocate$AbstractDocumentUndoConcurrentTest$3);
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$3::class$ = nullptr;