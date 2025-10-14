#include <javax/swing/plaf/basic/BasicComboPopup$ListMouseMotionHandler.h>

#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _BasicComboPopup$ListMouseMotionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListMouseMotionHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$ListMouseMotionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$ListMouseMotionHandler::*)($BasicComboPopup*)>(&BasicComboPopup$ListMouseMotionHandler::init$))},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$ListMouseMotionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListMouseMotionHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$ListMouseMotionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler",
	"java.awt.event.MouseMotionAdapter",
	nullptr,
	_BasicComboPopup$ListMouseMotionHandler_FieldInfo_,
	_BasicComboPopup$ListMouseMotionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$ListMouseMotionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$ListMouseMotionHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$ListMouseMotionHandler));
}

void BasicComboPopup$ListMouseMotionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void BasicComboPopup$ListMouseMotionHandler::mouseMoved($MouseEvent* anEvent) {
	$nc($(this->this$0->getHandler()))->mouseMoved(anEvent);
}

BasicComboPopup$ListMouseMotionHandler::BasicComboPopup$ListMouseMotionHandler() {
}

$Class* BasicComboPopup$ListMouseMotionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$ListMouseMotionHandler, name, initialize, &_BasicComboPopup$ListMouseMotionHandler_ClassInfo_, allocate$BasicComboPopup$ListMouseMotionHandler);
	return class$;
}

$Class* BasicComboPopup$ListMouseMotionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax