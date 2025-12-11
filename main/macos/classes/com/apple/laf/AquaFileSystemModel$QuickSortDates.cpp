#include <com/apple/laf/AquaFileSystemModel$QuickSortDates.h>

#include <com/apple/laf/AquaFileSystemModel$QuickSort.h>
#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$QuickSort = ::com::apple::laf::AquaFileSystemModel$QuickSort;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel$QuickSortDates_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$QuickSortDates, this$0)},
	{}
};

$MethodInfo _AquaFileSystemModel$QuickSortDates_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;)V", nullptr, 0, $method(static_cast<void(AquaFileSystemModel$QuickSortDates::*)($AquaFileSystemModel*)>(&AquaFileSystemModel$QuickSortDates::init$))},
	{"lt", "(Lcom/apple/laf/AquaFileSystemModel$SortableFile;Lcom/apple/laf/AquaFileSystemModel$SortableFile;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaFileSystemModel$QuickSortDates_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$QuickSortDates", "com.apple.laf.AquaFileSystemModel", "QuickSortDates", 0},
	{"com.apple.laf.AquaFileSystemModel$QuickSort", "com.apple.laf.AquaFileSystemModel", "QuickSort", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileSystemModel$QuickSortDates_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel$QuickSortDates",
	"com.apple.laf.AquaFileSystemModel$QuickSort",
	nullptr,
	_AquaFileSystemModel$QuickSortDates_FieldInfo_,
	_AquaFileSystemModel$QuickSortDates_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$QuickSortDates_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$QuickSortDates($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$QuickSortDates));
}

void AquaFileSystemModel$QuickSortDates::init$($AquaFileSystemModel* this$0) {
	$set(this, this$0, this$0);
	$AquaFileSystemModel$QuickSort::init$(this$0);
}

bool AquaFileSystemModel$QuickSortDates::lt($AquaFileSystemModel$SortableFile* a, $AquaFileSystemModel$SortableFile* b) {
	return $nc(a)->fDateValue < $nc(b)->fDateValue;
}

AquaFileSystemModel$QuickSortDates::AquaFileSystemModel$QuickSortDates() {
}

$Class* AquaFileSystemModel$QuickSortDates::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$QuickSortDates, name, initialize, &_AquaFileSystemModel$QuickSortDates_ClassInfo_, allocate$AquaFileSystemModel$QuickSortDates);
	return class$;
}

$Class* AquaFileSystemModel$QuickSortDates::class$ = nullptr;

		} // laf
	} // apple
} // com