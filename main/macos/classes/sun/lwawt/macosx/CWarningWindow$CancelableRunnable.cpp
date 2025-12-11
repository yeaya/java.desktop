#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>

#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CWarningWindow$CancelableRunnable_FieldInfo_[] = {
	{"perform", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CWarningWindow$CancelableRunnable, perform$)},
	{}
};

$MethodInfo _CWarningWindow$CancelableRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow$CancelableRunnable::*)()>(&CWarningWindow$CancelableRunnable::init$))},
	{"cancel", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CWarningWindow$CancelableRunnable::*)()>(&CWarningWindow$CancelableRunnable::cancel))},
	{"perform", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _CWarningWindow$CancelableRunnable_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CWarningWindow$CancelableRunnable_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.lwawt.macosx.CWarningWindow$CancelableRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	_CWarningWindow$CancelableRunnable_FieldInfo_,
	_CWarningWindow$CancelableRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_CWarningWindow$CancelableRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow"
};

$Object* allocate$CWarningWindow$CancelableRunnable($Class* clazz) {
	return $of($alloc(CWarningWindow$CancelableRunnable));
}

void CWarningWindow$CancelableRunnable::init$() {
	this->perform$ = true;
}

void CWarningWindow$CancelableRunnable::cancel() {
	this->perform$ = false;
}

void CWarningWindow$CancelableRunnable::run() {
	if (this->perform$) {
		perform();
	}
}

CWarningWindow$CancelableRunnable::CWarningWindow$CancelableRunnable() {
}

$Class* CWarningWindow$CancelableRunnable::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$CancelableRunnable, name, initialize, &_CWarningWindow$CancelableRunnable_ClassInfo_, allocate$CWarningWindow$CancelableRunnable);
	return class$;
}

$Class* CWarningWindow$CancelableRunnable::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun