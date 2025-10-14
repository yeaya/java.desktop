#include <javax/swing/plaf/metal/MetalScrollPaneUI$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/metal/MetalScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalScrollPaneUI.h>
#include <jcpp.h>

#undef FALSE
#undef FREE_STANDING_PROP

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $MetalScrollBarUI = ::javax::swing::plaf::metal::MetalScrollBarUI;
using $MetalScrollPaneUI = ::javax::swing::plaf::metal::MetalScrollPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalScrollPaneUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalScrollPaneUI$1, this$0)},
	{}
};

$MethodInfo _MetalScrollPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalScrollPaneUI;)V", nullptr, 0, $method(static_cast<void(MetalScrollPaneUI$1::*)($MetalScrollPaneUI*)>(&MetalScrollPaneUI$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalScrollPaneUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalScrollPaneUI",
	"createScrollBarSwapListener",
	"()Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _MetalScrollPaneUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalScrollPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalScrollPaneUI$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MetalScrollPaneUI$1_FieldInfo_,
	_MetalScrollPaneUI$1_MethodInfo_,
	nullptr,
	&_MetalScrollPaneUI$1_EnclosingMethodInfo_,
	_MetalScrollPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalScrollPaneUI"
};

$Object* allocate$MetalScrollPaneUI$1($Class* clazz) {
	return $of($alloc(MetalScrollPaneUI$1));
}

void MetalScrollPaneUI$1::init$($MetalScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	bool var$0 = $nc(propertyName)->equals("verticalScrollBar"_s);
	if (var$0 || $nc(propertyName)->equals("horizontalScrollBar"_s)) {
		$var($JScrollBar, oldSB, $cast($JScrollBar, e->getOldValue()));
		if (oldSB != nullptr) {
			$init($MetalScrollBarUI);
			oldSB->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, nullptr);
		}
		$var($JScrollBar, newSB, $cast($JScrollBar, e->getNewValue()));
		if (newSB != nullptr) {
			$init($MetalScrollBarUI);
			$init($Boolean);
			newSB->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, $Boolean::FALSE);
		}
	} else if ("border"_s->equals(propertyName)) {
		this->this$0->updateScrollbarsFreeStanding();
	}
}

MetalScrollPaneUI$1::MetalScrollPaneUI$1() {
}

$Class* MetalScrollPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(MetalScrollPaneUI$1, name, initialize, &_MetalScrollPaneUI$1_ClassInfo_, allocate$MetalScrollPaneUI$1);
	return class$;
}

$Class* MetalScrollPaneUI$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax