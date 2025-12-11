#include <javax/swing/ColorChooserDialog$Closer.h>

#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ColorChooserDialog.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;
using $JButton = ::javax::swing::JButton;

namespace javax {
	namespace swing {

$FieldInfo _ColorChooserDialog$Closer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$Closer, this$0)},
	{}
};

$MethodInfo _ColorChooserDialog$Closer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(static_cast<void(ColorChooserDialog$Closer::*)($ColorChooserDialog*)>(&ColorChooserDialog$Closer::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ColorChooserDialog$Closer_InnerClassesInfo_[] = {
	{"javax.swing.ColorChooserDialog$Closer", "javax.swing.ColorChooserDialog", "Closer", 0},
	{}
};

$ClassInfo _ColorChooserDialog$Closer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorChooserDialog$Closer",
	"java.awt.event.WindowAdapter",
	"java.io.Serializable",
	_ColorChooserDialog$Closer_FieldInfo_,
	_ColorChooserDialog$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_ColorChooserDialog$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ColorChooserDialog"
};

$Object* allocate$ColorChooserDialog$Closer($Class* clazz) {
	return $of($alloc(ColorChooserDialog$Closer));
}

int32_t ColorChooserDialog$Closer::hashCode() {
	 return this->$WindowAdapter::hashCode();
}

bool ColorChooserDialog$Closer::equals(Object$* arg0) {
	 return this->$WindowAdapter::equals(arg0);
}

$Object* ColorChooserDialog$Closer::clone() {
	 return this->$WindowAdapter::clone();
}

$String* ColorChooserDialog$Closer::toString() {
	 return this->$WindowAdapter::toString();
}

void ColorChooserDialog$Closer::finalize() {
	this->$WindowAdapter::finalize();
}

void ColorChooserDialog$Closer::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void ColorChooserDialog$Closer::windowClosing($WindowEvent* e) {
	$nc(this->this$0->cancelButton)->doClick(0);
	$var($Window, w, $nc(e)->getWindow());
	$nc(w)->hide();
}

ColorChooserDialog$Closer::ColorChooserDialog$Closer() {
}

$Class* ColorChooserDialog$Closer::load$($String* name, bool initialize) {
	$loadClass(ColorChooserDialog$Closer, name, initialize, &_ColorChooserDialog$Closer_ClassInfo_, allocate$ColorChooserDialog$Closer);
	return class$;
}

$Class* ColorChooserDialog$Closer::class$ = nullptr;

	} // swing
} // javax