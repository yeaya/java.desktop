#include <javax/swing/PopupFactory$HeadlessPopup.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$ContainerPopup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $PopupFactory$ContainerPopup = ::javax::swing::PopupFactory$ContainerPopup;

namespace javax {
	namespace swing {

$MethodInfo _PopupFactory$HeadlessPopup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PopupFactory$HeadlessPopup::*)()>(&PopupFactory$HeadlessPopup::init$))},
	{"createComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"getHeadlessPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $STATIC, $method(static_cast<$Popup*(*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory$HeadlessPopup::getHeadlessPopup))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupFactory$HeadlessPopup_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$HeadlessPopup", "javax.swing.PopupFactory", "HeadlessPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PopupFactory$HeadlessPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$HeadlessPopup",
	"javax.swing.PopupFactory$ContainerPopup",
	nullptr,
	nullptr,
	_PopupFactory$HeadlessPopup_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$HeadlessPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$HeadlessPopup($Class* clazz) {
	return $of($alloc(PopupFactory$HeadlessPopup));
}

void PopupFactory$HeadlessPopup::init$() {
	$PopupFactory$ContainerPopup::init$();
}

$Popup* PopupFactory$HeadlessPopup::getHeadlessPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$init(PopupFactory$HeadlessPopup);
	$var(PopupFactory$HeadlessPopup, popup, $new(PopupFactory$HeadlessPopup));
	popup->reset(owner, contents, ownerX, ownerY);
	return popup;
}

$Component* PopupFactory$HeadlessPopup::createComponent($Component* owner) {
	return $new($Panel, $$new($BorderLayout));
}

void PopupFactory$HeadlessPopup::show() {
}

void PopupFactory$HeadlessPopup::hide() {
}

PopupFactory$HeadlessPopup::PopupFactory$HeadlessPopup() {
}

$Class* PopupFactory$HeadlessPopup::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$HeadlessPopup, name, initialize, &_PopupFactory$HeadlessPopup_ClassInfo_, allocate$PopupFactory$HeadlessPopup);
	return class$;
}

$Class* PopupFactory$HeadlessPopup::class$ = nullptr;

	} // swing
} // javax