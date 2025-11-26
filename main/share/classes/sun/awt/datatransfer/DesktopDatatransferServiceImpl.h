#ifndef _sun_awt_datatransfer_DesktopDatatransferServiceImpl_h_
#define _sun_awt_datatransfer_DesktopDatatransferServiceImpl_h_
//$ class sun.awt.datatransfer.DesktopDatatransferServiceImpl
//$ extends sun.datatransfer.DesktopDatatransferService

#include <sun/datatransfer/DesktopDatatransferService.h>

#pragma push_macro("FLAVOR_MAP_KEY")
#undef FLAVOR_MAP_KEY

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorMap;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class LinkedHashSet;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class DesktopDatatransferServiceImpl : public ::sun::datatransfer::DesktopDatatransferService {
	$class(DesktopDatatransferServiceImpl, 0, ::sun::datatransfer::DesktopDatatransferService)
public:
	DesktopDatatransferServiceImpl();
	void init$();
	virtual $String* getDefaultUnicodeEncoding() override;
	virtual ::java::awt::datatransfer::FlavorMap* getFlavorMap(::java::util::function::Supplier* supplier) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForFlavor(::java::awt::datatransfer::DataFlavor* df) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForNative($String* nat) override;
	virtual void invokeOnEventThread(::java::lang::Runnable* r) override;
	virtual bool isDesktopPresent() override;
	virtual void registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) override;
	static $Object* FLAVOR_MAP_KEY;
};

		} // datatransfer
	} // awt
} // sun

#pragma pop_macro("FLAVOR_MAP_KEY")

#endif // _sun_awt_datatransfer_DesktopDatatransferServiceImpl_h_