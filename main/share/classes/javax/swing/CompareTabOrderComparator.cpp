#include <javax/swing/CompareTabOrderComparator.h>

#include <java/awt/Component.h>
#include <javax/swing/DefaultFocusManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;

namespace javax {
	namespace swing {

$FieldInfo _CompareTabOrderComparator_FieldInfo_[] = {
	{"defaultFocusManager", "Ljavax/swing/DefaultFocusManager;", nullptr, $PRIVATE | $FINAL, $field(CompareTabOrderComparator, defaultFocusManager)},
	{}
};

$MethodInfo _CompareTabOrderComparator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultFocusManager;)V", nullptr, 0, $method(static_cast<void(CompareTabOrderComparator::*)($DefaultFocusManager*)>(&CompareTabOrderComparator::init$))},
	{"compare", "(Ljava/awt/Component;Ljava/awt/Component;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(CompareTabOrderComparator::*)($Component*,$Component*)>(&CompareTabOrderComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _CompareTabOrderComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.CompareTabOrderComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_CompareTabOrderComparator_FieldInfo_,
	_CompareTabOrderComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/Component;>;"
};

$Object* allocate$CompareTabOrderComparator($Class* clazz) {
	return $of($alloc(CompareTabOrderComparator));
}

void CompareTabOrderComparator::init$($DefaultFocusManager* defaultFocusManager) {
	$set(this, defaultFocusManager, defaultFocusManager);
}

int32_t CompareTabOrderComparator::compare($Component* o1, $Component* o2) {
	if (o1 == o2) {
		return 0;
	}
	return ($nc(this->defaultFocusManager)->compareTabOrder(o1, o2)) ? -1 : 1;
}

int32_t CompareTabOrderComparator::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Component, o1), $cast($Component, o2));
}

CompareTabOrderComparator::CompareTabOrderComparator() {
}

$Class* CompareTabOrderComparator::load$($String* name, bool initialize) {
	$loadClass(CompareTabOrderComparator, name, initialize, &_CompareTabOrderComparator_ClassInfo_, allocate$CompareTabOrderComparator);
	return class$;
}

$Class* CompareTabOrderComparator::class$ = nullptr;

	} // swing
} // javax