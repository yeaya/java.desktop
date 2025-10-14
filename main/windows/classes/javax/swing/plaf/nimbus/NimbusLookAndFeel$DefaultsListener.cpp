#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$DefaultsListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel$DefaultsListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$DefaultsListener, this$0)},
	{}
};

$MethodInfo _NimbusLookAndFeel$DefaultsListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusLookAndFeel$DefaultsListener::*)($NimbusLookAndFeel*)>(&NimbusLookAndFeel$DefaultsListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusLookAndFeel$DefaultsListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "DefaultsListener", $PRIVATE},
	{}
};

$ClassInfo _NimbusLookAndFeel$DefaultsListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_NimbusLookAndFeel$DefaultsListener_FieldInfo_,
	_NimbusLookAndFeel$DefaultsListener_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusLookAndFeel$DefaultsListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel"
};

$Object* allocate$NimbusLookAndFeel$DefaultsListener($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel$DefaultsListener));
}

void NimbusLookAndFeel$DefaultsListener::init$($NimbusLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void NimbusLookAndFeel$DefaultsListener::propertyChange($PropertyChangeEvent* ev) {
	$var($String, key, $nc(ev)->getPropertyName());
	if ("UIDefaults"_s->equals(key)) {
		$set(this->this$0, compiledDefaults, nullptr);
	} else {
		this->this$0->addDefault(key, $(ev->getNewValue()));
	}
}

NimbusLookAndFeel$DefaultsListener::NimbusLookAndFeel$DefaultsListener() {
}

$Class* NimbusLookAndFeel$DefaultsListener::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel$DefaultsListener, name, initialize, &_NimbusLookAndFeel$DefaultsListener_ClassInfo_, allocate$NimbusLookAndFeel$DefaultsListener);
	return class$;
}

$Class* NimbusLookAndFeel$DefaultsListener::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax