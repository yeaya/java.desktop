#include <TestCCEOnEditEvent$4.h>

#include <TestCCEOnEditEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoManager.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoManager = ::javax::swing::undo::UndoManager;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

$FieldInfo _TestCCEOnEditEvent$4_FieldInfo_[] = {
	{"this$0", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$4, this$0)},
	{}
};

$MethodInfo _TestCCEOnEditEvent$4_MethodInfo_[] = {
	{"<init>", "(LTestCCEOnEditEvent;)V", nullptr, 0, $method(static_cast<void(TestCCEOnEditEvent$4::*)($TestCCEOnEditEvent*)>(&TestCCEOnEditEvent$4::init$))},
	{"undoableEditHappened", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCCEOnEditEvent$4_EnclosingMethodInfo_ = {
	"TestCCEOnEditEvent",
	"createTextArea",
	"()V"
};

$InnerClassInfo _TestCCEOnEditEvent$4_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent$4_ClassInfo_ = {
	$ACC_SUPER,
	"TestCCEOnEditEvent$4",
	"javax.swing.undo.UndoManager",
	nullptr,
	_TestCCEOnEditEvent$4_FieldInfo_,
	_TestCCEOnEditEvent$4_MethodInfo_,
	nullptr,
	&_TestCCEOnEditEvent$4_EnclosingMethodInfo_,
	_TestCCEOnEditEvent$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent"
};

$Object* allocate$TestCCEOnEditEvent$4($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent$4));
}

void TestCCEOnEditEvent$4::init$($TestCCEOnEditEvent* this$0) {
	$set(this, this$0, this$0);
	$UndoManager::init$();
}

void TestCCEOnEditEvent$4::undoableEditHappened($UndoableEditEvent* event) {
	$var($CompoundEdit, edit, nullptr);
	try {
		$assign(edit, $cast($CompoundEdit, $nc(event)->getEdit()));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($RuntimeException, "Class Cast Exception is thrown on (CompoundEdit) UndoableEditEvent.getEdit()"_s);
	}
	$var($AbstractDocument$DefaultDocumentEvent, documentEvent, $cast($AbstractDocument$DefaultDocumentEvent, edit));
	$var($DocumentEvent$EventType, editType, $nc(documentEvent)->getType());
	int32_t editOffset = documentEvent->getOffset();
	int32_t editLength = documentEvent->getLength();
}

TestCCEOnEditEvent$4::TestCCEOnEditEvent$4() {
}

$Class* TestCCEOnEditEvent$4::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent$4, name, initialize, &_TestCCEOnEditEvent$4_ClassInfo_, allocate$TestCCEOnEditEvent$4);
	return class$;
}

$Class* TestCCEOnEditEvent$4::class$ = nullptr;