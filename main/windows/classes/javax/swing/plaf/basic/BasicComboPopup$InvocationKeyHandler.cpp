#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>

#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$InvocationKeyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$InvocationKeyHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$InvocationKeyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboPopup$InvocationKeyHandler::*)($BasicComboPopup*)>(&BasicComboPopup$InvocationKeyHandler::init$))},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$InvocationKeyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboPopup$InvocationKeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
	"java.awt.event.KeyAdapter",
	nullptr,
	_BasicComboPopup$InvocationKeyHandler_FieldInfo_,
	_BasicComboPopup$InvocationKeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$InvocationKeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$InvocationKeyHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$InvocationKeyHandler));
}

void BasicComboPopup$InvocationKeyHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicComboPopup$InvocationKeyHandler::keyReleased($KeyEvent* e) {
}

BasicComboPopup$InvocationKeyHandler::BasicComboPopup$InvocationKeyHandler() {
}

$Class* BasicComboPopup$InvocationKeyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$InvocationKeyHandler, name, initialize, &_BasicComboPopup$InvocationKeyHandler_ClassInfo_, allocate$BasicComboPopup$InvocationKeyHandler);
	return class$;
}

$Class* BasicComboPopup$InvocationKeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax