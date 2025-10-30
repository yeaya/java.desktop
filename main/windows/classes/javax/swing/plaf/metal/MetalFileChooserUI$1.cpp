#include <javax/swing/plaf/metal/MetalFileChooserUI$1.h>

#include <java/awt/Dimension.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$1::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$1::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalFileChooserUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MetalFileChooserUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$1",
	"javax.swing.JComboBox",
	nullptr,
	_MetalFileChooserUI$1_FieldInfo_,
	_MetalFileChooserUI$1_MethodInfo_,
	"Ljavax/swing/JComboBox<Ljava/lang/Object;>;",
	&_MetalFileChooserUI$1_EnclosingMethodInfo_,
	_MetalFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$1($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$1));
}

void MetalFileChooserUI$1::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JComboBox::init$();
}

$Dimension* MetalFileChooserUI$1::getPreferredSize() {
	$var($Dimension, d, $JComboBox::getPreferredSize());
	$nc(d)->width = 150;
	return d;
}

MetalFileChooserUI$1::MetalFileChooserUI$1() {
}

$Class* MetalFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$1, name, initialize, &_MetalFileChooserUI$1_ClassInfo_, allocate$MetalFileChooserUI$1);
	return class$;
}

$Class* MetalFileChooserUI$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax