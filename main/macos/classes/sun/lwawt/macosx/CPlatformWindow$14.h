#ifndef _sun_lwawt_macosx_CPlatformWindow$14_h_
#define _sun_lwawt_macosx_CPlatformWindow$14_h_
//$ class sun.lwawt.macosx.CPlatformWindow$14
//$ extends com.apple.laf.ClientPropertyApplicator

#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class ClientPropertyApplicator$Property;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JRootPane;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPlatformWindow;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$14 : public ::com::apple::laf::ClientPropertyApplicator {
	$class(CPlatformWindow$14, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator)
public:
	CPlatformWindow$14();
	void init$($Array<::com::apple::laf::ClientPropertyApplicator$Property>* propertyList);
	virtual ::sun::lwawt::macosx::CPlatformWindow* convertJComponentToTarget(::javax::swing::JRootPane* p);
	virtual $Object* convertJComponentToTarget(::javax::swing::JComponent* p) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$14_h_