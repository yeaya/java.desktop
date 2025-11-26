#include <com/sun/java/swing/plaf/motif/MotifSeparatorUI.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifSeparatorUI::*)()>(&MotifSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifSeparatorUI::createUI))},
	{}
};

$ClassInfo _MotifSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	nullptr,
	_MotifSeparatorUI_MethodInfo_
};

$Object* allocate$MotifSeparatorUI($Class* clazz) {
	return $of($alloc(MotifSeparatorUI));
}

void MotifSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* MotifSeparatorUI::createUI($JComponent* c) {
	$init(MotifSeparatorUI);
	return $new(MotifSeparatorUI);
}

MotifSeparatorUI::MotifSeparatorUI() {
}

$Class* MotifSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(MotifSeparatorUI, name, initialize, &_MotifSeparatorUI_ClassInfo_, allocate$MotifSeparatorUI);
	return class$;
}

$Class* MotifSeparatorUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com