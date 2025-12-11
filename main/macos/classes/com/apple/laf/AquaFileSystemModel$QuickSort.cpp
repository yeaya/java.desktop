#include <com/apple/laf/AquaFileSystemModel$QuickSort.h>

#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef T

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel$QuickSort_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$QuickSort, this$0)},
	{}
};

$MethodInfo _AquaFileSystemModel$QuickSort_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;)V", nullptr, 0, $method(static_cast<void(AquaFileSystemModel$QuickSort::*)($AquaFileSystemModel*)>(&AquaFileSystemModel$QuickSort::init$))},
	{"lt", "(Lcom/apple/laf/AquaFileSystemModel$SortableFile;Lcom/apple/laf/AquaFileSystemModel$SortableFile;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"quickSort", "(Ljava/util/Vector;II)V", "(Ljava/util/Vector<Ljava/lang/Object;>;II)V", $FINAL, $method(static_cast<void(AquaFileSystemModel$QuickSort::*)($Vector*,int32_t,int32_t)>(&AquaFileSystemModel$QuickSort::quickSort))},
	{"swap", "(Ljava/util/Vector;II)V", "(Ljava/util/Vector<Ljava/lang/Object;>;II)V", $PRIVATE, $method(static_cast<void(AquaFileSystemModel$QuickSort::*)($Vector*,int32_t,int32_t)>(&AquaFileSystemModel$QuickSort::swap))},
	{}
};

$InnerClassInfo _AquaFileSystemModel$QuickSort_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$QuickSort", "com.apple.laf.AquaFileSystemModel", "QuickSort", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileSystemModel$QuickSort_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaFileSystemModel$QuickSort",
	"java.lang.Object",
	nullptr,
	_AquaFileSystemModel$QuickSort_FieldInfo_,
	_AquaFileSystemModel$QuickSort_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$QuickSort_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$QuickSort($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$QuickSort));
}

void AquaFileSystemModel$QuickSort::init$($AquaFileSystemModel* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileSystemModel$QuickSort::quickSort($Vector* v, int32_t lo0, int32_t hi0) {
	$useLocalCurrentObjectStackCache();
	int32_t lo = lo0;
	int32_t hi = hi0;
	$var($AquaFileSystemModel$SortableFile, mid, nullptr);
	if (hi0 > lo0) {
		$assign(mid, $cast($AquaFileSystemModel$SortableFile, $nc(v)->elementAt((lo0 + hi0) / 2)));
		while (lo <= hi) {
			while ((lo < hi0) && lt($cast($AquaFileSystemModel$SortableFile, $(v->elementAt(lo))), mid)) {
				++lo;
			}
			while ((hi > lo0) && lt(mid, $cast($AquaFileSystemModel$SortableFile, $(v->elementAt(hi))))) {
				--hi;
			}
			if (lo <= hi) {
				swap(v, lo, hi);
				++lo;
				--hi;
			}
		}
		if (lo0 < hi) {
			quickSort(v, lo0, hi);
		}
		if (lo < hi0) {
			quickSort(v, lo, hi0);
		}
	}
}

void AquaFileSystemModel$QuickSort::swap($Vector* a, int32_t i, int32_t j) {
	$useLocalCurrentObjectStackCache();
	$var($Object, T, $nc(a)->elementAt(i));
	a->setElementAt($(a->elementAt(j)), i);
	a->setElementAt(T, j);
}

AquaFileSystemModel$QuickSort::AquaFileSystemModel$QuickSort() {
}

$Class* AquaFileSystemModel$QuickSort::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$QuickSort, name, initialize, &_AquaFileSystemModel$QuickSort_ClassInfo_, allocate$AquaFileSystemModel$QuickSort);
	return class$;
}

$Class* AquaFileSystemModel$QuickSort::class$ = nullptr;

		} // laf
	} // apple
} // com