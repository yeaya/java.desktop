#ifndef _com_apple_laf_AquaFileSystemModel$QuickSortDates_h_
#define _com_apple_laf_AquaFileSystemModel$QuickSortDates_h_
//$ class com.apple.laf.AquaFileSystemModel$QuickSortDates
//$ extends com.apple.laf.AquaFileSystemModel$QuickSort

#include <com/apple/laf/AquaFileSystemModel$QuickSort.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel;
			class AquaFileSystemModel$SortableFile;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel$QuickSortDates : public ::com::apple::laf::AquaFileSystemModel$QuickSort {
	$class(AquaFileSystemModel$QuickSortDates, $NO_CLASS_INIT, ::com::apple::laf::AquaFileSystemModel$QuickSort)
public:
	AquaFileSystemModel$QuickSortDates();
	void init$(::com::apple::laf::AquaFileSystemModel* this$0);
	virtual bool lt(::com::apple::laf::AquaFileSystemModel$SortableFile* a, ::com::apple::laf::AquaFileSystemModel$SortableFile* b) override;
	::com::apple::laf::AquaFileSystemModel* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileSystemModel$QuickSortDates_h_