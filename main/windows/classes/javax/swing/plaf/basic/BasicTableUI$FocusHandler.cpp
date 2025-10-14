#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>

#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTableUI$Handler = ::javax::swing::plaf::basic::BasicTableUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicTableUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableUI$FocusHandler::*)($BasicTableUI*)>(&BasicTableUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTableUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$FocusHandler", "javax.swing.plaf.basic.BasicTableUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTableUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI$FocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicTableUI$FocusHandler_FieldInfo_,
	_BasicTableUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI"
};

$Object* allocate$BasicTableUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicTableUI$FocusHandler));
}

void BasicTableUI$FocusHandler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTableUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicTableUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicTableUI$FocusHandler::BasicTableUI$FocusHandler() {
}

$Class* BasicTableUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI$FocusHandler, name, initialize, &_BasicTableUI$FocusHandler_ClassInfo_, allocate$BasicTableUI$FocusHandler);
	return class$;
}

$Class* BasicTableUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax