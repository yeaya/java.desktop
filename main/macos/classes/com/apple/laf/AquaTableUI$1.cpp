#include <com/apple/laf/AquaTableUI$1.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTableUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaTableUI = ::com::apple::laf::AquaTableUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableUI$1, this$0)},
	{}
};

$MethodInfo _AquaTableUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTableUI;)V", nullptr, 0, $method(static_cast<void(AquaTableUI$1::*)($AquaTableUI*)>(&AquaTableUI$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTableUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTableUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaTableUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTableUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTableUI$1",
	"com.apple.laf.AquaFocusHandler",
	nullptr,
	_AquaTableUI$1_FieldInfo_,
	_AquaTableUI$1_MethodInfo_,
	nullptr,
	&_AquaTableUI$1_EnclosingMethodInfo_,
	_AquaTableUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableUI"
};

$Object* allocate$AquaTableUI$1($Class* clazz) {
	return $of($alloc(AquaTableUI$1));
}

void AquaTableUI$1::init$($AquaTableUI* this$0) {
	$set(this, this$0, this$0);
	$AquaFocusHandler::init$();
}

void AquaTableUI$1::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$AquaFocusHandler::propertyChange(ev);
	if (!$nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals($($nc(ev)->getPropertyName()))) {
		return;
	}
	$var($String, var$0, "Table"_s);
	$var($JTable, var$1, this->this$0->getComponent());
	$AquaFocusHandler::swapSelectionColors(var$0, var$1, $($nc(ev)->getNewValue()));
}

AquaTableUI$1::AquaTableUI$1() {
}

$Class* AquaTableUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaTableUI$1, name, initialize, &_AquaTableUI$1_ClassInfo_, allocate$AquaTableUI$1);
	return class$;
}

$Class* AquaTableUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com