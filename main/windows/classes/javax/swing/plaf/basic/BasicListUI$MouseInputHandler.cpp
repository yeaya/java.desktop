#include <javax/swing/plaf/basic/BasicListUI$MouseInputHandler.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _BasicListUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI$MouseInputHandler::*)($BasicListUI*)>(&BasicListUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$MouseInputHandler", "javax.swing.plaf.basic.BasicListUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicListUI$MouseInputHandler_FieldInfo_,
	_BasicListUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicListUI$MouseInputHandler));
}

void BasicListUI$MouseInputHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseClicked(e);
}

void BasicListUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseEntered(e);
}

void BasicListUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseExited(e);
}

void BasicListUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicListUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

void BasicListUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

void BasicListUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

BasicListUI$MouseInputHandler::BasicListUI$MouseInputHandler() {
}

$Class* BasicListUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$MouseInputHandler, name, initialize, &_BasicListUI$MouseInputHandler_ClassInfo_, allocate$BasicListUI$MouseInputHandler);
	return class$;
}

$Class* BasicListUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax