#include <sun/swing/PrintingStatus$NotificationPrintable$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/PrintingStatus$NotificationPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrintingStatus$NotificationPrintable = ::sun::swing::PrintingStatus$NotificationPrintable;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus$NotificationPrintable$1_FieldInfo_[] = {
	{"this$1", "Lsun/swing/PrintingStatus$NotificationPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$NotificationPrintable$1, this$1)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$NotificationPrintable$1, val$pageIndex)},
	{}
};

$MethodInfo _PrintingStatus$NotificationPrintable$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus$NotificationPrintable;I)V", "()V", 0, $method(static_cast<void(PrintingStatus$NotificationPrintable$1::*)($PrintingStatus$NotificationPrintable*,int32_t)>(&PrintingStatus$NotificationPrintable$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintingStatus$NotificationPrintable$1_EnclosingMethodInfo_ = {
	"sun.swing.PrintingStatus$NotificationPrintable",
	"print",
	"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
};

$InnerClassInfo _PrintingStatus$NotificationPrintable$1_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$NotificationPrintable", "sun.swing.PrintingStatus", "NotificationPrintable", $PRIVATE},
	{"sun.swing.PrintingStatus$NotificationPrintable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$NotificationPrintable$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$NotificationPrintable$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintingStatus$NotificationPrintable$1_FieldInfo_,
	_PrintingStatus$NotificationPrintable$1_MethodInfo_,
	nullptr,
	&_PrintingStatus$NotificationPrintable$1_EnclosingMethodInfo_,
	_PrintingStatus$NotificationPrintable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$NotificationPrintable$1($Class* clazz) {
	return $of($alloc(PrintingStatus$NotificationPrintable$1));
}

void PrintingStatus$NotificationPrintable$1::init$($PrintingStatus$NotificationPrintable* this$1, int32_t val$pageIndex) {
	$set(this, this$1, this$1);
	this->val$pageIndex = val$pageIndex;
}

void PrintingStatus$NotificationPrintable$1::run() {
	this->this$1->updateStatusOnEDT(this->val$pageIndex);
}

PrintingStatus$NotificationPrintable$1::PrintingStatus$NotificationPrintable$1() {
}

$Class* PrintingStatus$NotificationPrintable$1::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$NotificationPrintable$1, name, initialize, &_PrintingStatus$NotificationPrintable$1_ClassInfo_, allocate$PrintingStatus$NotificationPrintable$1);
	return class$;
}

$Class* PrintingStatus$NotificationPrintable$1::class$ = nullptr;

	} // swing
} // sun