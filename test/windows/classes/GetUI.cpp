#include <GetUI.h>

#include <GetUI$1.h>
#include <GetUI$CustomJComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $GetUI$1 = ::GetUI$1;
using $GetUI$CustomJComponent = ::GetUI$CustomJComponent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

$MethodInfo _GetUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUI::*)()>(&GetUI::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetUI::main))},
	{}
};

$InnerClassInfo _GetUI_InnerClassesInfo_[] = {
	{"GetUI$CustomJComponent", "GetUI", "CustomJComponent", $PRIVATE | $STATIC},
	{"GetUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetUI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"GetUI",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetUI_MethodInfo_,
	nullptr,
	nullptr,
	_GetUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetUI$CustomJComponent,GetUI$1"
};

$Object* allocate$GetUI($Class* clazz) {
	return $of($alloc(GetUI));
}

void GetUI::init$() {
}

void GetUI::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($GetUI$CustomJComponent, component, $new($GetUI$CustomJComponent));
	$var($ComponentUI, ui, $new($GetUI$1));
	component->setUI(ui);
	$var($ComponentUI, actual, component->getUI());
	if (actual != ui) {
		$nc($System::err)->println($$str({"Expected: "_s, ui}));
		$nc($System::err)->println($$str({"Actual: "_s, actual}));
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

GetUI::GetUI() {
}

$Class* GetUI::load$($String* name, bool initialize) {
	$loadClass(GetUI, name, initialize, &_GetUI_ClassInfo_, allocate$GetUI);
	return class$;
}

$Class* GetUI::class$ = nullptr;