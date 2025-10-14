#include <com/sun/java/swing/plaf/motif/MotifLabelUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MOTIF_LABEL_UI_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifLabelUI_FieldInfo_[] = {
	{"MOTIF_LABEL_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifLabelUI, MOTIF_LABEL_UI_KEY)},
	{}
};

$MethodInfo _MotifLabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifLabelUI::*)()>(&MotifLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifLabelUI::createUI))},
	{}
};

$ClassInfo _MotifLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLabelUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	nullptr,
	_MotifLabelUI_FieldInfo_,
	_MotifLabelUI_MethodInfo_
};

$Object* allocate$MotifLabelUI($Class* clazz) {
	return $of($alloc(MotifLabelUI));
}

$Object* MotifLabelUI::MOTIF_LABEL_UI_KEY = nullptr;

void MotifLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* MotifLabelUI::createUI($JComponent* c) {
	$init(MotifLabelUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifLabelUI, motifLabelUI, $cast(MotifLabelUI, $nc(appContext)->get(MotifLabelUI::MOTIF_LABEL_UI_KEY)));
	if (motifLabelUI == nullptr) {
		$assign(motifLabelUI, $new(MotifLabelUI));
		appContext->put(MotifLabelUI::MOTIF_LABEL_UI_KEY, motifLabelUI);
	}
	return motifLabelUI;
}

void clinit$MotifLabelUI($Class* class$) {
	$assignStatic(MotifLabelUI::MOTIF_LABEL_UI_KEY, $new($Object));
}

MotifLabelUI::MotifLabelUI() {
}

$Class* MotifLabelUI::load$($String* name, bool initialize) {
	$loadClass(MotifLabelUI, name, initialize, &_MotifLabelUI_ClassInfo_, clinit$MotifLabelUI, allocate$MotifLabelUI);
	return class$;
}

$Class* MotifLabelUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com