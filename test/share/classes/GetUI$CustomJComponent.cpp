#include <GetUI$CustomJComponent.h>

#include <GetUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

$MethodInfo _GetUI$CustomJComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GetUI$CustomJComponent::*)()>(&GetUI$CustomJComponent::init$))},
	{"getUI", "()Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetUI$CustomJComponent_InnerClassesInfo_[] = {
	{"GetUI$CustomJComponent", "GetUI", "CustomJComponent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GetUI$CustomJComponent_ClassInfo_ = {
	$ACC_SUPER,
	"GetUI$CustomJComponent",
	"javax.swing.JComponent",
	nullptr,
	nullptr,
	_GetUI$CustomJComponent_MethodInfo_,
	nullptr,
	nullptr,
	_GetUI$CustomJComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetUI"
};

$Object* allocate$GetUI$CustomJComponent($Class* clazz) {
	return $of($alloc(GetUI$CustomJComponent));
}

void GetUI$CustomJComponent::init$() {
	$JComponent::init$();
}

$ComponentUI* GetUI$CustomJComponent::getUI() {
	return $JComponent::getUI();
}

void GetUI$CustomJComponent::setUI($ComponentUI* ui) {
	$JComponent::setUI(ui);
}

GetUI$CustomJComponent::GetUI$CustomJComponent() {
}

$Class* GetUI$CustomJComponent::load$($String* name, bool initialize) {
	$loadClass(GetUI$CustomJComponent, name, initialize, &_GetUI$CustomJComponent_ClassInfo_, allocate$GetUI$CustomJComponent);
	return class$;
}

$Class* GetUI$CustomJComponent::class$ = nullptr;