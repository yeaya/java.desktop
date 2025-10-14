#include <javax/swing/plaf/basic/BasicTreeUI$MouseHandler.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$MouseHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$MouseHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$MouseHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$MouseHandler::*)($BasicTreeUI*)>(&BasicTreeUI$MouseHandler::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$MouseHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$MouseHandler", "javax.swing.plaf.basic.BasicTreeUI", "MouseHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$MouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$MouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicTreeUI$MouseHandler_FieldInfo_,
	_BasicTreeUI$MouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$MouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$MouseHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$MouseHandler));
}

void BasicTreeUI$MouseHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicTreeUI$MouseHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicTreeUI$MouseHandler::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

void BasicTreeUI$MouseHandler::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

void BasicTreeUI$MouseHandler::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

BasicTreeUI$MouseHandler::BasicTreeUI$MouseHandler() {
}

$Class* BasicTreeUI$MouseHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$MouseHandler, name, initialize, &_BasicTreeUI$MouseHandler_ClassInfo_, allocate$BasicTreeUI$MouseHandler);
	return class$;
}

$Class* BasicTreeUI$MouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax