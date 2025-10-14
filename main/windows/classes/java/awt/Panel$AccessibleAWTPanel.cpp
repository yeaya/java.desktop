#include <java/awt/Panel$AccessibleAWTPanel.h>

#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef PANEL

using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _Panel$AccessibleAWTPanel_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Panel;", nullptr, $FINAL | $SYNTHETIC, $field(Panel$AccessibleAWTPanel, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Panel$AccessibleAWTPanel, serialVersionUID)},
	{}
};

$MethodInfo _Panel$AccessibleAWTPanel_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Panel;)V", nullptr, $PROTECTED, $method(static_cast<void(Panel$AccessibleAWTPanel::*)($Panel*)>(&Panel$AccessibleAWTPanel::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Panel$AccessibleAWTPanel_InnerClassesInfo_[] = {
	{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{}
};

$ClassInfo _Panel$AccessibleAWTPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Panel$AccessibleAWTPanel",
	"java.awt.Container$AccessibleAWTContainer",
	nullptr,
	_Panel$AccessibleAWTPanel_FieldInfo_,
	_Panel$AccessibleAWTPanel_MethodInfo_,
	nullptr,
	nullptr,
	_Panel$AccessibleAWTPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Panel"
};

$Object* allocate$Panel$AccessibleAWTPanel($Class* clazz) {
	return $of($alloc(Panel$AccessibleAWTPanel));
}

void Panel$AccessibleAWTPanel::init$($Panel* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Panel$AccessibleAWTPanel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

Panel$AccessibleAWTPanel::Panel$AccessibleAWTPanel() {
}

$Class* Panel$AccessibleAWTPanel::load$($String* name, bool initialize) {
	$loadClass(Panel$AccessibleAWTPanel, name, initialize, &_Panel$AccessibleAWTPanel_ClassInfo_, allocate$Panel$AccessibleAWTPanel);
	return class$;
}

$Class* Panel$AccessibleAWTPanel::class$ = nullptr;

	} // awt
} // java