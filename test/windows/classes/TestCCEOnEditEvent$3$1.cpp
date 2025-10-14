#include <TestCCEOnEditEvent$3$1.h>

#include <TestCCEOnEditEvent$3.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $TestCCEOnEditEvent$3 = ::TestCCEOnEditEvent$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $PlainDocument = ::javax::swing::text::PlainDocument;

$FieldInfo _TestCCEOnEditEvent$3$1_FieldInfo_[] = {
	{"this$1", "LTestCCEOnEditEvent$3;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$3$1, this$1)},
	{}
};

$MethodInfo _TestCCEOnEditEvent$3$1_MethodInfo_[] = {
	{"<init>", "(LTestCCEOnEditEvent$3;)V", nullptr, 0, $method(static_cast<void(TestCCEOnEditEvent$3$1::*)($TestCCEOnEditEvent$3*)>(&TestCCEOnEditEvent$3$1::init$))},
	{"fireUndoableEditUpdate", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _TestCCEOnEditEvent$3$1_EnclosingMethodInfo_ = {
	"TestCCEOnEditEvent$3",
	"createDefaultModel",
	"()Ljavax/swing/text/Document;"
};

$InnerClassInfo _TestCCEOnEditEvent$3$1_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$3", nullptr, nullptr, 0},
	{"TestCCEOnEditEvent$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestCCEOnEditEvent$3$1",
	"javax.swing.text.PlainDocument",
	nullptr,
	_TestCCEOnEditEvent$3$1_FieldInfo_,
	_TestCCEOnEditEvent$3$1_MethodInfo_,
	nullptr,
	&_TestCCEOnEditEvent$3$1_EnclosingMethodInfo_,
	_TestCCEOnEditEvent$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent"
};

$Object* allocate$TestCCEOnEditEvent$3$1($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent$3$1));
}

void TestCCEOnEditEvent$3$1::init$($TestCCEOnEditEvent$3* this$1) {
	$set(this, this$1, this$1);
	$PlainDocument::init$();
}

void TestCCEOnEditEvent$3$1::fireUndoableEditUpdate($UndoableEditEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t index = $nc(listeners)->length - 2; index >= 0; index -= 2) {
		$var($Object0, listenerType, listeners->get(index));
		$load($UndoableEditListener);
		if ($equals(listenerType, $UndoableEditListener::class$)) {
			$PlainDocument::fireUndoableEditUpdate(event);
		}
	}
}

TestCCEOnEditEvent$3$1::TestCCEOnEditEvent$3$1() {
}

$Class* TestCCEOnEditEvent$3$1::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent$3$1, name, initialize, &_TestCCEOnEditEvent$3$1_ClassInfo_, allocate$TestCCEOnEditEvent$3$1);
	return class$;
}

$Class* TestCCEOnEditEvent$3$1::class$ = nullptr;