#ifndef _sun_awt_datatransfer_DataTransferer$1_h_
#define _sun_awt_datatransfer_DataTransferer$1_h_
//$ class sun.awt.datatransfer.DataTransferer$1
//$ extends java.awt.datatransfer.FlavorTable

#include <java/awt/datatransfer/FlavorTable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorMap;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class DataTransferer$1 : public ::java::awt::datatransfer::FlavorTable {
	$class(DataTransferer$1, $NO_CLASS_INIT, ::java::awt::datatransfer::FlavorTable)
public:
	DataTransferer$1();
	void init$(::java::awt::datatransfer::FlavorMap* val$map);
	virtual ::java::util::List* getFlavorsForNative($String* nat) override;
	virtual ::java::util::Map* getFlavorsForNatives($StringArray* natives) override;
	virtual ::java::util::List* getNativesForFlavor(::java::awt::datatransfer::DataFlavor* flav) override;
	virtual ::java::util::Map* getNativesForFlavors($Array<::java::awt::datatransfer::DataFlavor>* flavors) override;
	::java::awt::datatransfer::FlavorMap* val$map = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_DataTransferer$1_h_