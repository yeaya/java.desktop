#include <javax/swing/Popup$HeavyWeightWindow.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/lang/SecurityException.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/Popup.h>
#include <jcpp.h>

#undef POPUP

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $JRootPane = ::javax::swing::JRootPane;
using $JWindow = ::javax::swing::JWindow;
using $Popup = ::javax::swing::Popup;
using $ModalExclude = ::sun::awt::ModalExclude;

namespace javax {
	namespace swing {

$MethodInfo _Popup$HeavyWeightWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(Popup$HeavyWeightWindow::*)($Window*)>(&Popup$HeavyWeightWindow::init$))},
	{"show", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Popup$HeavyWeightWindow_InnerClassesInfo_[] = {
	{"javax.swing.Popup$HeavyWeightWindow", "javax.swing.Popup", "HeavyWeightWindow", $STATIC},
	{}
};

$ClassInfo _Popup$HeavyWeightWindow_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Popup$HeavyWeightWindow",
	"javax.swing.JWindow",
	"sun.awt.ModalExclude",
	nullptr,
	_Popup$HeavyWeightWindow_MethodInfo_,
	nullptr,
	nullptr,
	_Popup$HeavyWeightWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Popup"
};

$Object* allocate$Popup$HeavyWeightWindow($Class* clazz) {
	return $of($alloc(Popup$HeavyWeightWindow));
}

$String* Popup$HeavyWeightWindow::toString() {
	 return this->$JWindow::toString();
}

int32_t Popup$HeavyWeightWindow::hashCode() {
	 return this->$JWindow::hashCode();
}

bool Popup$HeavyWeightWindow::equals(Object$* arg0) {
	 return this->$JWindow::equals(arg0);
}

$Object* Popup$HeavyWeightWindow::clone() {
	 return this->$JWindow::clone();
}

void Popup$HeavyWeightWindow::finalize() {
	this->$JWindow::finalize();
}

void Popup$HeavyWeightWindow::init$($Window* parent) {
	$JWindow::init$(parent);
	setFocusableWindowState(false);
	$init($Window$Type);
	setType($Window$Type::POPUP);
	$nc($(getRootPane()))->setUseTrueDoubleBuffering(false);
	try {
		setAlwaysOnTop(true);
	} catch ($SecurityException& se) {
	}
}

void Popup$HeavyWeightWindow::update($Graphics* g) {
	paint(g);
}

void Popup$HeavyWeightWindow::show() {
	this->pack();
	bool var$0 = getWidth() > 0;
	if (var$0 && getHeight() > 0) {
		$JWindow::show();
	}
}

Popup$HeavyWeightWindow::Popup$HeavyWeightWindow() {
}

$Class* Popup$HeavyWeightWindow::load$($String* name, bool initialize) {
	$loadClass(Popup$HeavyWeightWindow, name, initialize, &_Popup$HeavyWeightWindow_ClassInfo_, allocate$Popup$HeavyWeightWindow);
	return class$;
}

$Class* Popup$HeavyWeightWindow::class$ = nullptr;

	} // swing
} // javax