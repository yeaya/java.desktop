#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicMenuItemUI$Handler = ::javax::swing::plaf::basic::BasicMenuItemUI$Handler;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _BasicMenuUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicMenuUI$MouseInputHandler::*)($BasicMenuUI*)>(&BasicMenuUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicMenuUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicMenuUI$MouseInputHandler_FieldInfo_,
	_BasicMenuUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuUI"
};

$Object* allocate$BasicMenuUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicMenuUI$MouseInputHandler));
}

void BasicMenuUI$MouseInputHandler::init$($BasicMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseClicked(e);
}

void BasicMenuUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicMenuUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

void BasicMenuUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseEntered(e);
}

void BasicMenuUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseExited(e);
}

void BasicMenuUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

void BasicMenuUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

BasicMenuUI$MouseInputHandler::BasicMenuUI$MouseInputHandler() {
}

$Class* BasicMenuUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuUI$MouseInputHandler, name, initialize, &_BasicMenuUI$MouseInputHandler_ClassInfo_, allocate$BasicMenuUI$MouseInputHandler);
	return class$;
}

$Class* BasicMenuUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax