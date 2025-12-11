#ifndef _sun_lwawt_macosx_CPlatformWindow$9_h_
#define _sun_lwawt_macosx_CPlatformWindow$9_h_
//$ class sun.lwawt.macosx.CPlatformWindow$9
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

class CPlatformWindow$9 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(CPlatformWindow$9, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	CPlatformWindow$9();
	void init$($String* name);
	virtual void applyProperty(::sun::lwawt::macosx::CPlatformWindow* c, Object$* value);
	virtual void applyProperty(Object$* c, Object$* value) override;
	static void lambda$applyProperty$0(int64_t ptr);
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$9_h_