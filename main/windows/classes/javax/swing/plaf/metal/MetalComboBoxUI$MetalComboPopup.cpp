#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalComboPopup.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$CompoundAttribute _MetalComboBoxUI$MetalComboPopup_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MetalComboBoxUI$MetalComboPopup_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxUI$MetalComboPopup, this$0)},
	{}
};

$MethodInfo _MetalComboBoxUI$MetalComboPopup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(MetalComboBoxUI$MetalComboPopup::*)($MetalComboBoxUI*,$JComboBox*)>(&MetalComboBoxUI$MetalComboPopup::init$))},
	{"delegateFocus", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalComboBoxUI$MetalComboPopup_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboPopup", $PUBLIC},
	{}
};

$ClassInfo _MetalComboBoxUI$MetalComboPopup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	_MetalComboBoxUI$MetalComboPopup_FieldInfo_,
	_MetalComboBoxUI$MetalComboPopup_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxUI$MetalComboPopup_InnerClassesInfo_,
	_MetalComboBoxUI$MetalComboPopup_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxUI"
};

$Object* allocate$MetalComboBoxUI$MetalComboPopup($Class* clazz) {
	return $of($alloc(MetalComboBoxUI$MetalComboPopup));
}

void MetalComboBoxUI$MetalComboPopup::init$($MetalComboBoxUI* this$0, $JComboBox* cBox) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(cBox);
}

void MetalComboBoxUI$MetalComboPopup::delegateFocus($MouseEvent* e) {
	$BasicComboPopup::delegateFocus(e);
}

MetalComboBoxUI$MetalComboPopup::MetalComboBoxUI$MetalComboPopup() {
}

$Class* MetalComboBoxUI$MetalComboPopup::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxUI$MetalComboPopup, name, initialize, &_MetalComboBoxUI$MetalComboPopup_ClassInfo_, allocate$MetalComboBoxUI$MetalComboPopup);
	return class$;
}

$Class* MetalComboBoxUI$MetalComboPopup::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax