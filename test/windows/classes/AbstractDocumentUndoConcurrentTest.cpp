#include <AbstractDocumentUndoConcurrentTest.h>

#include <AbstractDocumentUndoConcurrentTest$1.h>
#include <AbstractDocumentUndoConcurrentTest$2.h>
#include <AbstractDocumentUndoConcurrentTest$3.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/StringContent.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest$1 = ::AbstractDocumentUndoConcurrentTest$1;
using $AbstractDocumentUndoConcurrentTest$2 = ::AbstractDocumentUndoConcurrentTest$2;
using $AbstractDocumentUndoConcurrentTest$3 = ::AbstractDocumentUndoConcurrentTest$3;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $StringContent = ::javax::swing::text::StringContent;
using $UndoManager = ::javax::swing::undo::UndoManager;

$FieldInfo _AbstractDocumentUndoConcurrentTest_FieldInfo_[] = {
	{"barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, barrier)},
	{"doc1", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, doc1)},
	{"doc2", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, doc2)},
	{"format1", "Ljava/text/Format;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, format1)},
	{"format2", "Ljava/text/Format;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, format2)},
	{}
};

$MethodInfo _AbstractDocumentUndoConcurrentTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocumentUndoConcurrentTest::*)()>(&AbstractDocumentUndoConcurrentTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AbstractDocumentUndoConcurrentTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&AbstractDocumentUndoConcurrentTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AbstractDocumentUndoConcurrentTest_InnerClassesInfo_[] = {
	{"AbstractDocumentUndoConcurrentTest$3", nullptr, nullptr, 0},
	{"AbstractDocumentUndoConcurrentTest$2", nullptr, nullptr, 0},
	{"AbstractDocumentUndoConcurrentTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocumentUndoConcurrentTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AbstractDocumentUndoConcurrentTest",
	"java.lang.Object",
	nullptr,
	_AbstractDocumentUndoConcurrentTest_FieldInfo_,
	_AbstractDocumentUndoConcurrentTest_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocumentUndoConcurrentTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AbstractDocumentUndoConcurrentTest$3,AbstractDocumentUndoConcurrentTest$2,AbstractDocumentUndoConcurrentTest$1"
};

$Object* allocate$AbstractDocumentUndoConcurrentTest($Class* clazz) {
	return $of($alloc(AbstractDocumentUndoConcurrentTest));
}

$CyclicBarrier* AbstractDocumentUndoConcurrentTest::barrier = nullptr;
$PlainDocument* AbstractDocumentUndoConcurrentTest::doc1 = nullptr;
$PlainDocument* AbstractDocumentUndoConcurrentTest::doc2 = nullptr;
$Format* AbstractDocumentUndoConcurrentTest::format1 = nullptr;
$Format* AbstractDocumentUndoConcurrentTest::format2 = nullptr;

void AbstractDocumentUndoConcurrentTest::init$() {
}

void AbstractDocumentUndoConcurrentTest::main($StringArray* args) {
	$init(AbstractDocumentUndoConcurrentTest);
	$useLocalCurrentObjectStackCache();
	test();
	$init($System);
	$nc($System::out)->println($($nc(AbstractDocumentUndoConcurrentTest::doc1)->getText(0, $nc(AbstractDocumentUndoConcurrentTest::doc1)->getLength())));
	$nc($System::out)->println($($nc(AbstractDocumentUndoConcurrentTest::doc2)->getText(0, $nc(AbstractDocumentUndoConcurrentTest::doc2)->getLength())));
	$nc($System::out)->println("ok"_s);
}

void AbstractDocumentUndoConcurrentTest::test() {
	$init(AbstractDocumentUndoConcurrentTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(AbstractDocumentUndoConcurrentTest::doc1, $new($PlainDocument, $$new($StringContent)));
	$var($UndoManager, undoManager, $new($UndoManager));
	$nc(AbstractDocumentUndoConcurrentTest::doc1)->addUndoableEditListener(undoManager);
	$nc(AbstractDocumentUndoConcurrentTest::doc1)->insertString(0, "<Test1 XXXX>"_s, nullptr);
	$assignStatic(AbstractDocumentUndoConcurrentTest::doc2, $new($PlainDocument, $$new($StringContent)));
	$nc(AbstractDocumentUndoConcurrentTest::doc2)->addUndoableEditListener(undoManager);
	$nc(AbstractDocumentUndoConcurrentTest::doc2)->insertString(0, "<Test22 XXXX>"_s, nullptr);
	$var($Thread, t1, $new($AbstractDocumentUndoConcurrentTest$1, "Thread doc1"_s));
	$var($Thread, t2, $new($AbstractDocumentUndoConcurrentTest$2, "Thread doc2"_s));
	$var($Thread, t3, $new($AbstractDocumentUndoConcurrentTest$3, "Undo/Redo Thread"_s, undoManager));
	t1->start();
	t2->start();
	t3->start();
	t1->join();
	t2->join();
	t3->join();
}

void clinit$AbstractDocumentUndoConcurrentTest($Class* class$) {
	$assignStatic(AbstractDocumentUndoConcurrentTest::barrier, $new($CyclicBarrier, 3));
	$assignStatic(AbstractDocumentUndoConcurrentTest::format1, $new($DecimalFormat, "<Test1 0000>"_s));
	$assignStatic(AbstractDocumentUndoConcurrentTest::format2, $new($DecimalFormat, "<Test22 0000>"_s));
}

AbstractDocumentUndoConcurrentTest::AbstractDocumentUndoConcurrentTest() {
}

$Class* AbstractDocumentUndoConcurrentTest::load$($String* name, bool initialize) {
	$loadClass(AbstractDocumentUndoConcurrentTest, name, initialize, &_AbstractDocumentUndoConcurrentTest_ClassInfo_, clinit$AbstractDocumentUndoConcurrentTest, allocate$AbstractDocumentUndoConcurrentTest);
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest::class$ = nullptr;