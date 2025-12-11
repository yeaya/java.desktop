#include <com/apple/laf/AquaScrollPaneUI.h>

#include <com/apple/laf/AquaScrollPaneUI$XYMouseWheelHandler.h>
#include <java/awt/event/MouseWheelListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $AquaScrollPaneUI$XYMouseWheelHandler = ::com::apple::laf::AquaScrollPaneUI$XYMouseWheelHandler;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$MouseWheelHandler = ::javax::swing::plaf::basic::BasicScrollPaneUI$MouseWheelHandler;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaScrollPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaScrollPaneUI::*)()>(&AquaScrollPaneUI::init$))},
	{"createMouseWheelListener", "()Ljava/awt/event/MouseWheelListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaScrollPaneUI::createUI))},
	{}
};

$InnerClassInfo _AquaScrollPaneUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler", "com.apple.laf.AquaScrollPaneUI", "XYMouseWheelHandler", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	nullptr,
	nullptr,
	_AquaScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler"
};

$Object* allocate$AquaScrollPaneUI($Class* clazz) {
	return $of($alloc(AquaScrollPaneUI));
}

void AquaScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

$ComponentUI* AquaScrollPaneUI::createUI($JComponent* x) {
	$init(AquaScrollPaneUI);
	return $new(AquaScrollPaneUI);
}

$MouseWheelListener* AquaScrollPaneUI::createMouseWheelListener() {
	return $new($AquaScrollPaneUI$XYMouseWheelHandler, this);
}

AquaScrollPaneUI::AquaScrollPaneUI() {
}

$Class* AquaScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaScrollPaneUI, name, initialize, &_AquaScrollPaneUI_ClassInfo_, allocate$AquaScrollPaneUI);
	return class$;
}

$Class* AquaScrollPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com