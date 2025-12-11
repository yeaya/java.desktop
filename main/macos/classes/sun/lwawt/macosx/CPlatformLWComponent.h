#ifndef _sun_lwawt_macosx_CPlatformLWComponent_h_
#define _sun_lwawt_macosx_CPlatformLWComponent_h_
//$ class sun.lwawt.macosx.CPlatformLWComponent
//$ extends sun.lwawt.macosx.CPlatformComponent

#include <sun/lwawt/macosx/CPlatformComponent.h>

namespace sun {
	namespace lwawt {
		class PlatformWindow;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformLWComponent : public ::sun::lwawt::macosx::CPlatformComponent {
	$class(CPlatformLWComponent, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPlatformComponent)
public:
	CPlatformLWComponent();
	void init$();
	virtual void dispose() override;
	virtual int64_t getPointer() override;
	virtual void initialize(::sun::lwawt::PlatformWindow* platformWindow) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformLWComponent_h_