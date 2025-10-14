#include <javax/swing/JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef CHECK_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;

namespace javax {
	namespace swing {

$FieldInfo _JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JCheckBoxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, this$0)},
	{}
};

$MethodInfo _JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JCheckBoxMenuItem;)V", nullptr, $PROTECTED, $method(static_cast<void(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::*)($JCheckBoxMenuItem*)>(&JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem", "javax.swing.JCheckBoxMenuItem", "AccessibleJCheckBoxMenuItem", $PROTECTED},
	{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
	{}
};

$ClassInfo _JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem",
	"javax.swing.JMenuItem$AccessibleJMenuItem",
	nullptr,
	_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_FieldInfo_,
	_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JCheckBoxMenuItem"
};

$Object* allocate$JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem($Class* clazz) {
	return $of($alloc(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem));
}

void JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::init$($JCheckBoxMenuItem* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem$AccessibleJMenuItem::init$(this$0);
}

$AccessibleRole* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem() {
}

$Class* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::load$($String* name, bool initialize) {
	$loadClass(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, name, initialize, &_JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem_ClassInfo_, allocate$JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem);
	return class$;
}

$Class* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::class$ = nullptr;

	} // swing
} // javax