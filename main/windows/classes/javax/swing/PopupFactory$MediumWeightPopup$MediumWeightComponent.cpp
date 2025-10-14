#include <javax/swing/PopupFactory$MediumWeightPopup$MediumWeightComponent.h>

#include <java/awt/BorderLayout.h>
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
#include <javax/swing/PopupFactory$MediumWeightPopup.h>
#include <jcpp.h>

using $BorderLayout = ::java::awt::BorderLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupFactory$MediumWeightPopup = ::javax::swing::PopupFactory$MediumWeightPopup;
using $SwingHeavyWeight = ::javax::swing::SwingHeavyWeight;

namespace javax {
	namespace swing {

$MethodInfo _PopupFactory$MediumWeightPopup$MediumWeightComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PopupFactory$MediumWeightPopup$MediumWeightComponent::*)()>(&PopupFactory$MediumWeightPopup$MediumWeightComponent::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupFactory$MediumWeightPopup$MediumWeightComponent_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$MediumWeightPopup", "javax.swing.PopupFactory", "MediumWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent", "javax.swing.PopupFactory$MediumWeightPopup", "MediumWeightComponent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PopupFactory$MediumWeightPopup$MediumWeightComponent_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent",
	"java.awt.Panel",
	"javax.swing.SwingHeavyWeight",
	nullptr,
	_PopupFactory$MediumWeightPopup$MediumWeightComponent_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$MediumWeightPopup$MediumWeightComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$MediumWeightPopup$MediumWeightComponent($Class* clazz) {
	return $of($alloc(PopupFactory$MediumWeightPopup$MediumWeightComponent));
}

$String* PopupFactory$MediumWeightPopup$MediumWeightComponent::toString() {
	 return this->$Panel::toString();
}

int32_t PopupFactory$MediumWeightPopup$MediumWeightComponent::hashCode() {
	 return this->$Panel::hashCode();
}

bool PopupFactory$MediumWeightPopup$MediumWeightComponent::equals(Object$* arg0) {
	 return this->$Panel::equals(arg0);
}

$Object* PopupFactory$MediumWeightPopup$MediumWeightComponent::clone() {
	 return this->$Panel::clone();
}

void PopupFactory$MediumWeightPopup$MediumWeightComponent::finalize() {
	this->$Panel::finalize();
}

void PopupFactory$MediumWeightPopup$MediumWeightComponent::init$() {
	$Panel::init$($$new($BorderLayout));
}

PopupFactory$MediumWeightPopup$MediumWeightComponent::PopupFactory$MediumWeightPopup$MediumWeightComponent() {
}

$Class* PopupFactory$MediumWeightPopup$MediumWeightComponent::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$MediumWeightPopup$MediumWeightComponent, name, initialize, &_PopupFactory$MediumWeightPopup$MediumWeightComponent_ClassInfo_, allocate$PopupFactory$MediumWeightPopup$MediumWeightComponent);
	return class$;
}

$Class* PopupFactory$MediumWeightPopup$MediumWeightComponent::class$ = nullptr;

	} // swing
} // javax