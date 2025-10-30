#include <javax/swing/plaf/metal/MetalToolBarUI$MetalContainerListener.h>

#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarContListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$ToolBarContListener = ::javax::swing::plaf::basic::BasicToolBarUI$ToolBarContListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalToolBarUI$MetalContainerListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalContainerListener, this$0)},
	{}
};

$MethodInfo _MetalToolBarUI$MetalContainerListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalToolBarUI$MetalContainerListener::*)($MetalToolBarUI*)>(&MetalToolBarUI$MetalContainerListener::init$))},
	{}
};

$InnerClassInfo _MetalToolBarUI$MetalContainerListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalContainerListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarContListener", $PROTECTED},
	{}
};

$ClassInfo _MetalToolBarUI$MetalContainerListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener",
	"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener",
	nullptr,
	_MetalToolBarUI$MetalContainerListener_FieldInfo_,
	_MetalToolBarUI$MetalContainerListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalToolBarUI$MetalContainerListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalToolBarUI"
};

$Object* allocate$MetalToolBarUI$MetalContainerListener($Class* clazz) {
	return $of($alloc(MetalToolBarUI$MetalContainerListener));
}

void MetalToolBarUI$MetalContainerListener::init$($MetalToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$ToolBarContListener::init$(this$0);
}

MetalToolBarUI$MetalContainerListener::MetalToolBarUI$MetalContainerListener() {
}

$Class* MetalToolBarUI$MetalContainerListener::load$($String* name, bool initialize) {
	$loadClass(MetalToolBarUI$MetalContainerListener, name, initialize, &_MetalToolBarUI$MetalContainerListener_ClassInfo_, allocate$MetalToolBarUI$MetalContainerListener);
	return class$;
}

$Class* MetalToolBarUI$MetalContainerListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax