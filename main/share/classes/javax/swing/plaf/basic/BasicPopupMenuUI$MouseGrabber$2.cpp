#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$2.h>

#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$MouseGrabber$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$2, this$0)},
	{"val$tk", "Ljava/awt/Toolkit;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$2, val$tk)},
	{}
};

$MethodInfo _BasicPopupMenuUI$MouseGrabber$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;Ljava/awt/Toolkit;)V", "()V", 0, $method(static_cast<void(BasicPopupMenuUI$MouseGrabber$2::*)($BasicPopupMenuUI$MouseGrabber*,$Toolkit*)>(&BasicPopupMenuUI$MouseGrabber$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicPopupMenuUI$MouseGrabber$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber",
	"ungrabWindow",
	"()V"
};

$InnerClassInfo _BasicPopupMenuUI$MouseGrabber$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicPopupMenuUI$MouseGrabber$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BasicPopupMenuUI$MouseGrabber$2_FieldInfo_,
	_BasicPopupMenuUI$MouseGrabber$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_BasicPopupMenuUI$MouseGrabber$2_EnclosingMethodInfo_,
	_BasicPopupMenuUI$MouseGrabber$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$MouseGrabber$2($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$MouseGrabber$2));
}

void BasicPopupMenuUI$MouseGrabber$2::init$($BasicPopupMenuUI$MouseGrabber* this$0, $Toolkit* val$tk) {
	$set(this, this$0, this$0);
	$set(this, val$tk, val$tk);
}

$Object* BasicPopupMenuUI$MouseGrabber$2::run() {
	$nc(this->val$tk)->removeAWTEventListener(this->this$0);
	return $of(nullptr);
}

BasicPopupMenuUI$MouseGrabber$2::BasicPopupMenuUI$MouseGrabber$2() {
}

$Class* BasicPopupMenuUI$MouseGrabber$2::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$MouseGrabber$2, name, initialize, &_BasicPopupMenuUI$MouseGrabber$2_ClassInfo_, allocate$BasicPopupMenuUI$MouseGrabber$2);
	return class$;
}

$Class* BasicPopupMenuUI$MouseGrabber$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax