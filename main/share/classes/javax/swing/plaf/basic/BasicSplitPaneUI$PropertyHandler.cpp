#include <javax/swing/plaf/basic/BasicSplitPaneUI$PropertyHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $BasicSplitPaneUI$Handler = ::javax::swing::plaf::basic::BasicSplitPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$PropertyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$PropertyHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$PropertyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$PropertyHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$PropertyHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$PropertyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$PropertyHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "PropertyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$PropertyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$PropertyHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicSplitPaneUI$PropertyHandler_FieldInfo_,
	_BasicSplitPaneUI$PropertyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$PropertyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$PropertyHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$PropertyHandler));
}

void BasicSplitPaneUI$PropertyHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$PropertyHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicSplitPaneUI$PropertyHandler::BasicSplitPaneUI$PropertyHandler() {
}

$Class* BasicSplitPaneUI$PropertyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$PropertyHandler, name, initialize, &_BasicSplitPaneUI$PropertyHandler_ClassInfo_, allocate$BasicSplitPaneUI$PropertyHandler);
	return class$;
}

$Class* BasicSplitPaneUI$PropertyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax