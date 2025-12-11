#include <sun/swing/PrintingStatus$4.h>

#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus$4_FieldInfo_[] = {
	{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$4, this$0)},
	{}
};

$MethodInfo _PrintingStatus$4_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(static_cast<void(PrintingStatus$4::*)($PrintingStatus*)>(&PrintingStatus$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintingStatus$4_EnclosingMethodInfo_ = {
	"sun.swing.PrintingStatus",
	"dispose",
	"()V"
};

$InnerClassInfo _PrintingStatus$4_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintingStatus$4_FieldInfo_,
	_PrintingStatus$4_MethodInfo_,
	nullptr,
	&_PrintingStatus$4_EnclosingMethodInfo_,
	_PrintingStatus$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$4($Class* clazz) {
	return $of($alloc(PrintingStatus$4));
}

void PrintingStatus$4::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
}

void PrintingStatus$4::run() {
	this->this$0->disposeOnEDT();
}

PrintingStatus$4::PrintingStatus$4() {
}

$Class* PrintingStatus$4::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$4, name, initialize, &_PrintingStatus$4_ClassInfo_, allocate$PrintingStatus$4);
	return class$;
}

$Class* PrintingStatus$4::class$ = nullptr;

	} // swing
} // sun