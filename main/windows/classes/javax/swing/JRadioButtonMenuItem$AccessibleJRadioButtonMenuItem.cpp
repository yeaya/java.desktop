#include <javax/swing/JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <jcpp.h>

#undef RADIO_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;

namespace javax {
	namespace swing {

$FieldInfo _JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, this$0)},
	{}
};

$MethodInfo _JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JRadioButtonMenuItem;)V", nullptr, $PROTECTED, $method(static_cast<void(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::*)($JRadioButtonMenuItem*)>(&JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem", "javax.swing.JRadioButtonMenuItem", "AccessibleJRadioButtonMenuItem", $PROTECTED},
	{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
	{}
};

$ClassInfo _JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem",
	"javax.swing.JMenuItem$AccessibleJMenuItem",
	nullptr,
	_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_FieldInfo_,
	_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JRadioButtonMenuItem"
};

$Object* allocate$JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem($Class* clazz) {
	return $of($alloc(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem));
}

void JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::init$($JRadioButtonMenuItem* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem$AccessibleJMenuItem::init$(this$0);
}

$AccessibleRole* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::RADIO_BUTTON;
}

JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem() {
}

$Class* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::load$($String* name, bool initialize) {
	$loadClass(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, name, initialize, &_JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem_ClassInfo_, allocate$JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem);
	return class$;
}

$Class* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::class$ = nullptr;

	} // swing
} // javax