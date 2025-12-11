#include <javax/swing/JLayer$LayerEventController$1.h>

#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <javax/swing/JLayer$LayerEventController.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayer$LayerEventController = ::javax::swing::JLayer$LayerEventController;

namespace javax {
	namespace swing {

$FieldInfo _JLayer$LayerEventController$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JLayer$LayerEventController;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$1, this$0)},
	{"val$eventMask", "J", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$1, val$eventMask)},
	{}
};

$MethodInfo _JLayer$LayerEventController$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLayer$LayerEventController;J)V", "()V", 0, $method(static_cast<void(JLayer$LayerEventController$1::*)($JLayer$LayerEventController*,int64_t)>(&JLayer$LayerEventController$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLayer$LayerEventController$1_EnclosingMethodInfo_ = {
	"javax.swing.JLayer$LayerEventController",
	"addAWTEventListener",
	"(J)V"
};

$InnerClassInfo _JLayer$LayerEventController$1_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
	{"javax.swing.JLayer$LayerEventController$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLayer$LayerEventController$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLayer$LayerEventController$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JLayer$LayerEventController$1_FieldInfo_,
	_JLayer$LayerEventController$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JLayer$LayerEventController$1_EnclosingMethodInfo_,
	_JLayer$LayerEventController$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayer"
};

$Object* allocate$JLayer$LayerEventController$1($Class* clazz) {
	return $of($alloc(JLayer$LayerEventController$1));
}

void JLayer$LayerEventController$1::init$($JLayer$LayerEventController* this$0, int64_t val$eventMask) {
	$set(this, this$0, this$0);
	this->val$eventMask = val$eventMask;
}

$Object* JLayer$LayerEventController$1::run() {
	$nc($($Toolkit::getDefaultToolkit()))->addAWTEventListener(this->this$0, this->val$eventMask);
	return $of(nullptr);
}

JLayer$LayerEventController$1::JLayer$LayerEventController$1() {
}

$Class* JLayer$LayerEventController$1::load$($String* name, bool initialize) {
	$loadClass(JLayer$LayerEventController$1, name, initialize, &_JLayer$LayerEventController$1_ClassInfo_, allocate$JLayer$LayerEventController$1);
	return class$;
}

$Class* JLayer$LayerEventController$1::class$ = nullptr;

	} // swing
} // javax