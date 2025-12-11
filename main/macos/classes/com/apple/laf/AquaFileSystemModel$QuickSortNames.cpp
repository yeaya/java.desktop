#include <com/apple/laf/AquaFileSystemModel$QuickSortNames.h>

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

$FieldInfo _AquaFileSystemModel$QuickSortNames_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$QuickSortNames, this$0)},
	{}
};

$MethodInfo _AquaFileSystemModel$QuickSortNames_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;)V", nullptr, 0, $method(static_cast<void(AquaFileSystemModel$QuickSortNames::*)($AquaFileSystemModel*)>(&AquaFileSystemModel$QuickSortNames::init$))},
	{"lt", "(Lcom/apple/laf/AquaFileSystemModel$SortableFile;Lcom/apple/laf/AquaFileSystemModel$SortableFile;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaFileSystemModel$QuickSortNames_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$QuickSortNames", "com.apple.laf.AquaFileSystemModel", "QuickSortNames", 0},
	{"com.apple.laf.AquaFileSystemModel$QuickSort", "com.apple.laf.AquaFileSystemModel", "QuickSort", $ABSTRACT},
	{}
};

$ClassInfo _AquaFileSystemModel$QuickSortNames_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel$QuickSortNames",
	"com.apple.laf.AquaFileSystemModel$QuickSort",
	nullptr,
	_AquaFileSystemModel$QuickSortNames_FieldInfo_,
	_AquaFileSystemModel$QuickSortNames_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$QuickSortNames_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$QuickSortNames($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$QuickSortNames));
}

void AquaFileSystemModel$QuickSortNames::init$($AquaFileSystemModel* this$0) {
	$set(this, this$0, this$0);
	$AquaFileSystemModel$QuickSort::init$(this$0);
}

bool AquaFileSystemModel$QuickSortNames::lt($AquaFileSystemModel$SortableFile* a, $AquaFileSystemModel$SortableFile* b) {
	$useLocalCurrentObjectStackCache();
	$var($String, aLower, $nc($nc(a)->fName)->toLowerCase());
	$var($String, bLower, $nc($nc(b)->fName)->toLowerCase());
	return aLower->compareTo(bLower) < 0;
}

AquaFileSystemModel$QuickSortNames::AquaFileSystemModel$QuickSortNames() {
}

$Class* AquaFileSystemModel$QuickSortNames::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$QuickSortNames, name, initialize, &_AquaFileSystemModel$QuickSortNames_ClassInfo_, allocate$AquaFileSystemModel$QuickSortNames);
	return class$;
}

$Class* AquaFileSystemModel$QuickSortNames::class$ = nullptr;

		} // laf
	} // apple
} // com