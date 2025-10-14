#include <javax/swing/plaf/basic/BasicComboBoxUI$ListDataHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$Handler = ::javax::swing::plaf::basic::BasicComboBoxUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$ListDataHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ListDataHandler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$ListDataHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI$ListDataHandler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$ListDataHandler::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$ListDataHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ListDataHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$ListDataHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	_BasicComboBoxUI$ListDataHandler_FieldInfo_,
	_BasicComboBoxUI$ListDataHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$ListDataHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$ListDataHandler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$ListDataHandler));
}

void BasicComboBoxUI$ListDataHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ListDataHandler::contentsChanged($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->contentsChanged(e);
}

void BasicComboBoxUI$ListDataHandler::intervalAdded($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->intervalAdded(e);
}

void BasicComboBoxUI$ListDataHandler::intervalRemoved($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->intervalRemoved(e);
}

BasicComboBoxUI$ListDataHandler::BasicComboBoxUI$ListDataHandler() {
}

$Class* BasicComboBoxUI$ListDataHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$ListDataHandler, name, initialize, &_BasicComboBoxUI$ListDataHandler_ClassInfo_, allocate$BasicComboBoxUI$ListDataHandler);
	return class$;
}

$Class* BasicComboBoxUI$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax