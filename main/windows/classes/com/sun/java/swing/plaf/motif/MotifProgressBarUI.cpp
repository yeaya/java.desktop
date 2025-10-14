#include <com/sun/java/swing/plaf/motif/MotifProgressBarUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifProgressBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifProgressBarUI::*)()>(&MotifProgressBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifProgressBarUI::createUI))},
	{}
};

$ClassInfo _MotifProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifProgressBarUI",
	"javax.swing.plaf.basic.BasicProgressBarUI",
	nullptr,
	nullptr,
	_MotifProgressBarUI_MethodInfo_
};

$Object* allocate$MotifProgressBarUI($Class* clazz) {
	return $of($alloc(MotifProgressBarUI));
}

void MotifProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* MotifProgressBarUI::createUI($JComponent* x) {
	$init(MotifProgressBarUI);
	return $new(MotifProgressBarUI);
}

MotifProgressBarUI::MotifProgressBarUI() {
}

$Class* MotifProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(MotifProgressBarUI, name, initialize, &_MotifProgressBarUI_ClassInfo_, allocate$MotifProgressBarUI);
	return class$;
}

$Class* MotifProgressBarUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com