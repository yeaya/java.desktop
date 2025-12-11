#include <javax/swing/plaf/metal/MetalDesktopIconUI$TitleListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $MetalDesktopIconUI = ::javax::swing::plaf::metal::MetalDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalDesktopIconUI$TitleListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalDesktopIconUI$TitleListener, this$0)},
	{}
};

$MethodInfo _MetalDesktopIconUI$TitleListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalDesktopIconUI;)V", nullptr, 0, $method(static_cast<void(MetalDesktopIconUI$TitleListener::*)($MetalDesktopIconUI*)>(&MetalDesktopIconUI$TitleListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalDesktopIconUI$TitleListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener", "javax.swing.plaf.metal.MetalDesktopIconUI", "TitleListener", 0},
	{}
};

$ClassInfo _MetalDesktopIconUI$TitleListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MetalDesktopIconUI$TitleListener_FieldInfo_,
	_MetalDesktopIconUI$TitleListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalDesktopIconUI$TitleListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalDesktopIconUI"
};

$Object* allocate$MetalDesktopIconUI$TitleListener($Class* clazz) {
	return $of($alloc(MetalDesktopIconUI$TitleListener));
}

void MetalDesktopIconUI$TitleListener::init$($MetalDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalDesktopIconUI$TitleListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(e)->getPropertyName()))->equals("title"_s)) {
		$nc(this->this$0->button)->setText($cast($String, $(e->getNewValue())));
	}
	if ($nc($($nc(e)->getPropertyName()))->equals("frameIcon"_s)) {
		$nc(this->this$0->button)->setIcon($cast($Icon, $(e->getNewValue())));
	}
}

MetalDesktopIconUI$TitleListener::MetalDesktopIconUI$TitleListener() {
}

$Class* MetalDesktopIconUI$TitleListener::load$($String* name, bool initialize) {
	$loadClass(MetalDesktopIconUI$TitleListener, name, initialize, &_MetalDesktopIconUI$TitleListener_ClassInfo_, allocate$MetalDesktopIconUI$TitleListener);
	return class$;
}

$Class* MetalDesktopIconUI$TitleListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax