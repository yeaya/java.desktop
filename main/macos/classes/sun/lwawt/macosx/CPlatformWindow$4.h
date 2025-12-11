#ifndef _sun_lwawt_macosx_CPlatformWindow$4_h_
#define _sun_lwawt_macosx_CPlatformWindow$4_h_
//$ class sun.lwawt.macosx.CPlatformWindow$4
//$ extends com.apple.laf.ClientPropertyApplicator$Property

#include <com/apple/laf/ClientPropertyApplicator$Property.h>

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

class CPlatformWindow$4 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(CPlatformWindow$4, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	CPlatformWindow$4();
	void init$($String* name);
	virtual void applyProperty(::sun::lwawt::macosx::CPlatformWindow* c, Object$* value);
	virtual void applyProperty(Object$* c, Object$* value) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$4_h_