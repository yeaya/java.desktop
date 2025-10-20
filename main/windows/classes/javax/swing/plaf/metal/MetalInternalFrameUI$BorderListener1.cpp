#include <javax/swing/plaf/metal/MetalInternalFrameUI$BorderListener1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$BorderListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <javax/swing/plaf/metal/MetalInternalFrameUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$BorderListener = ::javax::swing::plaf::basic::BasicInternalFrameUI$BorderListener;
using $MetalInternalFrameUI = ::javax::swing::plaf::metal::MetalInternalFrameUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalInternalFrameUI$BorderListener1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalInternalFrameUI$BorderListener1, this$0)},
	{}
};

$MethodInfo _MetalInternalFrameUI$BorderListener1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalInternalFrameUI$BorderListener1::*)($MetalInternalFrameUI*)>(&MetalInternalFrameUI$BorderListener1::init$))},
	{"getIconBounds", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalInternalFrameUI$BorderListener1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameUI$BorderListener1", "javax.swing.plaf.metal.MetalInternalFrameUI", "BorderListener1", $PRIVATE},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "BorderListener", $PROTECTED},
	{}
};

$ClassInfo _MetalInternalFrameUI$BorderListener1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameUI$BorderListener1",
	"javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener",
	nullptr,
	_MetalInternalFrameUI$BorderListener1_FieldInfo_,
	_MetalInternalFrameUI$BorderListener1_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameUI$BorderListener1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameUI"
};

$Object* allocate$MetalInternalFrameUI$BorderListener1($Class* clazz) {
	return $of($alloc(MetalInternalFrameUI$BorderListener1));
}

void MetalInternalFrameUI$BorderListener1::init$($MetalInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameUI$BorderListener::init$(this$0);
}

$Rectangle* MetalInternalFrameUI$BorderListener1::getIconBounds() {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight($($MetalInternalFrameUI::access$000(this->this$0)));
	int32_t xOffset = leftToRight ? 5 : $nc($($MetalInternalFrameUI::access$100(this->this$0)))->getWidth() - 5;
	$var($Rectangle, rect, nullptr);
	$var($Icon, icon, $nc($($MetalInternalFrameUI::access$200(this->this$0)))->getFrameIcon());
	if (icon != nullptr) {
		if (!leftToRight) {
			xOffset -= icon->getIconWidth();
		}
		int32_t var$0 = ($nc($($MetalInternalFrameUI::access$300(this->this$0)))->getHeight() / 2);
		int32_t iconY = (var$0 - (icon->getIconHeight() / 2));
		int32_t var$1 = xOffset;
		int32_t var$2 = iconY;
		int32_t var$3 = icon->getIconWidth();
		$assign(rect, $new($Rectangle, var$1, var$2, var$3, icon->getIconHeight()));
	}
	return rect;
}

void MetalInternalFrameUI$BorderListener1::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$2 = $nc(e)->getClickCount() == 2;
	if (var$2) {
		var$2 = $equals(e->getSource(), this->this$0->getNorthPane());
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc($($MetalInternalFrameUI::access$400(this->this$0)))->isClosable();
	if (var$0 && !$nc($($MetalInternalFrameUI::access$500(this->this$0)))->isIcon()) {
		$var($Rectangle, rect, getIconBounds());
		bool var$3 = (rect != nullptr);
		if (var$3) {
			int32_t var$4 = e->getX();
			var$3 = rect->contains(var$4, e->getY());
		}
		if (var$3) {
			$nc($($MetalInternalFrameUI::access$600(this->this$0)))->doDefaultCloseAction();
		} else {
			$BasicInternalFrameUI$BorderListener::mouseClicked(e);
		}
	} else {
		$BasicInternalFrameUI$BorderListener::mouseClicked(e);
	}
}

MetalInternalFrameUI$BorderListener1::MetalInternalFrameUI$BorderListener1() {
}

$Class* MetalInternalFrameUI$BorderListener1::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameUI$BorderListener1, name, initialize, &_MetalInternalFrameUI$BorderListener1_ClassInfo_, allocate$MetalInternalFrameUI$BorderListener1);
	return class$;
}

$Class* MetalInternalFrameUI$BorderListener1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax