#include <com/apple/laf/AquaTreeUI$LineListener.h>

#include <com/apple/laf/AquaTreeUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTreeUI$LineListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$LineListener, this$0)},
	{}
};

$MethodInfo _AquaTreeUI$LineListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTreeUI;)V", nullptr, 0, $method(static_cast<void(AquaTreeUI$LineListener::*)($AquaTreeUI*)>(&AquaTreeUI$LineListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTreeUI$LineListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTreeUI$LineListener", "com.apple.laf.AquaTreeUI", "LineListener", 0},
	{}
};

$ClassInfo _AquaTreeUI$LineListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTreeUI$LineListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaTreeUI$LineListener_FieldInfo_,
	_AquaTreeUI$LineListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTreeUI$LineListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTreeUI"
};

$Object* allocate$AquaTreeUI$LineListener($Class* clazz) {
	return $of($alloc(AquaTreeUI$LineListener));
}

void AquaTreeUI$LineListener::init$($AquaTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTreeUI$LineListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("JTree.lineStyle"_s)) {
		this->this$0->decodeLineStyle($(e->getNewValue()));
	}
}

AquaTreeUI$LineListener::AquaTreeUI$LineListener() {
}

$Class* AquaTreeUI$LineListener::load$($String* name, bool initialize) {
	$loadClass(AquaTreeUI$LineListener, name, initialize, &_AquaTreeUI$LineListener_ClassInfo_, allocate$AquaTreeUI$LineListener);
	return class$;
}

$Class* AquaTreeUI$LineListener::class$ = nullptr;

		} // laf
	} // apple
} // com