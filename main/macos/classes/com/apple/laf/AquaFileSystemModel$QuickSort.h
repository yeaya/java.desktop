#ifndef _com_apple_laf_AquaFileSystemModel$QuickSort_h_
#define _com_apple_laf_AquaFileSystemModel$QuickSort_h_
//$ class com.apple.laf.AquaFileSystemModel$QuickSort
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel;
			class AquaFileSystemModel$SortableFile;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel$QuickSort : public ::java::lang::Object {
	$class(AquaFileSystemModel$QuickSort, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaFileSystemModel$QuickSort();
	void init$(::com::apple::laf::AquaFileSystemModel* this$0);
	virtual bool lt(::com::apple::laf::AquaFileSystemModel$SortableFile* a, ::com::apple::laf::AquaFileSystemModel$SortableFile* b) {return false;}
	void quickSort(::java::util::Vector* v, int32_t lo0, int32_t hi0);
	void swap(::java::util::Vector* a, int32_t i, int32_t j);
	::com::apple::laf::AquaFileSystemModel* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileSystemModel$QuickSort_h_