#include <java/applet/Applet$AccessibleApplet.h>

#include <java/applet/Applet.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/Panel.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef FRAME

using $Applet = ::java::applet::Applet;
using $Panel = ::java::awt::Panel;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace applet {

$FieldInfo _Applet$AccessibleApplet_FieldInfo_[] = {
	{"this$0", "Ljava/applet/Applet;", nullptr, $FINAL | $SYNTHETIC, $field(Applet$AccessibleApplet, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Applet$AccessibleApplet, serialVersionUID)},
	{}
};

$MethodInfo _Applet$AccessibleApplet_MethodInfo_[] = {
	{"<init>", "(Ljava/applet/Applet;)V", nullptr, $PROTECTED, $method(static_cast<void(Applet$AccessibleApplet::*)($Applet*)>(&Applet$AccessibleApplet::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Applet$AccessibleApplet_InnerClassesInfo_[] = {
	{"java.applet.Applet$AccessibleApplet", "java.applet.Applet", "AccessibleApplet", $PROTECTED},
	{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
	{}
};

$ClassInfo _Applet$AccessibleApplet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.applet.Applet$AccessibleApplet",
	"java.awt.Panel$AccessibleAWTPanel",
	nullptr,
	_Applet$AccessibleApplet_FieldInfo_,
	_Applet$AccessibleApplet_MethodInfo_,
	nullptr,
	nullptr,
	_Applet$AccessibleApplet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.applet.Applet"
};

$Object* allocate$Applet$AccessibleApplet($Class* clazz) {
	return $of($alloc(Applet$AccessibleApplet));
}

void Applet$AccessibleApplet::init$($Applet* this$0) {
	$set(this, this$0, this$0);
	$Panel$AccessibleAWTPanel::init$(this$0);
}

$AccessibleRole* Applet$AccessibleApplet::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FRAME;
}

$AccessibleStateSet* Applet$AccessibleApplet::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Panel$AccessibleAWTPanel::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::ACTIVE);
	return states;
}

Applet$AccessibleApplet::Applet$AccessibleApplet() {
}

$Class* Applet$AccessibleApplet::load$($String* name, bool initialize) {
	$loadClass(Applet$AccessibleApplet, name, initialize, &_Applet$AccessibleApplet_ClassInfo_, allocate$Applet$AccessibleApplet);
	return class$;
}

$Class* Applet$AccessibleApplet::class$ = nullptr;

	} // applet
} // java