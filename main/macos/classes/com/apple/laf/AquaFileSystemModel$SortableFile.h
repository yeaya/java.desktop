#ifndef _com_apple_laf_AquaFileSystemModel$SortableFile_h_
#define _com_apple_laf_AquaFileSystemModel$SortableFile_h_
//$ class com.apple.laf.AquaFileSystemModel$SortableFile
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel$SortableFile : public ::java::lang::Object {
	$class(AquaFileSystemModel$SortableFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaFileSystemModel$SortableFile();
	void init$(::com::apple::laf::AquaFileSystemModel* this$0, ::java::io::File* f);
	virtual bool equals(Object$* other) override;
	virtual $Object* getValueAt(int32_t col);
	virtual int32_t hashCode() override;
	::com::apple::laf::AquaFileSystemModel* this$0 = nullptr;
	::java::io::File* fFile = nullptr;
	$String* fName = nullptr;
	int64_t fDateValue = 0;
	::java::util::Date* fDate = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileSystemModel$SortableFile_h_