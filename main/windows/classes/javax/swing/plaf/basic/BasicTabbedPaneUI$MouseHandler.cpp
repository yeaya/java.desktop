#include <javax/swing/plaf/basic/BasicTabbedPaneUI$MouseHandler.h>

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
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$Handler = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$MouseHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$MouseHandler, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$MouseHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$MouseHandler::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$MouseHandler::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$MouseHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$MouseHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "MouseHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$MouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$MouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicTabbedPaneUI$MouseHandler_FieldInfo_,
	_BasicTabbedPaneUI$MouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$MouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$MouseHandler($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$MouseHandler));
}

void BasicTabbedPaneUI$MouseHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicTabbedPaneUI$MouseHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

BasicTabbedPaneUI$MouseHandler::BasicTabbedPaneUI$MouseHandler() {
}

$Class* BasicTabbedPaneUI$MouseHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$MouseHandler, name, initialize, &_BasicTabbedPaneUI$MouseHandler_ClassInfo_, allocate$BasicTabbedPaneUI$MouseHandler);
	return class$;
}

$Class* BasicTabbedPaneUI$MouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax