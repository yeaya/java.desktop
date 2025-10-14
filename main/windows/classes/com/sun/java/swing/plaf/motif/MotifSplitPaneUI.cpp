#include <com/sun/java/swing/plaf/motif/MotifSplitPaneUI.h>

#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $MotifSplitPaneDivider = ::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifSplitPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifSplitPaneUI::*)()>(&MotifSplitPaneUI::init$))},
	{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifSplitPaneUI::createUI))},
	{}
};

$ClassInfo _MotifSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifSplitPaneUI",
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	nullptr,
	nullptr,
	_MotifSplitPaneUI_MethodInfo_
};

$Object* allocate$MotifSplitPaneUI($Class* clazz) {
	return $of($alloc(MotifSplitPaneUI));
}

void MotifSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* MotifSplitPaneUI::createUI($JComponent* x) {
	$init(MotifSplitPaneUI);
	return $new(MotifSplitPaneUI);
}

$BasicSplitPaneDivider* MotifSplitPaneUI::createDefaultDivider() {
	return $new($MotifSplitPaneDivider, this);
}

MotifSplitPaneUI::MotifSplitPaneUI() {
}

$Class* MotifSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifSplitPaneUI, name, initialize, &_MotifSplitPaneUI_ClassInfo_, allocate$MotifSplitPaneUI);
	return class$;
}

$Class* MotifSplitPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com