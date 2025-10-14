#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Handler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$Handler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicDesktopPaneUI$Handler::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$Handler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicDesktopPaneUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicDesktopPaneUI$Handler_FieldInfo_,
	_BasicDesktopPaneUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$Handler($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$Handler));
}

void BasicDesktopPaneUI$Handler::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicDesktopPaneUI$Handler::propertyChange($PropertyChangeEvent* evt) {
	$var($String, propertyName, $nc(evt)->getPropertyName());
	if ("desktopManager"_s == propertyName) {
		this->this$0->installDesktopManager();
	}
}

BasicDesktopPaneUI$Handler::BasicDesktopPaneUI$Handler() {
}

$Class* BasicDesktopPaneUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$Handler, name, initialize, &_BasicDesktopPaneUI$Handler_ClassInfo_, allocate$BasicDesktopPaneUI$Handler);
	return class$;
}

$Class* BasicDesktopPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax