#include <javax/swing/ColorChooserDialog$1.h>

#include <java/awt/Dialog.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
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

$FieldInfo _ColorChooserDialog$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$1, this$0)},
	{}
};

$MethodInfo _ColorChooserDialog$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(static_cast<void(ColorChooserDialog$1::*)($ColorChooserDialog*)>(&ColorChooserDialog$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ColorChooserDialog$1_EnclosingMethodInfo_ = {
	"javax.swing.ColorChooserDialog",
	"initColorChooserDialog",
	"(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V"
};

$InnerClassInfo _ColorChooserDialog$1_InnerClassesInfo_[] = {
	{"javax.swing.ColorChooserDialog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorChooserDialog$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorChooserDialog$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ColorChooserDialog$1_FieldInfo_,
	_ColorChooserDialog$1_MethodInfo_,
	nullptr,
	&_ColorChooserDialog$1_EnclosingMethodInfo_,
	_ColorChooserDialog$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ColorChooserDialog"
};

$Object* allocate$ColorChooserDialog$1($Class* clazz) {
	return $of($alloc(ColorChooserDialog$1));
}

void ColorChooserDialog$1::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
}

void ColorChooserDialog$1::actionPerformed($ActionEvent* e) {
	this->this$0->hide();
}

ColorChooserDialog$1::ColorChooserDialog$1() {
}

$Class* ColorChooserDialog$1::load$($String* name, bool initialize) {
	$loadClass(ColorChooserDialog$1, name, initialize, &_ColorChooserDialog$1_ClassInfo_, allocate$ColorChooserDialog$1);
	return class$;
}

$Class* ColorChooserDialog$1::class$ = nullptr;

	} // swing
} // javax