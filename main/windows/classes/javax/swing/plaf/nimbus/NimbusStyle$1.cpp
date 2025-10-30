#include <javax/swing/plaf/nimbus/NimbusStyle$1.h>

#include <javax/swing/plaf/nimbus/NimbusStyle$RuntimeState.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $NimbusStyle$RuntimeState = ::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _NimbusStyle$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NimbusStyle$1::*)()>(&NimbusStyle$1::init$))},
	{"compare", "(Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _NimbusStyle$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.nimbus.NimbusStyle",
	nullptr,
	nullptr
};

$InnerClassInfo _NimbusStyle$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusStyle$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.nimbus.NimbusStyle$RuntimeState", "javax.swing.plaf.nimbus.NimbusStyle", "RuntimeState", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _NimbusStyle$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusStyle$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_NimbusStyle$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;>;",
	&_NimbusStyle$1_EnclosingMethodInfo_,
	_NimbusStyle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusStyle"
};

$Object* allocate$NimbusStyle$1($Class* clazz) {
	return $of($alloc(NimbusStyle$1));
}

void NimbusStyle$1::init$() {
}

int32_t NimbusStyle$1::compare($NimbusStyle$RuntimeState* a, $NimbusStyle$RuntimeState* b) {
	return $nc(a)->state - $nc(b)->state;
}

int32_t NimbusStyle$1::compare(Object$* a, Object$* b) {
	return this->compare($cast($NimbusStyle$RuntimeState, a), $cast($NimbusStyle$RuntimeState, b));
}

NimbusStyle$1::NimbusStyle$1() {
}

$Class* NimbusStyle$1::load$($String* name, bool initialize) {
	$loadClass(NimbusStyle$1, name, initialize, &_NimbusStyle$1_ClassInfo_, allocate$NimbusStyle$1);
	return class$;
}

$Class* NimbusStyle$1::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax