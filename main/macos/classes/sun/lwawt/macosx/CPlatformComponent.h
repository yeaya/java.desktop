#ifndef _sun_lwawt_macosx_CPlatformComponent_h_
#define _sun_lwawt_macosx_CPlatformComponent_h_
//$ class sun.lwawt.macosx.CPlatformComponent
//$ extends sun.lwawt.macosx.CFRetainedResource
//$ implements sun.lwawt.PlatformComponent

#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class Insets;
	}
}
namespace sun {
	namespace lwawt {
		class PlatformWindow;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformComponent : public ::sun::lwawt::macosx::CFRetainedResource, public ::sun::lwawt::PlatformComponent {
	$class(CPlatformComponent, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFRetainedResource, ::sun::lwawt::PlatformComponent)
public:
	CPlatformComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dispose() override;
	virtual int64_t getPointer();
	virtual void initialize(::sun::lwawt::PlatformWindow* platformWindow) override;
	void lambda$setBounds$0(int32_t x, ::java::awt::Insets* insets, int32_t y, int32_t w, int32_t h, int64_t ptr);
	int64_t nativeCreateComponent(int64_t windowLayer);
	void nativeSetBounds(int64_t ptr, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	$volatile(::sun::lwawt::PlatformWindow*) platformWindow = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformComponent_h_