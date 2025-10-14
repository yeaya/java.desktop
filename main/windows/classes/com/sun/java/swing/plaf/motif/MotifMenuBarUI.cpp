#include <com/sun/java/swing/plaf/motif/MotifMenuBarUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifMenuBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifMenuBarUI::*)()>(&MotifMenuBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifMenuBarUI::createUI))},
	{}
};

$ClassInfo _MotifMenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuBarUI",
	"javax.swing.plaf.basic.BasicMenuBarUI",
	nullptr,
	nullptr,
	_MotifMenuBarUI_MethodInfo_
};

$Object* allocate$MotifMenuBarUI($Class* clazz) {
	return $of($alloc(MotifMenuBarUI));
}

void MotifMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
}

$ComponentUI* MotifMenuBarUI::createUI($JComponent* x) {
	$init(MotifMenuBarUI);
	return $new(MotifMenuBarUI);
}

MotifMenuBarUI::MotifMenuBarUI() {
}

$Class* MotifMenuBarUI::load$($String* name, bool initialize) {
	$loadClass(MotifMenuBarUI, name, initialize, &_MotifMenuBarUI_ClassInfo_, allocate$MotifMenuBarUI);
	return class$;
}

$Class* MotifMenuBarUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com