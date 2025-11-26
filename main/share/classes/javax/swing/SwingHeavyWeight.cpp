#include <javax/swing/SwingHeavyWeight.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {

$ClassInfo _SwingHeavyWeight_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.SwingHeavyWeight"
};

$Object* allocate$SwingHeavyWeight($Class* clazz) {
	return $of($alloc(SwingHeavyWeight));
}

$Class* SwingHeavyWeight::load$($String* name, bool initialize) {
	$loadClass(SwingHeavyWeight, name, initialize, &_SwingHeavyWeight_ClassInfo_, allocate$SwingHeavyWeight);
	return class$;
}

$Class* SwingHeavyWeight::class$ = nullptr;

	} // swing
} // javax