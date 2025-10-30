#include <javax/swing/plaf/metal/MetalTitlePane$IconifyAction.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
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

$FieldInfo _MetalTitlePane$IconifyAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$IconifyAction, this$0)},
	{}
};

$MethodInfo _MetalTitlePane$IconifyAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalTitlePane$IconifyAction::*)($MetalTitlePane*)>(&MetalTitlePane$IconifyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTitlePane$IconifyAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTitlePane$IconifyAction", "javax.swing.plaf.metal.MetalTitlePane", "IconifyAction", $PRIVATE},
	{}
};

$ClassInfo _MetalTitlePane$IconifyAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTitlePane$IconifyAction",
	"javax.swing.AbstractAction",
	nullptr,
	_MetalTitlePane$IconifyAction_FieldInfo_,
	_MetalTitlePane$IconifyAction_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTitlePane$IconifyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTitlePane"
};

$Object* allocate$MetalTitlePane$IconifyAction($Class* clazz) {
	return $of($alloc(MetalTitlePane$IconifyAction));
}

void MetalTitlePane$IconifyAction::init$($MetalTitlePane* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString($of("MetalTitlePane.iconifyTitle"_s), $(this$0->getLocale()))));
}

void MetalTitlePane$IconifyAction::actionPerformed($ActionEvent* e) {
	this->this$0->iconify();
}

MetalTitlePane$IconifyAction::MetalTitlePane$IconifyAction() {
}

$Class* MetalTitlePane$IconifyAction::load$($String* name, bool initialize) {
	$loadClass(MetalTitlePane$IconifyAction, name, initialize, &_MetalTitlePane$IconifyAction_ClassInfo_, allocate$MetalTitlePane$IconifyAction);
	return class$;
}

$Class* MetalTitlePane$IconifyAction::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax