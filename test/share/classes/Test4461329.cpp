#include <Test4461329.h>

#include <java/lang/Error.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _Test4461329_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4461329::*)()>(&Test4461329::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4461329::main))},
	{}
};

$ClassInfo _Test4461329_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4461329",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4461329_MethodInfo_
};

$Object* allocate$Test4461329($Class* clazz) {
	return $of($alloc(Test4461329));
}

void Test4461329::init$() {
}

void Test4461329::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JColorChooser, chooser, $new($JColorChooser));
	if (nullptr == chooser->getPreviewPanel()) {
		$throwNew($Error, "Failed: getPreviewPanel() returned null"_s);
	}
	$var($JButton, button, $new($JButton, "Color"_s));
	chooser->setPreviewPanel(button);
	if (!$equals(button, chooser->getPreviewPanel())) {
		$throwNew($Error, "Failed in setPreviewPanel()"_s);
	}
}

Test4461329::Test4461329() {
}

$Class* Test4461329::load$($String* name, bool initialize) {
	$loadClass(Test4461329, name, initialize, &_Test4461329_ClassInfo_, allocate$Test4461329);
	return class$;
}

$Class* Test4461329::class$ = nullptr;