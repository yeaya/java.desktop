#include <java/awt/MenuBar$AccessibleAWTMenuBar.h>

#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>
#include <java/awt/MenuComponent.h>
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

#undef MENU_BAR

using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuComponent$AccessibleAWTMenuComponent = ::java::awt::MenuComponent$AccessibleAWTMenuComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _MenuBar$AccessibleAWTMenuBar_FieldInfo_[] = {
	{"this$0", "Ljava/awt/MenuBar;", nullptr, $FINAL | $SYNTHETIC, $field(MenuBar$AccessibleAWTMenuBar, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuBar$AccessibleAWTMenuBar, serialVersionUID)},
	{}
};

$MethodInfo _MenuBar$AccessibleAWTMenuBar_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, $PROTECTED, $method(static_cast<void(MenuBar$AccessibleAWTMenuBar::*)($MenuBar*)>(&MenuBar$AccessibleAWTMenuBar::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MenuBar$AccessibleAWTMenuBar_InnerClassesInfo_[] = {
	{"java.awt.MenuBar$AccessibleAWTMenuBar", "java.awt.MenuBar", "AccessibleAWTMenuBar", $PROTECTED},
	{"java.awt.MenuComponent$AccessibleAWTMenuComponent", "java.awt.MenuComponent", "AccessibleAWTMenuComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _MenuBar$AccessibleAWTMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MenuBar$AccessibleAWTMenuBar",
	"java.awt.MenuComponent$AccessibleAWTMenuComponent",
	nullptr,
	_MenuBar$AccessibleAWTMenuBar_FieldInfo_,
	_MenuBar$AccessibleAWTMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_MenuBar$AccessibleAWTMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuBar"
};

$Object* allocate$MenuBar$AccessibleAWTMenuBar($Class* clazz) {
	return $of($alloc(MenuBar$AccessibleAWTMenuBar));
}

void MenuBar$AccessibleAWTMenuBar::init$($MenuBar* this$0) {
	$set(this, this$0, this$0);
	$MenuComponent$AccessibleAWTMenuComponent::init$(this$0);
}

$AccessibleRole* MenuBar$AccessibleAWTMenuBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::MENU_BAR;
}

MenuBar$AccessibleAWTMenuBar::MenuBar$AccessibleAWTMenuBar() {
}

$Class* MenuBar$AccessibleAWTMenuBar::load$($String* name, bool initialize) {
	$loadClass(MenuBar$AccessibleAWTMenuBar, name, initialize, &_MenuBar$AccessibleAWTMenuBar_ClassInfo_, allocate$MenuBar$AccessibleAWTMenuBar);
	return class$;
}

$Class* MenuBar$AccessibleAWTMenuBar::class$ = nullptr;

	} // awt
} // java