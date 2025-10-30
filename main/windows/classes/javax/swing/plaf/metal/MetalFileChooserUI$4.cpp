#include <javax/swing/plaf/metal/MetalFileChooserUI$4.h>

#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$4, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$4::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$4::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalFileChooserUI$4_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MetalFileChooserUI$4_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$4",
	"java.awt.event.FocusAdapter",
	nullptr,
	_MetalFileChooserUI$4_FieldInfo_,
	_MetalFileChooserUI$4_MethodInfo_,
	nullptr,
	&_MetalFileChooserUI$4_EnclosingMethodInfo_,
	_MetalFileChooserUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$4($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$4));
}

void MetalFileChooserUI$4::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void MetalFileChooserUI$4::focusGained($FocusEvent* e) {
	if (!$nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->this$0->filePane)->clearSelection();
	}
}

MetalFileChooserUI$4::MetalFileChooserUI$4() {
}

$Class* MetalFileChooserUI$4::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$4, name, initialize, &_MetalFileChooserUI$4_ClassInfo_, allocate$MetalFileChooserUI$4);
	return class$;
}

$Class* MetalFileChooserUI$4::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax