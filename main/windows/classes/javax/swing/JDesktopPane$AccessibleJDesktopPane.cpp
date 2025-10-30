#include <javax/swing/JDesktopPane$AccessibleJDesktopPane.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef DESKTOP_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JLayeredPane = ::javax::swing::JLayeredPane;

namespace javax {
	namespace swing {

$FieldInfo _JDesktopPane$AccessibleJDesktopPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JDesktopPane;", nullptr, $FINAL | $SYNTHETIC, $field(JDesktopPane$AccessibleJDesktopPane, this$0)},
	{}
};

$MethodInfo _JDesktopPane$AccessibleJDesktopPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDesktopPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JDesktopPane$AccessibleJDesktopPane::*)($JDesktopPane*)>(&JDesktopPane$AccessibleJDesktopPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JDesktopPane$AccessibleJDesktopPane_InnerClassesInfo_[] = {
	{"javax.swing.JDesktopPane$AccessibleJDesktopPane", "javax.swing.JDesktopPane", "AccessibleJDesktopPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JDesktopPane$AccessibleJDesktopPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JDesktopPane$AccessibleJDesktopPane",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JDesktopPane$AccessibleJDesktopPane_FieldInfo_,
	_JDesktopPane$AccessibleJDesktopPane_MethodInfo_,
	nullptr,
	nullptr,
	_JDesktopPane$AccessibleJDesktopPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JDesktopPane"
};

$Object* allocate$JDesktopPane$AccessibleJDesktopPane($Class* clazz) {
	return $of($alloc(JDesktopPane$AccessibleJDesktopPane));
}

void JDesktopPane$AccessibleJDesktopPane::init$($JDesktopPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JDesktopPane$AccessibleJDesktopPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DESKTOP_PANE;
}

JDesktopPane$AccessibleJDesktopPane::JDesktopPane$AccessibleJDesktopPane() {
}

$Class* JDesktopPane$AccessibleJDesktopPane::load$($String* name, bool initialize) {
	$loadClass(JDesktopPane$AccessibleJDesktopPane, name, initialize, &_JDesktopPane$AccessibleJDesktopPane_ClassInfo_, allocate$JDesktopPane$AccessibleJDesktopPane);
	return class$;
}

$Class* JDesktopPane$AccessibleJDesktopPane::class$ = nullptr;

	} // swing
} // javax