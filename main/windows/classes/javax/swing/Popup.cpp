#include <javax/swing/Popup.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/Popup$DefaultFrame.h>
#include <javax/swing/Popup$HeavyWeightWindow.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JWindow = ::javax::swing::JWindow;
using $Popup$DefaultFrame = ::javax::swing::Popup$DefaultFrame;
using $Popup$HeavyWeightWindow = ::javax::swing::Popup$HeavyWeightWindow;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _Popup_FieldInfo_[] = {
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(Popup, component)},
	{}
};

$MethodInfo _Popup_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, $PROTECTED, $method(static_cast<void(Popup::*)($Component*,$Component*,int32_t,int32_t)>(&Popup::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Popup::*)()>(&Popup::init$))},
	{"createComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"dispose", "()V", nullptr, 0},
	{"getComponent", "()Ljava/awt/Component;", nullptr, 0},
	{"getParentWindow", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $PRIVATE, $method(static_cast<$Window*(Popup::*)($Component*)>(&Popup::getParentWindow))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"pack", "()V", nullptr, 0},
	{"reset", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Popup_InnerClassesInfo_[] = {
	{"javax.swing.Popup$DefaultFrame", "javax.swing.Popup", "DefaultFrame", $STATIC},
	{"javax.swing.Popup$HeavyWeightWindow", "javax.swing.Popup", "HeavyWeightWindow", $STATIC},
	{}
};

$ClassInfo _Popup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Popup",
	"java.lang.Object",
	nullptr,
	_Popup_FieldInfo_,
	_Popup_MethodInfo_,
	nullptr,
	nullptr,
	_Popup_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.Popup$DefaultFrame,javax.swing.Popup$HeavyWeightWindow"
};

$Object* allocate$Popup($Class* clazz) {
	return $of($alloc(Popup));
}

void Popup::init$($Component* owner, $Component* contents, int32_t x, int32_t y) {
	Popup::init$();
	if (contents == nullptr) {
		$throwNew($IllegalArgumentException, "Contents must be non-null"_s);
	}
	reset(owner, contents, x, y);
}

void Popup::init$() {
}

void Popup::show() {
	$var($Component, component, getComponent());
	if (component != nullptr) {
		component->show();
	}
}

void Popup::hide() {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, getComponent());
	if ($instanceOf($JWindow, component)) {
		$nc(component)->hide();
		$nc($($nc(($cast($JWindow, component)))->getContentPane()))->removeAll();
	}
	dispose();
}

void Popup::dispose() {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, getComponent());
	$var($Window, window, $SwingUtilities::getWindowAncestor(component));
	if ($instanceOf($JWindow, component)) {
		$nc(($cast($Window, component)))->dispose();
		$assign(component, nullptr);
	}
	if ($instanceOf($Popup$DefaultFrame, window)) {
		$nc(window)->dispose();
	}
}

void Popup::reset($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$useLocalCurrentObjectStackCache();
	if (getComponent() == nullptr) {
		$set(this, component, createComponent(owner));
	}
	$var($Component, c, getComponent());
	if ($instanceOf($JWindow, c)) {
		$var($JWindow, component, $cast($JWindow, getComponent()));
		$nc(component)->setBounds(ownerX, ownerY, 1, 1);
		$init($BorderLayout);
		$nc($(component->getContentPane()))->add(contents, $of($BorderLayout::CENTER));
		component->invalidate();
		component->validate();
		if (component->isVisible()) {
			pack();
		}
	}
}

void Popup::pack() {
	$var($Component, component, getComponent());
	if ($instanceOf($Window, component)) {
		$nc(($cast($Window, component)))->pack();
	}
}

$Window* Popup::getParentWindow($Component* owner) {
	$var($Window, window, nullptr);
	if ($instanceOf($Window, owner)) {
		$assign(window, $cast($Window, owner));
	} else if (owner != nullptr) {
		$assign(window, $SwingUtilities::getWindowAncestor(owner));
	}
	if (window == nullptr) {
		$assign(window, $new($Popup$DefaultFrame));
	}
	return window;
}

$Component* Popup::createComponent($Component* owner) {
	if ($GraphicsEnvironment::isHeadless()) {
		return nullptr;
	}
	return $new($Popup$HeavyWeightWindow, $(getParentWindow(owner)));
}

$Component* Popup::getComponent() {
	return this->component;
}

Popup::Popup() {
}

$Class* Popup::load$($String* name, bool initialize) {
	$loadClass(Popup, name, initialize, &_Popup_ClassInfo_, allocate$Popup);
	return class$;
}

$Class* Popup::class$ = nullptr;

	} // swing
} // javax