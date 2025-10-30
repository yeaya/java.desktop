#include <TestUIDefaultsErrorHandling$BrokenUI.h>

#include <TestUIDefaultsErrorHandling.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <jcpp.h>

using $TestUIDefaultsErrorHandling = ::TestUIDefaultsErrorHandling;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;

$MethodInfo _TestUIDefaultsErrorHandling$BrokenUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestUIDefaultsErrorHandling$BrokenUI::*)()>(&TestUIDefaultsErrorHandling$BrokenUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&TestUIDefaultsErrorHandling$BrokenUI::createUI))},
	{}
};

$InnerClassInfo _TestUIDefaultsErrorHandling$BrokenUI_InnerClassesInfo_[] = {
	{"TestUIDefaultsErrorHandling$BrokenUI", "TestUIDefaultsErrorHandling", "BrokenUI", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestUIDefaultsErrorHandling$BrokenUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUIDefaultsErrorHandling$BrokenUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	nullptr,
	nullptr,
	_TestUIDefaultsErrorHandling$BrokenUI_MethodInfo_,
	nullptr,
	nullptr,
	_TestUIDefaultsErrorHandling$BrokenUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestUIDefaultsErrorHandling"
};

$Object* allocate$TestUIDefaultsErrorHandling$BrokenUI($Class* clazz) {
	return $of($alloc(TestUIDefaultsErrorHandling$BrokenUI));
}

$ComponentUI* TestUIDefaultsErrorHandling$BrokenUI::createUI($JComponent* target) {
	$init(TestUIDefaultsErrorHandling$BrokenUI);
	return $new(TestUIDefaultsErrorHandling$BrokenUI);
}

void TestUIDefaultsErrorHandling$BrokenUI::init$() {
	$BasicLabelUI::init$();
	$throwNew($RuntimeException, "oops, complex problem with diagnostics"_s);
}

TestUIDefaultsErrorHandling$BrokenUI::TestUIDefaultsErrorHandling$BrokenUI() {
}

$Class* TestUIDefaultsErrorHandling$BrokenUI::load$($String* name, bool initialize) {
	$loadClass(TestUIDefaultsErrorHandling$BrokenUI, name, initialize, &_TestUIDefaultsErrorHandling$BrokenUI_ClassInfo_, allocate$TestUIDefaultsErrorHandling$BrokenUI);
	return class$;
}

$Class* TestUIDefaultsErrorHandling$BrokenUI::class$ = nullptr;