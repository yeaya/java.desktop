#include <javax/swing/plaf/basic/BasicListUI$FocusHandler.h>

#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicListUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI$FocusHandler::*)($BasicListUI*)>(&BasicListUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"repaintCellFocus", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicListUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$FocusHandler", "javax.swing.plaf.basic.BasicListUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$FocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicListUI$FocusHandler_FieldInfo_,
	_BasicListUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicListUI$FocusHandler));
}

void BasicListUI$FocusHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$FocusHandler::repaintCellFocus() {
	$nc($(this->this$0->getHandler()))->repaintCellFocus();
}

void BasicListUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicListUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicListUI$FocusHandler::BasicListUI$FocusHandler() {
}

$Class* BasicListUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$FocusHandler, name, initialize, &_BasicListUI$FocusHandler_ClassInfo_, allocate$BasicListUI$FocusHandler);
	return class$;
}

$Class* BasicListUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax