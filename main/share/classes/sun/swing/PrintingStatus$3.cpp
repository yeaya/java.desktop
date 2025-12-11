#include <sun/swing/PrintingStatus$3.h>

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

$FieldInfo _PrintingStatus$3_FieldInfo_[] = {
	{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$3, this$0)},
	{"val$isModal", "Z", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$3, val$isModal)},
	{}
};

$MethodInfo _PrintingStatus$3_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus;Z)V", "()V", 0, $method(static_cast<void(PrintingStatus$3::*)($PrintingStatus*,bool)>(&PrintingStatus$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintingStatus$3_EnclosingMethodInfo_ = {
	"sun.swing.PrintingStatus",
	"showModal",
	"(Z)V"
};

$InnerClassInfo _PrintingStatus$3_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintingStatus$3_FieldInfo_,
	_PrintingStatus$3_MethodInfo_,
	nullptr,
	&_PrintingStatus$3_EnclosingMethodInfo_,
	_PrintingStatus$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$3($Class* clazz) {
	return $of($alloc(PrintingStatus$3));
}

void PrintingStatus$3::init$($PrintingStatus* this$0, bool val$isModal) {
	$set(this, this$0, this$0);
	this->val$isModal = val$isModal;
}

void PrintingStatus$3::run() {
	this->this$0->showModalOnEDT(this->val$isModal);
}

PrintingStatus$3::PrintingStatus$3() {
}

$Class* PrintingStatus$3::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$3, name, initialize, &_PrintingStatus$3_ClassInfo_, allocate$PrintingStatus$3);
	return class$;
}

$Class* PrintingStatus$3::class$ = nullptr;

	} // swing
} // sun