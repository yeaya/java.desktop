#include <javax/swing/plaf/basic/BasicComboPopup$ItemHandler.h>

#include <java/awt/event/ItemEvent.h>
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

using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
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

$FieldInfo _BasicComboPopup$ItemHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ItemHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$ItemHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$ItemHandler::*)($BasicComboPopup*)>(&BasicComboPopup$ItemHandler::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$ItemHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$ItemHandler", "javax.swing.plaf.basic.BasicComboPopup", "ItemHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$ItemHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$ItemHandler",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	_BasicComboPopup$ItemHandler_FieldInfo_,
	_BasicComboPopup$ItemHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$ItemHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$ItemHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$ItemHandler));
}

void BasicComboPopup$ItemHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$ItemHandler::itemStateChanged($ItemEvent* e) {
	$nc($(this->this$0->getHandler()))->itemStateChanged(e);
}

BasicComboPopup$ItemHandler::BasicComboPopup$ItemHandler() {
}

$Class* BasicComboPopup$ItemHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$ItemHandler, name, initialize, &_BasicComboPopup$ItemHandler_ClassInfo_, allocate$BasicComboPopup$ItemHandler);
	return class$;
}

$Class* BasicComboPopup$ItemHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax