#include <javax/swing/JFrame$AccessibleJFrame.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame$AccessibleAWTFrame.h>
#include <java/awt/Frame.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ACTIVE
#undef RESIZABLE

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Frame = ::java::awt::Frame;
using $Frame$AccessibleAWTFrame = ::java::awt::Frame$AccessibleAWTFrame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JFrame = ::javax::swing::JFrame;

namespace javax {
	namespace swing {

$FieldInfo _JFrame$AccessibleJFrame_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JFrame$AccessibleJFrame, this$0)},
	{}
};

$MethodInfo _JFrame$AccessibleJFrame_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PROTECTED, $method(static_cast<void(JFrame$AccessibleJFrame::*)($JFrame*)>(&JFrame$AccessibleJFrame::init$))},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFrame$AccessibleJFrame_InnerClassesInfo_[] = {
	{"javax.swing.JFrame$AccessibleJFrame", "javax.swing.JFrame", "AccessibleJFrame", $PROTECTED},
	{"java.awt.Frame$AccessibleAWTFrame", "java.awt.Frame", "AccessibleAWTFrame", $PROTECTED},
	{}
};

$ClassInfo _JFrame$AccessibleJFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JFrame$AccessibleJFrame",
	"java.awt.Frame$AccessibleAWTFrame",
	nullptr,
	_JFrame$AccessibleJFrame_FieldInfo_,
	_JFrame$AccessibleJFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JFrame$AccessibleJFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFrame"
};

$Object* allocate$JFrame$AccessibleJFrame($Class* clazz) {
	return $of($alloc(JFrame$AccessibleJFrame));
}

void JFrame$AccessibleJFrame::init$($JFrame* this$0) {
	$set(this, this$0, this$0);
	$Frame$AccessibleAWTFrame::init$(this$0);
}

$String* JFrame$AccessibleJFrame::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getTitle() == nullptr) {
		return $Frame$AccessibleAWTFrame::getAccessibleName();
	} else {
		return this->this$0->getTitle();
	}
}

$AccessibleStateSet* JFrame$AccessibleJFrame::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Frame$AccessibleAWTFrame::getAccessibleStateSet());
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	return states;
}

JFrame$AccessibleJFrame::JFrame$AccessibleJFrame() {
}

$Class* JFrame$AccessibleJFrame::load$($String* name, bool initialize) {
	$loadClass(JFrame$AccessibleJFrame, name, initialize, &_JFrame$AccessibleJFrame_ClassInfo_, allocate$JFrame$AccessibleJFrame);
	return class$;
}

$Class* JFrame$AccessibleJFrame::class$ = nullptr;

	} // swing
} // javax