#ifndef _sun_swing_FilePane$DirectoriesFirstComparatorWrapper_h_
#define _sun_swing_FilePane$DirectoriesFirstComparatorWrapper_h_
//$ class sun.swing.FilePane$DirectoriesFirstComparatorWrapper
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$DirectoriesFirstComparatorWrapper : public ::java::util::Comparator {
	$class(FilePane$DirectoriesFirstComparatorWrapper, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	FilePane$DirectoriesFirstComparatorWrapper();
	void init$(::sun::swing::FilePane* this$0, int32_t column, ::java::util::Comparator* comparator);
	virtual int32_t compare(::java::io::File* f1, ::java::io::File* f2);
	virtual int32_t compare(Object$* f1, Object$* f2) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::java::util::Comparator* comparator = nullptr;
	int32_t column = 0;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DirectoriesFirstComparatorWrapper_h_