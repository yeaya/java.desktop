#include <PrintManualTest_FitWidthMultiple.h>

#include <PrintManualTest_FitWidthMultiple$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef SECONDS

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _PrintManualTest_FitWidthMultiple_FieldInfo_[] = {
	{"testPassed", "Z", nullptr, $STATIC, $staticField(PrintManualTest_FitWidthMultiple, testPassed)},
	{"fr", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(PrintManualTest_FitWidthMultiple, fr)},
	{"instructFrame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(PrintManualTest_FitWidthMultiple, instructFrame)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(PrintManualTest_FitWidthMultiple, latch)},
	{}
};

$MethodInfo _PrintManualTest_FitWidthMultiple_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintManualTest_FitWidthMultiple::*)($CountDownLatch*)>(&PrintManualTest_FitWidthMultiple::init$))},
	{"addInfo", "(Ljava/lang/String;)Ljavax/swing/JScrollPane;", nullptr, $PUBLIC},
	{"createUIandTest", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintManualTest_FitWidthMultiple::*)()>(&PrintManualTest_FitWidthMultiple::createUIandTest)), "java.lang.Exception"},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PrintManualTest_FitWidthMultiple::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrintManualTest_FitWidthMultiple_InnerClassesInfo_[] = {
	{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintManualTest_FitWidthMultiple_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PrintManualTest_FitWidthMultiple",
	"javax.swing.JTable",
	"java.lang.Runnable",
	_PrintManualTest_FitWidthMultiple_FieldInfo_,
	_PrintManualTest_FitWidthMultiple_MethodInfo_,
	nullptr,
	nullptr,
	_PrintManualTest_FitWidthMultiple_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PrintManualTest_FitWidthMultiple$1,PrintManualTest_FitWidthMultiple$1$4,PrintManualTest_FitWidthMultiple$1$3,PrintManualTest_FitWidthMultiple$1$2,PrintManualTest_FitWidthMultiple$1$1"
};

$Object* allocate$PrintManualTest_FitWidthMultiple($Class* clazz) {
	return $of($alloc(PrintManualTest_FitWidthMultiple));
}

$String* PrintManualTest_FitWidthMultiple::toString() {
	 return this->$JTable::toString();
}

int32_t PrintManualTest_FitWidthMultiple::hashCode() {
	 return this->$JTable::hashCode();
}

bool PrintManualTest_FitWidthMultiple::equals(Object$* arg0) {
	 return this->$JTable::equals(arg0);
}

$Object* PrintManualTest_FitWidthMultiple::clone() {
	 return this->$JTable::clone();
}

void PrintManualTest_FitWidthMultiple::finalize() {
	this->$JTable::finalize();
}

bool PrintManualTest_FitWidthMultiple::testPassed = false;
$JFrame* PrintManualTest_FitWidthMultiple::fr = nullptr;
$JFrame* PrintManualTest_FitWidthMultiple::instructFrame = nullptr;

void PrintManualTest_FitWidthMultiple::init$($CountDownLatch* latch) {
	$JTable::init$();
	$set(this, latch, latch);
}

void PrintManualTest_FitWidthMultiple::run() {
	try {
		createUIandTest();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		dispose();
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $(ex->getMessage()));
	}
}

void PrintManualTest_FitWidthMultiple::createUIandTest() {
	$var($MessageFormat, header, $new($MessageFormat, "JTable Printing Header {0}"_s));
	$var($MessageFormat, footer, $new($MessageFormat, "JTable Printing Footer {0}"_s));
	$SwingUtilities::invokeAndWait($$new($PrintManualTest_FitWidthMultiple$1, this, header, footer));
}

void PrintManualTest_FitWidthMultiple::dispose() {
	$nc(PrintManualTest_FitWidthMultiple::instructFrame)->dispose();
	$nc(PrintManualTest_FitWidthMultiple::fr)->dispose();
}

$JScrollPane* PrintManualTest_FitWidthMultiple::addInfo($String* info) {
	$var($JTextArea, jta, $new($JTextArea, info, 8, 20));
	jta->setEditable(false);
	jta->setLineWrap(true);
	$var($JScrollPane, sp, $new($JScrollPane, jta));
	return sp;
}

void PrintManualTest_FitWidthMultiple::main($StringArray* argv) {
	$init(PrintManualTest_FitWidthMultiple);
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var(PrintManualTest_FitWidthMultiple, test, $new(PrintManualTest_FitWidthMultiple, latch));
	$var($Thread, T1, $new($Thread, static_cast<$Runnable*>(test)));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(60, $TimeUnit::SECONDS);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ie, $catch());
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (PrintManualTest_FitWidthMultiple::testPassed == false) {
		$throwNew($RuntimeException, "printed contents is beyond borders"_s);
	}
}

void clinit$PrintManualTest_FitWidthMultiple($Class* class$) {
	$assignStatic(PrintManualTest_FitWidthMultiple::fr, nullptr);
	$assignStatic(PrintManualTest_FitWidthMultiple::instructFrame, nullptr);
}

PrintManualTest_FitWidthMultiple::PrintManualTest_FitWidthMultiple() {
}

$Class* PrintManualTest_FitWidthMultiple::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple, name, initialize, &_PrintManualTest_FitWidthMultiple_ClassInfo_, clinit$PrintManualTest_FitWidthMultiple, allocate$PrintManualTest_FitWidthMultiple);
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple::class$ = nullptr;