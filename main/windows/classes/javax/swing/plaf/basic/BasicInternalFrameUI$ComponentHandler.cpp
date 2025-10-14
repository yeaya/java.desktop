#include <javax/swing/plaf/basic/BasicInternalFrameUI$ComponentHandler.h>

#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$Handler = ::javax::swing::plaf::basic::BasicInternalFrameUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$ComponentHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$ComponentHandler, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameUI$ComponentHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicInternalFrameUI$ComponentHandler::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$ComponentHandler::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$ComponentHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler", "javax.swing.plaf.basic.BasicInternalFrameUI", "ComponentHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicInternalFrameUI$ComponentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler",
	"java.lang.Object",
	"java.awt.event.ComponentListener",
	_BasicInternalFrameUI$ComponentHandler_FieldInfo_,
	_BasicInternalFrameUI$ComponentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$ComponentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$ComponentHandler($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$ComponentHandler));
}

void BasicInternalFrameUI$ComponentHandler::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$ComponentHandler::componentResized($ComponentEvent* e) {
	$nc($(this->this$0->getHandler()))->componentResized(e);
}

void BasicInternalFrameUI$ComponentHandler::componentMoved($ComponentEvent* e) {
	$nc($(this->this$0->getHandler()))->componentMoved(e);
}

void BasicInternalFrameUI$ComponentHandler::componentShown($ComponentEvent* e) {
	$nc($(this->this$0->getHandler()))->componentShown(e);
}

void BasicInternalFrameUI$ComponentHandler::componentHidden($ComponentEvent* e) {
	$nc($(this->this$0->getHandler()))->componentHidden(e);
}

BasicInternalFrameUI$ComponentHandler::BasicInternalFrameUI$ComponentHandler() {
}

$Class* BasicInternalFrameUI$ComponentHandler::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$ComponentHandler, name, initialize, &_BasicInternalFrameUI$ComponentHandler_ClassInfo_, allocate$BasicInternalFrameUI$ComponentHandler);
	return class$;
}

$Class* BasicInternalFrameUI$ComponentHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax