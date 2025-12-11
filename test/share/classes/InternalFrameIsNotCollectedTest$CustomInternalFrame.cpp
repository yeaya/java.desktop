#include <InternalFrameIsNotCollectedTest$CustomInternalFrame.h>

#include <InternalFrameIsNotCollectedTest.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$FieldInfo _InternalFrameIsNotCollectedTest$CustomInternalFrame_FieldInfo_[] = {
	{"finalized", "Z", nullptr, $PUBLIC | $STATIC | $VOLATILE, $staticField(InternalFrameIsNotCollectedTest$CustomInternalFrame, finalized)},
	{"waiter", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticField(InternalFrameIsNotCollectedTest$CustomInternalFrame, waiter)},
	{}
};

$MethodInfo _InternalFrameIsNotCollectedTest$CustomInternalFrame_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameIsNotCollectedTest$CustomInternalFrame::*)($String*)>(&InternalFrameIsNotCollectedTest$CustomInternalFrame::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _InternalFrameIsNotCollectedTest$CustomInternalFrame_InnerClassesInfo_[] = {
	{"InternalFrameIsNotCollectedTest$CustomInternalFrame", "InternalFrameIsNotCollectedTest", "CustomInternalFrame", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _InternalFrameIsNotCollectedTest$CustomInternalFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InternalFrameIsNotCollectedTest$CustomInternalFrame",
	"javax.swing.JInternalFrame",
	nullptr,
	_InternalFrameIsNotCollectedTest$CustomInternalFrame_FieldInfo_,
	_InternalFrameIsNotCollectedTest$CustomInternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_InternalFrameIsNotCollectedTest$CustomInternalFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InternalFrameIsNotCollectedTest"
};

$Object* allocate$InternalFrameIsNotCollectedTest$CustomInternalFrame($Class* clazz) {
	return $of($alloc(InternalFrameIsNotCollectedTest$CustomInternalFrame));
}

$volatile(bool) InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = false;
$Object* InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter = nullptr;

void InternalFrameIsNotCollectedTest$CustomInternalFrame::init$($String* title) {
	$JInternalFrame::init$(title, true, true, true, true);
}

void InternalFrameIsNotCollectedTest$CustomInternalFrame::finalize() {
	$nc($System::out)->println("Finalized!"_s);
	InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = true;
	$nc($of(InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter))->notifyAll();
}

void clinit$InternalFrameIsNotCollectedTest$CustomInternalFrame($Class* class$) {
	InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = false;
	$assignStatic(InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter, $new($Object));
}

InternalFrameIsNotCollectedTest$CustomInternalFrame::InternalFrameIsNotCollectedTest$CustomInternalFrame() {
}

$Class* InternalFrameIsNotCollectedTest$CustomInternalFrame::load$($String* name, bool initialize) {
	$loadClass(InternalFrameIsNotCollectedTest$CustomInternalFrame, name, initialize, &_InternalFrameIsNotCollectedTest$CustomInternalFrame_ClassInfo_, clinit$InternalFrameIsNotCollectedTest$CustomInternalFrame, allocate$InternalFrameIsNotCollectedTest$CustomInternalFrame);
	return class$;
}

$Class* InternalFrameIsNotCollectedTest$CustomInternalFrame::class$ = nullptr;