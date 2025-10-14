#include <javax/swing/JViewport$AccessibleJViewport.h>

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
#include <javax/swing/JViewport.h>
#include <jcpp.h>

#undef VIEWPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

$FieldInfo _JViewport$AccessibleJViewport_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JViewport;", nullptr, $FINAL | $SYNTHETIC, $field(JViewport$AccessibleJViewport, this$0)},
	{}
};

$MethodInfo _JViewport$AccessibleJViewport_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JViewport;)V", nullptr, $PROTECTED, $method(static_cast<void(JViewport$AccessibleJViewport::*)($JViewport*)>(&JViewport$AccessibleJViewport::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JViewport$AccessibleJViewport_InnerClassesInfo_[] = {
	{"javax.swing.JViewport$AccessibleJViewport", "javax.swing.JViewport", "AccessibleJViewport", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JViewport$AccessibleJViewport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JViewport$AccessibleJViewport",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JViewport$AccessibleJViewport_FieldInfo_,
	_JViewport$AccessibleJViewport_MethodInfo_,
	nullptr,
	nullptr,
	_JViewport$AccessibleJViewport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JViewport"
};

$Object* allocate$JViewport$AccessibleJViewport($Class* clazz) {
	return $of($alloc(JViewport$AccessibleJViewport));
}

void JViewport$AccessibleJViewport::init$($JViewport* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JViewport$AccessibleJViewport::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::VIEWPORT;
}

JViewport$AccessibleJViewport::JViewport$AccessibleJViewport() {
}

$Class* JViewport$AccessibleJViewport::load$($String* name, bool initialize) {
	$loadClass(JViewport$AccessibleJViewport, name, initialize, &_JViewport$AccessibleJViewport_ClassInfo_, allocate$JViewport$AccessibleJViewport);
	return class$;
}

$Class* JViewport$AccessibleJViewport::class$ = nullptr;

	} // swing
} // javax