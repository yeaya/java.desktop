#include <javax/swing/plaf/metal/MetalComboBoxButton$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/plaf/metal/MetalComboBoxButton.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $MetalComboBoxButton = ::javax::swing::plaf::metal::MetalComboBoxButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxButton$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxButton;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxButton$1, this$0)},
	{}
};

$MethodInfo _MetalComboBoxButton$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxButton;)V", nullptr, 0, $method(static_cast<void(MetalComboBoxButton$1::*)($MetalComboBoxButton*)>(&MetalComboBoxButton$1::init$))},
	{"setArmed", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalComboBoxButton$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalComboBoxButton",
	"<init>",
	"()V"
};

$InnerClassInfo _MetalComboBoxButton$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalComboBoxButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxButton$1",
	"javax.swing.DefaultButtonModel",
	nullptr,
	_MetalComboBoxButton$1_FieldInfo_,
	_MetalComboBoxButton$1_MethodInfo_,
	nullptr,
	&_MetalComboBoxButton$1_EnclosingMethodInfo_,
	_MetalComboBoxButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxButton"
};

$Object* allocate$MetalComboBoxButton$1($Class* clazz) {
	return $of($alloc(MetalComboBoxButton$1));
}

void MetalComboBoxButton$1::init$($MetalComboBoxButton* this$0) {
	$set(this, this$0, this$0);
	$DefaultButtonModel::init$();
}

void MetalComboBoxButton$1::setArmed(bool armed) {
	$DefaultButtonModel::setArmed(isPressed() ? true : armed);
}

MetalComboBoxButton$1::MetalComboBoxButton$1() {
}

$Class* MetalComboBoxButton$1::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxButton$1, name, initialize, &_MetalComboBoxButton$1_ClassInfo_, allocate$MetalComboBoxButton$1);
	return class$;
}

$Class* MetalComboBoxButton$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax