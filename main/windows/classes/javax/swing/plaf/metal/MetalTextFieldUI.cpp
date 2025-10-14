#include <javax/swing/plaf/metal/MetalTextFieldUI.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalTextFieldUI::*)()>(&MetalTextFieldUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalTextFieldUI::createUI))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	nullptr,
	_MetalTextFieldUI_MethodInfo_
};

$Object* allocate$MetalTextFieldUI($Class* clazz) {
	return $of($alloc(MetalTextFieldUI));
}

void MetalTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* MetalTextFieldUI::createUI($JComponent* c) {
	$init(MetalTextFieldUI);
	return $new(MetalTextFieldUI);
}

void MetalTextFieldUI::propertyChange($PropertyChangeEvent* evt) {
	$BasicTextFieldUI::propertyChange(evt);
}

MetalTextFieldUI::MetalTextFieldUI() {
}

$Class* MetalTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(MetalTextFieldUI, name, initialize, &_MetalTextFieldUI_ClassInfo_, allocate$MetalTextFieldUI);
	return class$;
}

$Class* MetalTextFieldUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax