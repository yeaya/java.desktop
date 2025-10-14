#include <javax/swing/plaf/basic/BasicTreeUI$FocusHandler.h>

#include <java/awt/event/FocusEvent.h>
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

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
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

$FieldInfo _BasicTreeUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$FocusHandler::*)($BasicTreeUI*)>(&BasicTreeUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$FocusHandler", "javax.swing.plaf.basic.BasicTreeUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$FocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicTreeUI$FocusHandler_FieldInfo_,
	_BasicTreeUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$FocusHandler));
}

void BasicTreeUI$FocusHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicTreeUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicTreeUI$FocusHandler::BasicTreeUI$FocusHandler() {
}

$Class* BasicTreeUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$FocusHandler, name, initialize, &_BasicTreeUI$FocusHandler_ClassInfo_, allocate$BasicTreeUI$FocusHandler);
	return class$;
}

$Class* BasicTreeUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax