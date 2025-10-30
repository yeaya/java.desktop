#include <javax/swing/plaf/basic/BasicComboPopup$InvocationMouseMotionHandler.h>

#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicComboPopup$Handler = ::javax::swing::plaf::basic::BasicComboPopup$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$InvocationMouseMotionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$InvocationMouseMotionHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$InvocationMouseMotionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$InvocationMouseMotionHandler::*)($BasicComboPopup*)>(&BasicComboPopup$InvocationMouseMotionHandler::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$InvocationMouseMotionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationMouseMotionHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$InvocationMouseMotionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler",
	"java.awt.event.MouseMotionAdapter",
	nullptr,
	_BasicComboPopup$InvocationMouseMotionHandler_FieldInfo_,
	_BasicComboPopup$InvocationMouseMotionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$InvocationMouseMotionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$InvocationMouseMotionHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$InvocationMouseMotionHandler));
}

void BasicComboPopup$InvocationMouseMotionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void BasicComboPopup$InvocationMouseMotionHandler::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

BasicComboPopup$InvocationMouseMotionHandler::BasicComboPopup$InvocationMouseMotionHandler() {
}

$Class* BasicComboPopup$InvocationMouseMotionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$InvocationMouseMotionHandler, name, initialize, &_BasicComboPopup$InvocationMouseMotionHandler_ClassInfo_, allocate$BasicComboPopup$InvocationMouseMotionHandler);
	return class$;
}

$Class* BasicComboPopup$InvocationMouseMotionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax