#include <java/awt/Adjustable.h>

#include <java/awt/event/AdjustmentListener.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef NO_ORIENTATION
#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Adjustable_FieldInfo_[] = {
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, VERTICAL)},
	{"NO_ORIENTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, NO_ORIENTATION)},
	{}
};

$MethodInfo _Adjustable_MethodInfo_[] = {
	{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBlockIncrement", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaximum", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimum", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getOrientation", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnitIncrement", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVisibleAmount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBlockIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMaximum", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMinimum", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setUnitIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisibleAmount", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Adjustable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Adjustable",
	nullptr,
	nullptr,
	_Adjustable_FieldInfo_,
	_Adjustable_MethodInfo_
};

$Object* allocate$Adjustable($Class* clazz) {
	return $of($alloc(Adjustable));
}

$Class* Adjustable::load$($String* name, bool initialize) {
	$loadClass(Adjustable, name, initialize, &_Adjustable_ClassInfo_, allocate$Adjustable);
	return class$;
}

$Class* Adjustable::class$ = nullptr;

	} // awt
} // java