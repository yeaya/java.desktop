#include <javax/swing/ColorChooserDialog$4.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

$FieldInfo _ColorChooserDialog$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$4, this$0)},
	{}
};

$MethodInfo _ColorChooserDialog$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(static_cast<void(ColorChooserDialog$4::*)($ColorChooserDialog*)>(&ColorChooserDialog$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ColorChooserDialog$4_EnclosingMethodInfo_ = {
	"javax.swing.ColorChooserDialog",
	"initColorChooserDialog",
	"(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V"
};

$InnerClassInfo _ColorChooserDialog$4_InnerClassesInfo_[] = {
	{"javax.swing.ColorChooserDialog$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorChooserDialog$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorChooserDialog$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ColorChooserDialog$4_FieldInfo_,
	_ColorChooserDialog$4_MethodInfo_,
	nullptr,
	&_ColorChooserDialog$4_EnclosingMethodInfo_,
	_ColorChooserDialog$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ColorChooserDialog"
};

$Object* allocate$ColorChooserDialog$4($Class* clazz) {
	return $of($alloc(ColorChooserDialog$4));
}

void ColorChooserDialog$4::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
}

void ColorChooserDialog$4::actionPerformed($ActionEvent* e) {
	this->this$0->reset();
}

ColorChooserDialog$4::ColorChooserDialog$4() {
}

$Class* ColorChooserDialog$4::load$($String* name, bool initialize) {
	$loadClass(ColorChooserDialog$4, name, initialize, &_ColorChooserDialog$4_ClassInfo_, allocate$ColorChooserDialog$4);
	return class$;
}

$Class* ColorChooserDialog$4::class$ = nullptr;

	} // swing
} // javax