#include <javax/swing/plaf/metal/MetalFileChooserUI$3.h>

#include <java/awt/Dimension.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JTextField = ::javax::swing::JTextField;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$3, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;I)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$3::*)($MetalFileChooserUI*,int32_t)>(&MetalFileChooserUI$3::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalFileChooserUI$3_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MetalFileChooserUI$3_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$3",
	"javax.swing.JTextField",
	nullptr,
	_MetalFileChooserUI$3_FieldInfo_,
	_MetalFileChooserUI$3_MethodInfo_,
	nullptr,
	&_MetalFileChooserUI$3_EnclosingMethodInfo_,
	_MetalFileChooserUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$3($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$3));
}

void MetalFileChooserUI$3::init$($MetalFileChooserUI* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* MetalFileChooserUI$3::getMaximumSize() {
	return $new($Dimension, $Short::MAX_VALUE, $nc($($JTextField::getPreferredSize()))->height);
}

MetalFileChooserUI$3::MetalFileChooserUI$3() {
}

$Class* MetalFileChooserUI$3::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$3, name, initialize, &_MetalFileChooserUI$3_ClassInfo_, allocate$MetalFileChooserUI$3);
	return class$;
}

$Class* MetalFileChooserUI$3::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax