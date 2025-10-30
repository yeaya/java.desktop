#include <javax/swing/plaf/basic/BasicMenuItemUI$MouseInputHandler.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuItemUI$Handler = ::javax::swing::plaf::basic::BasicMenuItemUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicMenuItemUI$MouseInputHandler_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicMenuItemUI$MouseInputHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BasicMenuItemUI$MouseInputHandler_Attribute_var$0},
	{}
};

$FieldInfo _BasicMenuItemUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuItemUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _BasicMenuItemUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicMenuItemUI$MouseInputHandler::*)($BasicMenuItemUI*)>(&BasicMenuItemUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuItemUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuItemUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuItemUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicMenuItemUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuItemUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicMenuItemUI$MouseInputHandler_FieldInfo_,
	_BasicMenuItemUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuItemUI$MouseInputHandler_InnerClassesInfo_,
	_BasicMenuItemUI$MouseInputHandler_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuItemUI"
};

$Object* allocate$BasicMenuItemUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicMenuItemUI$MouseInputHandler));
}

void BasicMenuItemUI$MouseInputHandler::init$($BasicMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuItemUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseClicked(e);
}

void BasicMenuItemUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicMenuItemUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

void BasicMenuItemUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseEntered(e);
}

void BasicMenuItemUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseExited(e);
}

void BasicMenuItemUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

void BasicMenuItemUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

BasicMenuItemUI$MouseInputHandler::BasicMenuItemUI$MouseInputHandler() {
}

$Class* BasicMenuItemUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuItemUI$MouseInputHandler, name, initialize, &_BasicMenuItemUI$MouseInputHandler_ClassInfo_, allocate$BasicMenuItemUI$MouseInputHandler);
	return class$;
}

$Class* BasicMenuItemUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax