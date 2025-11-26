#include <bug7199708$2$1.h>

#include <bug7199708$2.h>
#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <jcpp.h>

using $bug7199708$2 = ::bug7199708$2;
using $bug7199708$ComponentAction = ::bug7199708$ComponentAction;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;

$FieldInfo _bug7199708$2$1_FieldInfo_[] = {
	{"this$0", "Lbug7199708$2;", nullptr, $FINAL | $SYNTHETIC, $field(bug7199708$2$1, this$0)},
	{"val$detailsTooltip", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug7199708$2$1, val$detailsTooltip)},
	{}
};

$MethodInfo _bug7199708$2$1_MethodInfo_[] = {
	{"<init>", "(Lbug7199708$2;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug7199708$2$1::*)($bug7199708$2*,$String*)>(&bug7199708$2$1::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"perform", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7199708$2$1_EnclosingMethodInfo_ = {
	"bug7199708$2",
	"run",
	"()V"
};

$InnerClassInfo _bug7199708$2$1_InnerClassesInfo_[] = {
	{"bug7199708$2", nullptr, nullptr, 0},
	{"bug7199708$2$1", nullptr, nullptr, 0},
	{"bug7199708$ComponentAction", "bug7199708", "ComponentAction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _bug7199708$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7199708$2$1",
	"java.lang.Object",
	"bug7199708$ComponentAction",
	_bug7199708$2$1_FieldInfo_,
	_bug7199708$2$1_MethodInfo_,
	nullptr,
	&_bug7199708$2$1_EnclosingMethodInfo_,
	_bug7199708$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7199708"
};

$Object* allocate$bug7199708$2$1($Class* clazz) {
	return $of($alloc(bug7199708$2$1));
}

void bug7199708$2$1::init$($bug7199708$2* this$0, $String* val$detailsTooltip) {
	$set(this, this$0, this$0);
	$set(this, val$detailsTooltip, val$detailsTooltip);
}

bool bug7199708$2$1::accept($Component* component) {
	return ($instanceOf($AbstractButton, component)) && $nc(this->val$detailsTooltip)->equals($($nc(($cast($AbstractButton, component)))->getToolTipText()));
}

void bug7199708$2$1::perform($Component* component) {
	$nc(($cast($AbstractButton, component)))->doClick();
}

bug7199708$2$1::bug7199708$2$1() {
}

$Class* bug7199708$2$1::load$($String* name, bool initialize) {
	$loadClass(bug7199708$2$1, name, initialize, &_bug7199708$2$1_ClassInfo_, allocate$bug7199708$2$1);
	return class$;
}

$Class* bug7199708$2$1::class$ = nullptr;