#include <javax/swing/ColorChooserDialog$DisposeOnClose.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

$MethodInfo _ColorChooserDialog$DisposeOnClose_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorChooserDialog$DisposeOnClose::*)()>(&ColorChooserDialog$DisposeOnClose::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ColorChooserDialog$DisposeOnClose_InnerClassesInfo_[] = {
	{"javax.swing.ColorChooserDialog$DisposeOnClose", "javax.swing.ColorChooserDialog", "DisposeOnClose", $STATIC},
	{}
};

$ClassInfo _ColorChooserDialog$DisposeOnClose_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorChooserDialog$DisposeOnClose",
	"java.awt.event.ComponentAdapter",
	"java.io.Serializable",
	nullptr,
	_ColorChooserDialog$DisposeOnClose_MethodInfo_,
	nullptr,
	nullptr,
	_ColorChooserDialog$DisposeOnClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ColorChooserDialog"
};

$Object* allocate$ColorChooserDialog$DisposeOnClose($Class* clazz) {
	return $of($alloc(ColorChooserDialog$DisposeOnClose));
}

int32_t ColorChooserDialog$DisposeOnClose::hashCode() {
	 return this->$ComponentAdapter::hashCode();
}

bool ColorChooserDialog$DisposeOnClose::equals(Object$* arg0) {
	 return this->$ComponentAdapter::equals(arg0);
}

$Object* ColorChooserDialog$DisposeOnClose::clone() {
	 return this->$ComponentAdapter::clone();
}

$String* ColorChooserDialog$DisposeOnClose::toString() {
	 return this->$ComponentAdapter::toString();
}

void ColorChooserDialog$DisposeOnClose::finalize() {
	this->$ComponentAdapter::finalize();
}

void ColorChooserDialog$DisposeOnClose::init$() {
	$ComponentAdapter::init$();
}

void ColorChooserDialog$DisposeOnClose::componentHidden($ComponentEvent* e) {
	$var($Window, w, $cast($Window, $nc(e)->getComponent()));
	$nc(w)->dispose();
}

ColorChooserDialog$DisposeOnClose::ColorChooserDialog$DisposeOnClose() {
}

$Class* ColorChooserDialog$DisposeOnClose::load$($String* name, bool initialize) {
	$loadClass(ColorChooserDialog$DisposeOnClose, name, initialize, &_ColorChooserDialog$DisposeOnClose_ClassInfo_, allocate$ColorChooserDialog$DisposeOnClose);
	return class$;
}

$Class* ColorChooserDialog$DisposeOnClose::class$ = nullptr;

	} // swing
} // javax