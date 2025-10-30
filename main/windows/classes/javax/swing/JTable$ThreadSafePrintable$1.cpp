#include <javax/swing/JTable$ThreadSafePrintable$1.h>

#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <javax/swing/JTable$ThreadSafePrintable.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable$ThreadSafePrintable = ::javax::swing::JTable$ThreadSafePrintable;

namespace javax {
	namespace swing {

$FieldInfo _JTable$ThreadSafePrintable$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTable$ThreadSafePrintable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, this$1)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$pageIndex)},
	{"val$pageFormat", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$pageFormat)},
	{"val$graphics", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$graphics)},
	{}
};

$MethodInfo _JTable$ThreadSafePrintable$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable$ThreadSafePrintable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)V", "()V", 0, $method(static_cast<void(JTable$ThreadSafePrintable$1::*)($JTable$ThreadSafePrintable*,$Graphics*,$PageFormat*,int32_t)>(&JTable$ThreadSafePrintable$1::init$))},
	{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$EnclosingMethodInfo _JTable$ThreadSafePrintable$1_EnclosingMethodInfo_ = {
	"javax.swing.JTable$ThreadSafePrintable",
	"print",
	"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
};

$InnerClassInfo _JTable$ThreadSafePrintable$1_InnerClassesInfo_[] = {
	{"javax.swing.JTable$ThreadSafePrintable", "javax.swing.JTable", "ThreadSafePrintable", $PRIVATE},
	{"javax.swing.JTable$ThreadSafePrintable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTable$ThreadSafePrintable$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$ThreadSafePrintable$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTable$ThreadSafePrintable$1_FieldInfo_,
	_JTable$ThreadSafePrintable$1_MethodInfo_,
	nullptr,
	&_JTable$ThreadSafePrintable$1_EnclosingMethodInfo_,
	_JTable$ThreadSafePrintable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$ThreadSafePrintable$1($Class* clazz) {
	return $of($alloc(JTable$ThreadSafePrintable$1));
}

void JTable$ThreadSafePrintable$1::init$($JTable$ThreadSafePrintable* this$1, $Graphics* val$graphics, $PageFormat* val$pageFormat, int32_t val$pageIndex) {
	$set(this, this$1, this$1);
	$set(this, val$graphics, val$graphics);
	$set(this, val$pageFormat, val$pageFormat);
	this->val$pageIndex = val$pageIndex;
}

void JTable$ThreadSafePrintable$1::run() {
	$synchronized(this) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					this->this$1->retVal = $nc(this->this$1->printDelegate)->print(this->val$graphics, this->val$pageFormat, this->val$pageIndex);
				} catch ($Throwable& throwable) {
					$set(this->this$1, retThrowable, throwable);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$of(this)->notifyAll();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

JTable$ThreadSafePrintable$1::JTable$ThreadSafePrintable$1() {
}

$Class* JTable$ThreadSafePrintable$1::load$($String* name, bool initialize) {
	$loadClass(JTable$ThreadSafePrintable$1, name, initialize, &_JTable$ThreadSafePrintable$1_ClassInfo_, allocate$JTable$ThreadSafePrintable$1);
	return class$;
}

$Class* JTable$ThreadSafePrintable$1::class$ = nullptr;

	} // swing
} // javax