#include <javax/swing/text/JTextComponent$2.h>

#include <java/awt/print/PrinterJob.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$2, this$0)},
	{"val$printingStatus", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$2, val$printingStatus)},
	{"val$attr", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$2, val$attr)},
	{"val$job", "Ljava/awt/print/PrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$2, val$job)},
	{}
};

$MethodInfo _JTextComponent$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;Ljava/awt/print/PrinterJob;Ljavax/print/attribute/PrintRequestAttributeSet;Lsun/swing/PrintingStatus;)V", "()V", 0, $method(static_cast<void(JTextComponent$2::*)($JTextComponent*,$PrinterJob*,$PrintRequestAttributeSet*,$PrintingStatus*)>(&JTextComponent$2::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _JTextComponent$2_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent",
	"print",
	"(Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;Z)Z"
};

$InnerClassInfo _JTextComponent$2_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_JTextComponent$2_FieldInfo_,
	_JTextComponent$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	&_JTextComponent$2_EnclosingMethodInfo_,
	_JTextComponent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$2($Class* clazz) {
	return $of($alloc(JTextComponent$2));
}

void JTextComponent$2::init$($JTextComponent* this$0, $PrinterJob* val$job, $PrintRequestAttributeSet* val$attr, $PrintingStatus* val$printingStatus) {
	$set(this, this$0, this$0);
	$set(this, val$job, val$job);
	$set(this, val$attr, val$attr);
	$set(this, val$printingStatus, val$printingStatus);
}

$Object* JTextComponent$2::call() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->val$job)->print(this->val$attr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->val$printingStatus != nullptr) {
				$nc(this->val$printingStatus)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(nullptr);
}

JTextComponent$2::JTextComponent$2() {
}

$Class* JTextComponent$2::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$2, name, initialize, &_JTextComponent$2_ClassInfo_, allocate$JTextComponent$2);
	return class$;
}

$Class* JTextComponent$2::class$ = nullptr;

		} // text
	} // swing
} // javax