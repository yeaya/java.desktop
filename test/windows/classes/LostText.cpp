#include <LostText.h>

#include <LostText$1.h>
#include <LostText$2.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $LostText$1 = ::LostText$1;
using $LostText$2 = ::LostText$2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _LostText_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(LostText, f)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(LostText, dialog)},
	{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(LostText, model)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(LostText, testResult)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(LostText, latch)},
	{}
};

$MethodInfo _LostText_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(LostText::*)($CountDownLatch*)>(&LostText::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(LostText::*)()>(&LostText::createUI)), "java.lang.Exception"},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"lostTextTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LostText::lostTextTest)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"testSelectionWithFilterTable", "()Ljavax/swing/table/TableModel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TableModel*(*)()>(&LostText::testSelectionWithFilterTable))},
	{}
};

$InnerClassInfo _LostText_InnerClassesInfo_[] = {
	{"LostText$2", nullptr, nullptr, 0},
	{"LostText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LostText_ClassInfo_ = {
	$ACC_SUPER,
	"LostText",
	"java.lang.Object",
	"java.lang.Runnable",
	_LostText_FieldInfo_,
	_LostText_MethodInfo_,
	nullptr,
	nullptr,
	_LostText_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LostText$2,LostText$1"
};

$Object* allocate$LostText($Class* clazz) {
	return $of($alloc(LostText));
}

$JFrame* LostText::f = nullptr;
$JDialog* LostText::dialog = nullptr;
$DefaultTableModel* LostText::model = nullptr;

void LostText::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void LostText::run() {
	try {
		createUI();
		lostTextTest();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if (LostText::f != nullptr) {
			$nc(LostText::f)->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void LostText::dispose() {
	$nc(LostText::dialog)->dispose();
	$nc(LostText::f)->dispose();
}

void LostText::lostTextTest() {
	$init(LostText);
	$SwingUtilities::invokeAndWait($$new($LostText$1));
}

$TableModel* LostText::testSelectionWithFilterTable() {
	$init(LostText);
	$assignStatic(LostText::model, $new($DefaultTableModel, 0, 1));
	int32_t last = 10;
	for (int32_t i = 0; i <= last; ++i) {
		$nc(LostText::model)->addRow($$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
	}
	return LostText::model;
}

void LostText::createUI() {
	$SwingUtilities::invokeAndWait($$new($LostText$2, this));
}

LostText::LostText() {
}

$Class* LostText::load$($String* name, bool initialize) {
	$loadClass(LostText, name, initialize, &_LostText_ClassInfo_, allocate$LostText);
	return class$;
}

$Class* LostText::class$ = nullptr;