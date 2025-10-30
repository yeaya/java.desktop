#include <javax/swing/plaf/basic/BasicComboPopup$InvocationMouseHandler.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
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

$FieldInfo _BasicComboPopup$InvocationMouseHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$InvocationMouseHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$InvocationMouseHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$InvocationMouseHandler::*)($BasicComboPopup*)>(&BasicComboPopup$InvocationMouseHandler::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$InvocationMouseHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationMouseHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$InvocationMouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicComboPopup$InvocationMouseHandler_FieldInfo_,
	_BasicComboPopup$InvocationMouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$InvocationMouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$InvocationMouseHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$InvocationMouseHandler));
}

void BasicComboPopup$InvocationMouseHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicComboPopup$InvocationMouseHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicComboPopup$InvocationMouseHandler::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

BasicComboPopup$InvocationMouseHandler::BasicComboPopup$InvocationMouseHandler() {
}

$Class* BasicComboPopup$InvocationMouseHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$InvocationMouseHandler, name, initialize, &_BasicComboPopup$InvocationMouseHandler_ClassInfo_, allocate$BasicComboPopup$InvocationMouseHandler);
	return class$;
}

$Class* BasicComboPopup$InvocationMouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax