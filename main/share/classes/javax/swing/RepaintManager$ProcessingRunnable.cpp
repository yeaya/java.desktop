#include <javax/swing/RepaintManager$ProcessingRunnable.h>

#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$ProcessingRunnable_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$ProcessingRunnable, this$0)},
	{"pending", "Z", nullptr, $PRIVATE, $field(RepaintManager$ProcessingRunnable, pending)},
	{}
};

$MethodInfo _RepaintManager$ProcessingRunnable_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$ProcessingRunnable::*)($RepaintManager*)>(&RepaintManager$ProcessingRunnable::init$))},
	{"markPending", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<bool(RepaintManager$ProcessingRunnable::*)()>(&RepaintManager$ProcessingRunnable::markPending))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RepaintManager$ProcessingRunnable_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$ProcessingRunnable", "javax.swing.RepaintManager", "ProcessingRunnable", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _RepaintManager$ProcessingRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.RepaintManager$ProcessingRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	_RepaintManager$ProcessingRunnable_FieldInfo_,
	_RepaintManager$ProcessingRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager$ProcessingRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$ProcessingRunnable($Class* clazz) {
	return $of($alloc(RepaintManager$ProcessingRunnable));
}

void RepaintManager$ProcessingRunnable::init$($RepaintManager* this$0) {
	$set(this, this$0, this$0);
}

bool RepaintManager$ProcessingRunnable::markPending() {
	$synchronized(this) {
		if (!this->pending) {
			this->pending = true;
			return true;
		}
		return false;
	}
}

void RepaintManager$ProcessingRunnable::run() {
	$synchronized(this) {
		this->pending = false;
	}
	this->this$0->scheduleHeavyWeightPaints();
	this->this$0->validateInvalidComponents();
	this->this$0->prePaintDirtyRegions();
}

RepaintManager$ProcessingRunnable::RepaintManager$ProcessingRunnable() {
}

$Class* RepaintManager$ProcessingRunnable::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$ProcessingRunnable, name, initialize, &_RepaintManager$ProcessingRunnable_ClassInfo_, allocate$RepaintManager$ProcessingRunnable);
	return class$;
}

$Class* RepaintManager$ProcessingRunnable::class$ = nullptr;

	} // swing
} // javax