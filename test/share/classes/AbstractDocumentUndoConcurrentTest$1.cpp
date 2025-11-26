#include <AbstractDocumentUndoConcurrentTest$1.h>

#include <AbstractDocumentUndoConcurrentTest.h>
#include <java/text/Format.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest = ::AbstractDocumentUndoConcurrentTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Format = ::java::text::Format;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;

$MethodInfo _AbstractDocumentUndoConcurrentTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AbstractDocumentUndoConcurrentTest$1::*)($String*)>(&AbstractDocumentUndoConcurrentTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractDocumentUndoConcurrentTest$1_EnclosingMethodInfo_ = {
	"AbstractDocumentUndoConcurrentTest",
	"test",
	"()V"
};

$InnerClassInfo _AbstractDocumentUndoConcurrentTest$1_InnerClassesInfo_[] = {
	{"AbstractDocumentUndoConcurrentTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocumentUndoConcurrentTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"AbstractDocumentUndoConcurrentTest$1",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_AbstractDocumentUndoConcurrentTest$1_MethodInfo_,
	nullptr,
	&_AbstractDocumentUndoConcurrentTest$1_EnclosingMethodInfo_,
	_AbstractDocumentUndoConcurrentTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AbstractDocumentUndoConcurrentTest"
};

$Object* allocate$AbstractDocumentUndoConcurrentTest$1($Class* clazz) {
	return $of($alloc(AbstractDocumentUndoConcurrentTest$1));
}

void AbstractDocumentUndoConcurrentTest$1::init$($String* arg0) {
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
		for (int32_t i = 0; i < 1000; ++i) {
			$nc($AbstractDocumentUndoConcurrentTest::doc1)->insertString(0, $($nc($AbstractDocumentUndoConcurrentTest::format1)->format($($Integer::valueOf(i)))), nullptr);
			if ($nc($AbstractDocumentUndoConcurrentTest::doc1)->getLength() > 100) {
				$nc($AbstractDocumentUndoConcurrentTest::doc1)->remove(0, 12);
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($System::out)->println("t1 done"_s);
}

AbstractDocumentUndoConcurrentTest$1::AbstractDocumentUndoConcurrentTest$1() {
}

$Class* AbstractDocumentUndoConcurrentTest$1::load$($String* name, bool initialize) {
	$loadClass(AbstractDocumentUndoConcurrentTest$1, name, initialize, &_AbstractDocumentUndoConcurrentTest$1_ClassInfo_, allocate$AbstractDocumentUndoConcurrentTest$1);
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$1::class$ = nullptr;