#ifndef _sun_lwawt_macosx_CPlatformWindow$10_h_
#define _sun_lwawt_macosx_CPlatformWindow$10_h_
//$ class sun.lwawt.macosx.CPlatformWindow$10
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

class CPlatformWindow$10 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(CPlatformWindow$10, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	CPlatformWindow$10();
	void init$($String* name);
	virtual void applyProperty(::sun::lwawt::macosx::CPlatformWindow* c, Object$* value);
	virtual void applyProperty(Object$* c, Object$* value) override;
	static void lambda$applyProperty$0(int64_t ptr);
	static void lambda$applyProperty$1($String* filename, int64_t ptr);
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$10_h_