#include <javax/swing/BoundedRangeModel.h>

#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _BoundedRangeModel_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getExtent", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaximum", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimum", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setExtent", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMaximum", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMinimum", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRangeProperties", "(IIIIZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BoundedRangeModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.BoundedRangeModel",
	nullptr,
	nullptr,
	nullptr,
	_BoundedRangeModel_MethodInfo_
};

$Object* allocate$BoundedRangeModel($Class* clazz) {
	return $of($alloc(BoundedRangeModel));
}

$Class* BoundedRangeModel::load$($String* name, bool initialize) {
	$loadClass(BoundedRangeModel, name, initialize, &_BoundedRangeModel_ClassInfo_, allocate$BoundedRangeModel);
	return class$;
}

$Class* BoundedRangeModel::class$ = nullptr;

	} // swing
} // javax