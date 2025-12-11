#include <sun/lwawt/macosx/CPrinterJob$1.h>

#include <java/awt/SecondaryLoop.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$1, this$0)},
	{}
};

$MethodInfo _CPrinterJob$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(static_cast<void(CPrinterJob$1::*)($CPrinterJob*)>(&CPrinterJob$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"completePrintLoop",
	"()V"
};

$InnerClassInfo _CPrinterJob$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPrinterJob$1_FieldInfo_,
	_CPrinterJob$1_MethodInfo_,
	nullptr,
	&_CPrinterJob$1_EnclosingMethodInfo_,
	_CPrinterJob$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$1($Class* clazz) {
	return $of($alloc(CPrinterJob$1));
}

void CPrinterJob$1::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

void CPrinterJob$1::run() {
	$synchronized(this) {
		$CPrinterJob::access$002(this->this$0, false);
	}
	if (this->this$0->printingLoop != nullptr) {
		$nc(this->this$0->printingLoop)->exit();
	}
}

CPrinterJob$1::CPrinterJob$1() {
}

$Class* CPrinterJob$1::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$1, name, initialize, &_CPrinterJob$1_ClassInfo_, allocate$CPrinterJob$1);
	return class$;
}

$Class* CPrinterJob$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun