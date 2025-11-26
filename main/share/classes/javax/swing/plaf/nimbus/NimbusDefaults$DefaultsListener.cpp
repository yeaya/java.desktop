#include <javax/swing/plaf/nimbus/NimbusDefaults$DefaultsListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;
using $NimbusDefaults$ColorTree = ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$DefaultsListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$DefaultsListener, this$0)},
	{}
};

$MethodInfo _NimbusDefaults$DefaultsListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusDefaults$DefaultsListener::*)($NimbusDefaults*)>(&NimbusDefaults$DefaultsListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$DefaultsListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener", "javax.swing.plaf.nimbus.NimbusDefaults", "DefaultsListener", $PRIVATE},
	{}
};

$ClassInfo _NimbusDefaults$DefaultsListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_NimbusDefaults$DefaultsListener_FieldInfo_,
	_NimbusDefaults$DefaultsListener_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$DefaultsListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$DefaultsListener($Class* clazz) {
	return $of($alloc(NimbusDefaults$DefaultsListener));
}

void NimbusDefaults$DefaultsListener::init$($NimbusDefaults* this$0) {
	$set(this, this$0, this$0);
}

void NimbusDefaults$DefaultsListener::propertyChange($PropertyChangeEvent* evt) {
	if ("lookAndFeel"_s->equals($($nc(evt)->getPropertyName()))) {
		$nc(this->this$0->colorTree)->update();
	}
}

NimbusDefaults$DefaultsListener::NimbusDefaults$DefaultsListener() {
}

$Class* NimbusDefaults$DefaultsListener::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$DefaultsListener, name, initialize, &_NimbusDefaults$DefaultsListener_ClassInfo_, allocate$NimbusDefaults$DefaultsListener);
	return class$;
}

$Class* NimbusDefaults$DefaultsListener::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax