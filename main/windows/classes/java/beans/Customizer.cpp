#include <java/beans/Customizer.h>

#include <java/beans/PropertyChangeListener.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _Customizer_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Customizer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.Customizer",
	nullptr,
	nullptr,
	nullptr,
	_Customizer_MethodInfo_
};

$Object* allocate$Customizer($Class* clazz) {
	return $of($alloc(Customizer));
}

$Class* Customizer::load$($String* name, bool initialize) {
	$loadClass(Customizer, name, initialize, &_Customizer_ClassInfo_, allocate$Customizer);
	return class$;
}

$Class* Customizer::class$ = nullptr;

	} // beans
} // java