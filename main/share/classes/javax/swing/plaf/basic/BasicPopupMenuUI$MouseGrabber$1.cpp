#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef GRAB_EVENT_MASK
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_WHEEL_EVENT_MASK
#undef WINDOW_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$MouseGrabber$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$1, this$0)},
	{"val$tk", "Ljava/awt/Toolkit;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$1, val$tk)},
	{}
};

$MethodInfo _BasicPopupMenuUI$MouseGrabber$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;Ljava/awt/Toolkit;)V", "()V", 0, $method(static_cast<void(BasicPopupMenuUI$MouseGrabber$1::*)($BasicPopupMenuUI$MouseGrabber*,$Toolkit*)>(&BasicPopupMenuUI$MouseGrabber$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicPopupMenuUI$MouseGrabber$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber",
	"grabWindow",
	"([Ljavax/swing/MenuElement;)V"
};

$InnerClassInfo _BasicPopupMenuUI$MouseGrabber$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicPopupMenuUI$MouseGrabber$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BasicPopupMenuUI$MouseGrabber$1_FieldInfo_,
	_BasicPopupMenuUI$MouseGrabber$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_BasicPopupMenuUI$MouseGrabber$1_EnclosingMethodInfo_,
	_BasicPopupMenuUI$MouseGrabber$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$MouseGrabber$1($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$MouseGrabber$1));
}

void BasicPopupMenuUI$MouseGrabber$1::init$($BasicPopupMenuUI$MouseGrabber* this$0, $Toolkit* val$tk) {
	$set(this, this$0, this$0);
	$set(this, val$tk, val$tk);
}

$Object* BasicPopupMenuUI$MouseGrabber$1::run() {
	$nc(this->val$tk)->addAWTEventListener(this->this$0, ((($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::MOUSE_MOTION_EVENT_MASK) | $AWTEvent::MOUSE_WHEEL_EVENT_MASK) | $AWTEvent::WINDOW_EVENT_MASK) | $SunToolkit::GRAB_EVENT_MASK);
	return $of(nullptr);
}

BasicPopupMenuUI$MouseGrabber$1::BasicPopupMenuUI$MouseGrabber$1() {
}

$Class* BasicPopupMenuUI$MouseGrabber$1::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$MouseGrabber$1, name, initialize, &_BasicPopupMenuUI$MouseGrabber$1_ClassInfo_, allocate$BasicPopupMenuUI$MouseGrabber$1);
	return class$;
}

$Class* BasicPopupMenuUI$MouseGrabber$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax