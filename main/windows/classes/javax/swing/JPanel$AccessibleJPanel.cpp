#include <javax/swing/JPanel$AccessibleJPanel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef PANEL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPanel = ::javax::swing::JPanel;

namespace javax {
	namespace swing {

$FieldInfo _JPanel$AccessibleJPanel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JPanel;", nullptr, $FINAL | $SYNTHETIC, $field(JPanel$AccessibleJPanel, this$0)},
	{}
};

$MethodInfo _JPanel$AccessibleJPanel_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $method(static_cast<void(JPanel$AccessibleJPanel::*)($JPanel*)>(&JPanel$AccessibleJPanel::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JPanel$AccessibleJPanel_InnerClassesInfo_[] = {
	{"javax.swing.JPanel$AccessibleJPanel", "javax.swing.JPanel", "AccessibleJPanel", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JPanel$AccessibleJPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPanel$AccessibleJPanel",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JPanel$AccessibleJPanel_FieldInfo_,
	_JPanel$AccessibleJPanel_MethodInfo_,
	nullptr,
	nullptr,
	_JPanel$AccessibleJPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JPanel"
};

$Object* allocate$JPanel$AccessibleJPanel($Class* clazz) {
	return $of($alloc(JPanel$AccessibleJPanel));
}

void JPanel$AccessibleJPanel::init$($JPanel* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JPanel$AccessibleJPanel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

JPanel$AccessibleJPanel::JPanel$AccessibleJPanel() {
}

$Class* JPanel$AccessibleJPanel::load$($String* name, bool initialize) {
	$loadClass(JPanel$AccessibleJPanel, name, initialize, &_JPanel$AccessibleJPanel_ClassInfo_, allocate$JPanel$AccessibleJPanel);
	return class$;
}

$Class* JPanel$AccessibleJPanel::class$ = nullptr;

	} // swing
} // javax