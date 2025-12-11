#include <AbstractDocumentUndoConcurrentTest$2.h>

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
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;

$MethodInfo _AbstractDocumentUndoConcurrentTest$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AbstractDocumentUndoConcurrentTest$2::*)($String*)>(&AbstractDocumentUndoConcurrentTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractDocumentUndoConcurrentTest$2_EnclosingMethodInfo_ = {
	"AbstractDocumentUndoConcurrentTest",
	"test",
	"()V"
};

$InnerClassInfo _AbstractDocumentUndoConcurrentTest$2_InnerClassesInfo_[] = {
	{"AbstractDocumentUndoConcurrentTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocumentUndoConcurrentTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"AbstractDocumentUndoConcurrentTest$2",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_AbstractDocumentUndoConcurrentTest$2_MethodInfo_,
	nullptr,
	&_AbstractDocumentUndoConcurrentTest$2_EnclosingMethodInfo_,
	_AbstractDocumentUndoConcurrentTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AbstractDocumentUndoConcurrentTest"
};

$Object* allocate$AbstractDocumentUndoConcurrentTest$2($Class* clazz) {
	return $of($alloc(AbstractDocumentUndoConcurrentTest$2));
}

void AbstractDocumentUndoConcurrentTest$2::init$($String* arg0) {
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
		for (int32_t i = 0; i < 1000; ++i) {
			$nc($AbstractDocumentUndoConcurrentTest::doc2)->insertString(0, $($nc($AbstractDocumentUndoConcurrentTest::format2)->format($($Integer::valueOf(i)))), nullptr);
			if ($nc($AbstractDocumentUndoConcurrentTest::doc2)->getLength() > 100) {
				$nc($AbstractDocumentUndoConcurrentTest::doc2)->remove(0, 13);
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($System::out)->println("t2 done"_s);
}

AbstractDocumentUndoConcurrentTest$2::AbstractDocumentUndoConcurrentTest$2() {
}

$Class* AbstractDocumentUndoConcurrentTest$2::load$($String* name, bool initialize) {
	$loadClass(AbstractDocumentUndoConcurrentTest$2, name, initialize, &_AbstractDocumentUndoConcurrentTest$2_ClassInfo_, allocate$AbstractDocumentUndoConcurrentTest$2);
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$2::class$ = nullptr;