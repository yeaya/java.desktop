#include <javax/swing/JToolTip$AccessibleJToolTip.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <jcpp.h>

#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef TOOL_TIP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToolTip = ::javax::swing::JToolTip;

namespace javax {
	namespace swing {

$FieldInfo _JToolTip$AccessibleJToolTip_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JToolTip;", nullptr, $FINAL | $SYNTHETIC, $field(JToolTip$AccessibleJToolTip, this$0)},
	{}
};

$MethodInfo _JToolTip$AccessibleJToolTip_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JToolTip;)V", nullptr, $PROTECTED, $method(static_cast<void(JToolTip$AccessibleJToolTip::*)($JToolTip*)>(&JToolTip$AccessibleJToolTip::init$))},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JToolTip$AccessibleJToolTip_InnerClassesInfo_[] = {
	{"javax.swing.JToolTip$AccessibleJToolTip", "javax.swing.JToolTip", "AccessibleJToolTip", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JToolTip$AccessibleJToolTip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToolTip$AccessibleJToolTip",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JToolTip$AccessibleJToolTip_FieldInfo_,
	_JToolTip$AccessibleJToolTip_MethodInfo_,
	nullptr,
	nullptr,
	_JToolTip$AccessibleJToolTip_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToolTip"
};

$Object* allocate$JToolTip$AccessibleJToolTip($Class* clazz) {
	return $of($alloc(JToolTip$AccessibleJToolTip));
}

void JToolTip$AccessibleJToolTip::init$($JToolTip* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$String* JToolTip$AccessibleJToolTip::getAccessibleDescription() {
	$var($String, description, this->accessibleDescription);
	if (description == nullptr) {
		$init($AccessibleContext);
		$assign(description, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY)));
	}
	if (description == nullptr) {
		$assign(description, this->this$0->getTipText());
	}
	return description;
}

$AccessibleRole* JToolTip$AccessibleJToolTip::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TOOL_TIP;
}

JToolTip$AccessibleJToolTip::JToolTip$AccessibleJToolTip() {
}

$Class* JToolTip$AccessibleJToolTip::load$($String* name, bool initialize) {
	$loadClass(JToolTip$AccessibleJToolTip, name, initialize, &_JToolTip$AccessibleJToolTip_ClassInfo_, allocate$JToolTip$AccessibleJToolTip);
	return class$;
}

$Class* JToolTip$AccessibleJToolTip::class$ = nullptr;

	} // swing
} // javax