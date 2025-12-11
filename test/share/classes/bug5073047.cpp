#include <bug5073047.h>

#include <bug5073047$MyTheme.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

using $bug5073047$MyTheme = ::bug5073047$MyTheme;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

$MethodInfo _bug5073047_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug5073047::*)()>(&bug5073047::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug5073047::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug5073047_InnerClassesInfo_[] = {
	{"bug5073047$MyTheme", "bug5073047", "MyTheme", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug5073047_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug5073047",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug5073047_MethodInfo_,
	nullptr,
	nullptr,
	_bug5073047_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug5073047$MyTheme"
};

$Object* allocate$bug5073047($Class* clazz) {
	return $of($alloc(bug5073047));
}

void bug5073047::init$() {
}

void bug5073047::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($bug5073047$MyTheme, theme, $new($bug5073047$MyTheme));
	$MetalLookAndFeel::setCurrentTheme(theme);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	if (!$equals($UIManager::get("Button.font"_s), theme->ctf)) {
		$throwNew($RuntimeException, "Unexpected font"_s);
	}
}

bug5073047::bug5073047() {
}

$Class* bug5073047::load$($String* name, bool initialize) {
	$loadClass(bug5073047, name, initialize, &_bug5073047_ClassInfo_, allocate$bug5073047);
	return class$;
}

$Class* bug5073047::class$ = nullptr;