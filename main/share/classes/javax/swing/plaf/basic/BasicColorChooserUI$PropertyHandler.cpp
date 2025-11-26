#include <javax/swing/plaf/basic/BasicColorChooserUI$PropertyHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;
using $BasicColorChooserUI$Handler = ::javax::swing::plaf::basic::BasicColorChooserUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicColorChooserUI$PropertyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicColorChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicColorChooserUI$PropertyHandler, this$0)},
	{}
};

$MethodInfo _BasicColorChooserUI$PropertyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicColorChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicColorChooserUI$PropertyHandler::*)($BasicColorChooserUI*)>(&BasicColorChooserUI$PropertyHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicColorChooserUI$PropertyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "PropertyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicColorChooserUI$PropertyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicColorChooserUI$PropertyHandler_FieldInfo_,
	_BasicColorChooserUI$PropertyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicColorChooserUI$PropertyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicColorChooserUI"
};

$Object* allocate$BasicColorChooserUI$PropertyHandler($Class* clazz) {
	return $of($alloc(BasicColorChooserUI$PropertyHandler));
}

void BasicColorChooserUI$PropertyHandler::init$($BasicColorChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicColorChooserUI$PropertyHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicColorChooserUI$PropertyHandler::BasicColorChooserUI$PropertyHandler() {
}

$Class* BasicColorChooserUI$PropertyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicColorChooserUI$PropertyHandler, name, initialize, &_BasicColorChooserUI$PropertyHandler_ClassInfo_, allocate$BasicColorChooserUI$PropertyHandler);
	return class$;
}

$Class* BasicColorChooserUI$PropertyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax