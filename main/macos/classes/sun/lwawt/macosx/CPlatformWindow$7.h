#ifndef _sun_lwawt_macosx_CPlatformWindow$7_h_
#define _sun_lwawt_macosx_CPlatformWindow$7_h_
//$ class sun.lwawt.macosx.CPlatformWindow$7
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

class CPlatformWindow$7 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(CPlatformWindow$7, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	CPlatformWindow$7();
	void init$($String* name);
	virtual void applyProperty(::sun::lwawt::macosx::CPlatformWindow* c, Object$* value);
	virtual void applyProperty(Object$* c, Object$* value) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$7_h_