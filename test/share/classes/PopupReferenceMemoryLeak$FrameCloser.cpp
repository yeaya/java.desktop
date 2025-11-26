#include <PopupReferenceMemoryLeak$FrameCloser.h>

#include <PopupReferenceMemoryLeak.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $PopupReferenceMemoryLeak = ::PopupReferenceMemoryLeak;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _PopupReferenceMemoryLeak$FrameCloser_FieldInfo_[] = {
	{"this$0", "LPopupReferenceMemoryLeak;", nullptr, $FINAL | $SYNTHETIC, $field(PopupReferenceMemoryLeak$FrameCloser, this$0)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(PopupReferenceMemoryLeak$FrameCloser, frame)},
	{}
};

$MethodInfo _PopupReferenceMemoryLeak$FrameCloser_MethodInfo_[] = {
	{"<init>", "(LPopupReferenceMemoryLeak;Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(PopupReferenceMemoryLeak$FrameCloser::*)($PopupReferenceMemoryLeak*,$JFrame*)>(&PopupReferenceMemoryLeak$FrameCloser::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupReferenceMemoryLeak$FrameCloser_InnerClassesInfo_[] = {
	{"PopupReferenceMemoryLeak$FrameCloser", "PopupReferenceMemoryLeak", "FrameCloser", 0},
	{}
};

$ClassInfo _PopupReferenceMemoryLeak$FrameCloser_ClassInfo_ = {
	$ACC_SUPER,
	"PopupReferenceMemoryLeak$FrameCloser",
	"javax.swing.AbstractAction",
	nullptr,
	_PopupReferenceMemoryLeak$FrameCloser_FieldInfo_,
	_PopupReferenceMemoryLeak$FrameCloser_MethodInfo_,
	nullptr,
	nullptr,
	_PopupReferenceMemoryLeak$FrameCloser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PopupReferenceMemoryLeak"
};

$Object* allocate$PopupReferenceMemoryLeak$FrameCloser($Class* clazz) {
	return $of($alloc(PopupReferenceMemoryLeak$FrameCloser));
}

void PopupReferenceMemoryLeak$FrameCloser::init$($PopupReferenceMemoryLeak* this$0, $JFrame* f) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	$set(this, frame, f);
}

void PopupReferenceMemoryLeak$FrameCloser::actionPerformed($ActionEvent* e) {
	if (this->frame != nullptr) {
		$nc(this->frame)->setVisible(false);
		$nc(this->frame)->dispose();
		$set(this, frame, nullptr);
	}
}

PopupReferenceMemoryLeak$FrameCloser::PopupReferenceMemoryLeak$FrameCloser() {
}

$Class* PopupReferenceMemoryLeak$FrameCloser::load$($String* name, bool initialize) {
	$loadClass(PopupReferenceMemoryLeak$FrameCloser, name, initialize, &_PopupReferenceMemoryLeak$FrameCloser_ClassInfo_, allocate$PopupReferenceMemoryLeak$FrameCloser);
	return class$;
}

$Class* PopupReferenceMemoryLeak$FrameCloser::class$ = nullptr;