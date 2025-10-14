#include <javax/swing/plaf/metal/MetalTitlePane$MaximizeAction.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTitlePane$MaximizeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$MaximizeAction, this$0)},
	{}
};

$MethodInfo _MetalTitlePane$MaximizeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalTitlePane$MaximizeAction::*)($MetalTitlePane*)>(&MetalTitlePane$MaximizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTitlePane$MaximizeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTitlePane$MaximizeAction", "javax.swing.plaf.metal.MetalTitlePane", "MaximizeAction", $PRIVATE},
	{}
};

$ClassInfo _MetalTitlePane$MaximizeAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTitlePane$MaximizeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_MetalTitlePane$MaximizeAction_FieldInfo_,
	_MetalTitlePane$MaximizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTitlePane$MaximizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTitlePane"
};

$Object* allocate$MetalTitlePane$MaximizeAction($Class* clazz) {
	return $of($alloc(MetalTitlePane$MaximizeAction));
}

void MetalTitlePane$MaximizeAction::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString($of("MetalTitlePane.maximizeTitle"_s), $(this$0->getLocale()))));
}

void MetalTitlePane$MaximizeAction::actionPerformed($ActionEvent* e) {
	this->this$0->maximize();
}

MetalTitlePane$MaximizeAction::MetalTitlePane$MaximizeAction() {
}

$Class* MetalTitlePane$MaximizeAction::load$($String* name, bool initialize) {
	$loadClass(MetalTitlePane$MaximizeAction, name, initialize, &_MetalTitlePane$MaximizeAction_ClassInfo_, allocate$MetalTitlePane$MaximizeAction);
	return class$;
}

$Class* MetalTitlePane$MaximizeAction::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax