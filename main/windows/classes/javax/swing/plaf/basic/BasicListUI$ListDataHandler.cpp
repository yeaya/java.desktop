#include <javax/swing/plaf/basic/BasicListUI$ListDataHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$ListDataHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$ListDataHandler, this$0)},
	{}
};

$MethodInfo _BasicListUI$ListDataHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI$ListDataHandler::*)($BasicListUI*)>(&BasicListUI$ListDataHandler::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$ListDataHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$ListDataHandler", "javax.swing.plaf.basic.BasicListUI", "ListDataHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI$ListDataHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$ListDataHandler",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	_BasicListUI$ListDataHandler_FieldInfo_,
	_BasicListUI$ListDataHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$ListDataHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$ListDataHandler($Class* clazz) {
	return $of($alloc(BasicListUI$ListDataHandler));
}

void BasicListUI$ListDataHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$ListDataHandler::intervalAdded($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->intervalAdded(e);
}

void BasicListUI$ListDataHandler::intervalRemoved($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->intervalRemoved(e);
}

void BasicListUI$ListDataHandler::contentsChanged($ListDataEvent* e) {
	$nc($(this->this$0->getHandler()))->contentsChanged(e);
}

BasicListUI$ListDataHandler::BasicListUI$ListDataHandler() {
}

$Class* BasicListUI$ListDataHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$ListDataHandler, name, initialize, &_BasicListUI$ListDataHandler_ClassInfo_, allocate$BasicListUI$ListDataHandler);
	return class$;
}

$Class* BasicListUI$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax