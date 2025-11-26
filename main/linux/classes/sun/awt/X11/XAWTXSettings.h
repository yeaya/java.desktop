#ifndef _sun_awt_X11_XAWTXSettings_h_
#define _sun_awt_X11_XAWTXSettings_h_
//$ class sun.awt.X11.XAWTXSettings
//$ extends sun.awt.XSettings
//$ implements sun.awt.X11.XMSelectionListener

#include <sun/awt/X11/XMSelectionListener.h>
#include <sun/awt/XSettings.h>

#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XMSelection;
			class XPropertyEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAWTXSettings : public ::sun::awt::XSettings, public ::sun::awt::X11::XMSelectionListener {
	$class(XAWTXSettings, 0, ::sun::awt::XSettings, ::sun::awt::X11::XMSelectionListener)
public:
	XAWTXSettings();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dispose();
	::java::util::Map* getUpdatedSettings(int64_t owner);
	virtual void initPerScreenXSettings();
	virtual void initXSettings();
	virtual void ownerChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t newOwner, int64_t data, int64_t timestamp) override;
	virtual void ownerDeath(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t deadOwner) override;
	virtual void selectionChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t owner, ::sun::awt::X11::XPropertyEvent* event) override;
	virtual $String* toString() override;
	void updateXSettings(int32_t screen, int64_t owner);
	::sun::awt::X11::XAtom* xSettingsPropertyAtom = nullptr;
	static ::sun::util::logging::PlatformLogger* log;
	static const int64_t MAX_LENGTH = 0x000F4240;
	::sun::awt::X11::XMSelection* settings = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MAX_LENGTH")

#endif // _sun_awt_X11_XAWTXSettings_h_