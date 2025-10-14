#include <javax/swing/ColorChooserDialog$2.h>

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
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

$FieldInfo _ColorChooserDialog$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$2, this$0)},
	{}
};

$MethodInfo _ColorChooserDialog$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(static_cast<void(ColorChooserDialog$2::*)($ColorChooserDialog*)>(&ColorChooserDialog$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ColorChooserDialog$2_EnclosingMethodInfo_ = {
	"javax.swing.ColorChooserDialog",
	"initColorChooserDialog",
	"(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V"
};

$InnerClassInfo _ColorChooserDialog$2_InnerClassesInfo_[] = {
	{"javax.swing.ColorChooserDialog$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorChooserDialog$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorChooserDialog$2",
	"javax.swing.AbstractAction",
	nullptr,
	_ColorChooserDialog$2_FieldInfo_,
	_ColorChooserDialog$2_MethodInfo_,
	nullptr,
	&_ColorChooserDialog$2_EnclosingMethodInfo_,
	_ColorChooserDialog$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ColorChooserDialog"
};

$Object* allocate$ColorChooserDialog$2($Class* clazz) {
	return $of($alloc(ColorChooserDialog$2));
}

void ColorChooserDialog$2::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void ColorChooserDialog$2::actionPerformed($ActionEvent* e) {
	$nc(($cast($AbstractButton, $($nc(e)->getSource()))))->fireActionPerformed(e);
}

ColorChooserDialog$2::ColorChooserDialog$2() {
}

$Class* ColorChooserDialog$2::load$($String* name, bool initialize) {
	$loadClass(ColorChooserDialog$2, name, initialize, &_ColorChooserDialog$2_ClassInfo_, allocate$ColorChooserDialog$2);
	return class$;
}

$Class* ColorChooserDialog$2::class$ = nullptr;

	} // swing
} // javax