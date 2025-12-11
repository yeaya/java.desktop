#include <Test8030118.h>

#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $PlainDocument = ::javax::swing::text::PlainDocument;

$FieldInfo _Test8030118_FieldInfo_[] = {
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(Test8030118, latch)},
	{"doc", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $FINAL, $field(Test8030118, doc)},
	{}
};

$MethodInfo _Test8030118_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Test8030118::*)($String*)>(&Test8030118::init$)), "java.lang.Exception"},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8030118::main)), "java.lang.Exception"},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test8030118_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8030118",
	"java.lang.Object",
	"javax.swing.event.DocumentListener,java.lang.Runnable",
	_Test8030118_FieldInfo_,
	_Test8030118_MethodInfo_
};

$Object* allocate$Test8030118($Class* clazz) {
	return $of($alloc(Test8030118));
}

int32_t Test8030118::hashCode() {
	 return this->$DocumentListener::hashCode();
}

bool Test8030118::equals(Object$* arg0) {
	 return this->$DocumentListener::equals(arg0);
}

$Object* Test8030118::clone() {
	 return this->$DocumentListener::clone();
}

$String* Test8030118::toString() {
	 return this->$DocumentListener::toString();
}

void Test8030118::finalize() {
	this->$DocumentListener::finalize();
}

void Test8030118::init$($String* string) {
	$set(this, latch, $new($CountDownLatch, 1));
	$set(this, doc, $new($PlainDocument));
	$nc(this->doc)->addDocumentListener(this);
	$nc(this->doc)->insertString(0, string, nullptr);
}

void Test8030118::run() {
	try {
		$nc(this->doc)->remove(0, $nc(this->doc)->getLength());
	} catch ($BadLocationException& exception) {
		$throwNew($Error, "unexpected"_s, exception);
	}
	$nc(this->latch)->countDown();
}

void Test8030118::insertUpdate($DocumentEvent* event) {
	$useLocalCurrentObjectStackCache();
	$$new($Thread, static_cast<$Runnable*>(this))->start();
	try {
		$init($TimeUnit);
		$nc(this->latch)->await(10, $TimeUnit::SECONDS);
	} catch ($InterruptedException& exception) {
		$throwNew($Error, "unexpected"_s, exception);
	}
	try {
		int32_t var$0 = event->getOffset();
		$nc($($nc(event)->getDocument()))->getText(var$0, event->getLength());
	} catch ($BadLocationException& exception) {
		$throwNew($Error, "concurrent modification"_s, exception);
	}
}

void Test8030118::removeUpdate($DocumentEvent* event) {
}

void Test8030118::changedUpdate($DocumentEvent* event) {
}

void Test8030118::main($StringArray* args) {
	$init(Test8030118);
	$new(Test8030118, "string"_s);
}

Test8030118::Test8030118() {
}

$Class* Test8030118::load$($String* name, bool initialize) {
	$loadClass(Test8030118, name, initialize, &_Test8030118_ClassInfo_, allocate$Test8030118);
	return class$;
}

$Class* Test8030118::class$ = nullptr;