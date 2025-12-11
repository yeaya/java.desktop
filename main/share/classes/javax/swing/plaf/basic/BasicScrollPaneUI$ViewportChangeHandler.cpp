#include <javax/swing/plaf/basic/BasicScrollPaneUI$ViewportChangeHandler.h>

#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$Handler = ::javax::swing::plaf::basic::BasicScrollPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicScrollPaneUI$ViewportChangeHandler_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicScrollPaneUI$ViewportChangeHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BasicScrollPaneUI$ViewportChangeHandler_Attribute_var$0},
	{}
};

$FieldInfo _BasicScrollPaneUI$ViewportChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$ViewportChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicScrollPaneUI$ViewportChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollPaneUI$ViewportChangeHandler::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$ViewportChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$ViewportChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$ViewportChangeHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "ViewportChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollPaneUI$ViewportChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$ViewportChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicScrollPaneUI$ViewportChangeHandler_FieldInfo_,
	_BasicScrollPaneUI$ViewportChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$ViewportChangeHandler_InnerClassesInfo_,
	_BasicScrollPaneUI$ViewportChangeHandler_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$ViewportChangeHandler($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$ViewportChangeHandler));
}

void BasicScrollPaneUI$ViewportChangeHandler::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$ViewportChangeHandler::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicScrollPaneUI$ViewportChangeHandler::BasicScrollPaneUI$ViewportChangeHandler() {
}

$Class* BasicScrollPaneUI$ViewportChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$ViewportChangeHandler, name, initialize, &_BasicScrollPaneUI$ViewportChangeHandler_ClassInfo_, allocate$BasicScrollPaneUI$ViewportChangeHandler);
	return class$;
}

$Class* BasicScrollPaneUI$ViewportChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax