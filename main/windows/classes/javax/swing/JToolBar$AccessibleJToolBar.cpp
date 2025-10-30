#include <javax/swing/JToolBar$AccessibleJToolBar.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef TOOL_BAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToolBar = ::javax::swing::JToolBar;

namespace javax {
	namespace swing {

$FieldInfo _JToolBar$AccessibleJToolBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JToolBar;", nullptr, $FINAL | $SYNTHETIC, $field(JToolBar$AccessibleJToolBar, this$0)},
	{}
};

$MethodInfo _JToolBar$AccessibleJToolBar_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JToolBar;)V", nullptr, $PROTECTED, $method(static_cast<void(JToolBar$AccessibleJToolBar::*)($JToolBar*)>(&JToolBar$AccessibleJToolBar::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JToolBar$AccessibleJToolBar_InnerClassesInfo_[] = {
	{"javax.swing.JToolBar$AccessibleJToolBar", "javax.swing.JToolBar", "AccessibleJToolBar", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JToolBar$AccessibleJToolBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToolBar$AccessibleJToolBar",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JToolBar$AccessibleJToolBar_FieldInfo_,
	_JToolBar$AccessibleJToolBar_MethodInfo_,
	nullptr,
	nullptr,
	_JToolBar$AccessibleJToolBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToolBar"
};

$Object* allocate$JToolBar$AccessibleJToolBar($Class* clazz) {
	return $of($alloc(JToolBar$AccessibleJToolBar));
}

void JToolBar$AccessibleJToolBar::init$($JToolBar* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JToolBar$AccessibleJToolBar::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	return states;
}

$AccessibleRole* JToolBar$AccessibleJToolBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TOOL_BAR;
}

JToolBar$AccessibleJToolBar::JToolBar$AccessibleJToolBar() {
}

$Class* JToolBar$AccessibleJToolBar::load$($String* name, bool initialize) {
	$loadClass(JToolBar$AccessibleJToolBar, name, initialize, &_JToolBar$AccessibleJToolBar_ClassInfo_, allocate$JToolBar$AccessibleJToolBar);
	return class$;
}

$Class* JToolBar$AccessibleJToolBar::class$ = nullptr;

	} // swing
} // javax