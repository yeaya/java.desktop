#include <sun/lwawt/macosx/CWarningWindow$HidingTask.h>

#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>
#include <sun/lwawt/macosx/CWarningWindow$Lock.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $CWarningWindow$CancelableRunnable = ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CWarningWindow$HidingTask_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CWarningWindow$HidingTask, this$0)},
	{}
};

$MethodInfo _CWarningWindow$HidingTask_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CWarningWindow;)V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow$HidingTask::*)($CWarningWindow*)>(&CWarningWindow$HidingTask::init$))},
	{"perform", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CWarningWindow$HidingTask_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$HidingTask", "sun.lwawt.macosx.CWarningWindow", "HidingTask", $PRIVATE},
	{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CWarningWindow$HidingTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CWarningWindow$HidingTask",
	"sun.lwawt.macosx.CWarningWindow$CancelableRunnable",
	nullptr,
	_CWarningWindow$HidingTask_FieldInfo_,
	_CWarningWindow$HidingTask_MethodInfo_,
	nullptr,
	nullptr,
	_CWarningWindow$HidingTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow"
};

$Object* allocate$CWarningWindow$HidingTask($Class* clazz) {
	return $of($alloc(CWarningWindow$HidingTask));
}

void CWarningWindow$HidingTask::init$($CWarningWindow* this$0) {
	$set(this, this$0, this$0);
	$CWarningWindow$CancelableRunnable::init$();
}

void CWarningWindow$HidingTask::perform() {
	$synchronized(this->this$0->lock) {
		this->this$0->setVisible(false);
	}
	$synchronized(this->this$0->taskLock) {
		$set(this->this$0, showHideTask, nullptr);
	}
}

CWarningWindow$HidingTask::CWarningWindow$HidingTask() {
}

$Class* CWarningWindow$HidingTask::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$HidingTask, name, initialize, &_CWarningWindow$HidingTask_ClassInfo_, allocate$CWarningWindow$HidingTask);
	return class$;
}

$Class* CWarningWindow$HidingTask::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun