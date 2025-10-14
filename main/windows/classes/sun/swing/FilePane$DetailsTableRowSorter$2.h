#ifndef _sun_swing_FilePane$DetailsTableRowSorter$2_h_
#define _sun_swing_FilePane$DetailsTableRowSorter$2_h_
//$ class sun.swing.FilePane$DetailsTableRowSorter$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace swing {
		class FilePane$DetailsTableRowSorter;
	}
}

namespace sun {
	namespace swing {

class FilePane$DetailsTableRowSorter$2 : public ::java::util::concurrent::Callable {
	$class(FilePane$DetailsTableRowSorter$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	FilePane$DetailsTableRowSorter$2();
	void init$(::sun::swing::FilePane$DetailsTableRowSorter* this$1);
	virtual $Object* call() override;
	::sun::swing::FilePane$DetailsTableRowSorter* this$1 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableRowSorter$2_h_