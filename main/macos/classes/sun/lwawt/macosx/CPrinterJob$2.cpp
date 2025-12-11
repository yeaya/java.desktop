#include <sun/lwawt/macosx/CPrinterJob$2.h>

#include <java/awt/EventQueue.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/Toolkit.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$2_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$2, this$0)},
	{}
};

$MethodInfo _CPrinterJob$2_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(static_cast<void(CPrinterJob$2::*)($CPrinterJob*)>(&CPrinterJob$2::init$))},
	{"run", "()Ljava/awt/SecondaryLoop;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$2_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"print",
	"(Ljavax/print/attribute/PrintRequestAttributeSet;)V"
};

$InnerClassInfo _CPrinterJob$2_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CPrinterJob$2_FieldInfo_,
	_CPrinterJob$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/SecondaryLoop;>;",
	&_CPrinterJob$2_EnclosingMethodInfo_,
	_CPrinterJob$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$2($Class* clazz) {
	return $of($alloc(CPrinterJob$2));
}

void CPrinterJob$2::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* CPrinterJob$2::run() {
	$useLocalCurrentObjectStackCache();
	return $of($nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->createSecondaryLoop());
}

CPrinterJob$2::CPrinterJob$2() {
}

$Class* CPrinterJob$2::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$2, name, initialize, &_CPrinterJob$2_ClassInfo_, allocate$CPrinterJob$2);
	return class$;
}

$Class* CPrinterJob$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun