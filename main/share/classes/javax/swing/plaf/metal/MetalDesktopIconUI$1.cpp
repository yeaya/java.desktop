#include <javax/swing/plaf/metal/MetalDesktopIconUI$1.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;
using $MetalDesktopIconUI = ::javax::swing::plaf::metal::MetalDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalDesktopIconUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalDesktopIconUI$1, this$0)},
	{}
};

$MethodInfo _MetalDesktopIconUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalDesktopIconUI;)V", nullptr, 0, $method(static_cast<void(MetalDesktopIconUI$1::*)($MetalDesktopIconUI*)>(&MetalDesktopIconUI$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalDesktopIconUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalDesktopIconUI",
	"installComponents",
	"()V"
};

$InnerClassInfo _MetalDesktopIconUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalDesktopIconUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalDesktopIconUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalDesktopIconUI$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_MetalDesktopIconUI$1_FieldInfo_,
	_MetalDesktopIconUI$1_MethodInfo_,
	nullptr,
	&_MetalDesktopIconUI$1_EnclosingMethodInfo_,
	_MetalDesktopIconUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalDesktopIconUI"
};

$Object* allocate$MetalDesktopIconUI$1($Class* clazz) {
	return $of($alloc(MetalDesktopIconUI$1));
}

void MetalDesktopIconUI$1::init$($MetalDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalDesktopIconUI$1::actionPerformed($ActionEvent* e) {
	this->this$0->deiconize();
}

MetalDesktopIconUI$1::MetalDesktopIconUI$1() {
}

$Class* MetalDesktopIconUI$1::load$($String* name, bool initialize) {
	$loadClass(MetalDesktopIconUI$1, name, initialize, &_MetalDesktopIconUI$1_ClassInfo_, allocate$MetalDesktopIconUI$1);
	return class$;
}

$Class* MetalDesktopIconUI$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax