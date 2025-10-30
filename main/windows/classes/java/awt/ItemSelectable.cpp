#include <java/awt/ItemSelectable.h>

#include <java/awt/event/ItemListener.h>
#include <jcpp.h>

using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _ItemSelectable_MethodInfo_[] = {
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ItemSelectable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.ItemSelectable",
	nullptr,
	nullptr,
	nullptr,
	_ItemSelectable_MethodInfo_
};

$Object* allocate$ItemSelectable($Class* clazz) {
	return $of($alloc(ItemSelectable));
}

$Class* ItemSelectable::load$($String* name, bool initialize) {
	$loadClass(ItemSelectable, name, initialize, &_ItemSelectable_ClassInfo_, allocate$ItemSelectable);
	return class$;
}

$Class* ItemSelectable::class$ = nullptr;

	} // awt
} // java