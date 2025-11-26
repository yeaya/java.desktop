#include <javax/swing/JLayer$LayerEventController$2.h>

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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JLayer$LayerEventController = ::javax::swing::JLayer$LayerEventController;

namespace javax {
	namespace swing {

$FieldInfo _JLayer$LayerEventController$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JLayer$LayerEventController;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$2, this$0)},
	{}
};

$MethodInfo _JLayer$LayerEventController$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLayer$LayerEventController;)V", nullptr, 0, $method(static_cast<void(JLayer$LayerEventController$2::*)($JLayer$LayerEventController*)>(&JLayer$LayerEventController$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLayer$LayerEventController$2_EnclosingMethodInfo_ = {
	"javax.swing.JLayer$LayerEventController",
	"removeAWTEventListener",
	"()V"
};

$InnerClassInfo _JLayer$LayerEventController$2_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
	{"javax.swing.JLayer$LayerEventController$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLayer$LayerEventController$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLayer$LayerEventController$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JLayer$LayerEventController$2_FieldInfo_,
	_JLayer$LayerEventController$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JLayer$LayerEventController$2_EnclosingMethodInfo_,
	_JLayer$LayerEventController$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayer"
};

$Object* allocate$JLayer$LayerEventController$2($Class* clazz) {
	return $of($alloc(JLayer$LayerEventController$2));
}

void JLayer$LayerEventController$2::init$($JLayer$LayerEventController* this$0) {
	$set(this, this$0, this$0);
}

$Object* JLayer$LayerEventController$2::run() {
	$nc($($Toolkit::getDefaultToolkit()))->removeAWTEventListener(this->this$0);
	return $of(nullptr);
}

JLayer$LayerEventController$2::JLayer$LayerEventController$2() {
}

$Class* JLayer$LayerEventController$2::load$($String* name, bool initialize) {
	$loadClass(JLayer$LayerEventController$2, name, initialize, &_JLayer$LayerEventController$2_ClassInfo_, allocate$JLayer$LayerEventController$2);
	return class$;
}

$Class* JLayer$LayerEventController$2::class$ = nullptr;

	} // swing
} // javax