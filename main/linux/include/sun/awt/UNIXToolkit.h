#ifndef _sun_awt_UNIXToolkit_h_
#define _sun_awt_UNIXToolkit_h_
//$ class sun.awt.UNIXToolkit
//$ extends sun.awt.SunToolkit

#include <java/lang/Array.h>
#include <sun/awt/SunToolkit.h>

#pragma push_macro("BAND_OFFSETS")
#undef BAND_OFFSETS
#pragma push_macro("BAND_OFFSETS_ALPHA")
#undef BAND_OFFSETS_ALPHA
#pragma push_macro("DEFAULT_DATATRANSFER_TIMEOUT")
#undef DEFAULT_DATATRANSFER_TIMEOUT
#pragma push_macro("FONTCONFIGAAHINT")
#undef FONTCONFIGAAHINT
#pragma push_macro("GTK_LOCK")
#undef GTK_LOCK

namespace java {
	namespace awt {
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace sun {
	namespace awt {
		class UNIXToolkit$GtkVersions;
	}
}

namespace sun {
	namespace awt {

class $import UNIXToolkit : public ::sun::awt::SunToolkit {
	$class(UNIXToolkit, 0, ::sun::awt::SunToolkit)
public:
	UNIXToolkit();
	using ::sun::awt::SunToolkit::createImage;
	void init$();
	virtual bool checkGtkVersion(int32_t major, int32_t minor, int32_t micro);
	static bool check_gtk(int32_t version);
	static int32_t getDatatransferTimeout();
	virtual $String* getDesktop() override;
	virtual ::java::awt::RenderingHints* getDesktopAAHints() override;
	static ::sun::awt::UNIXToolkit$GtkVersions* getEnabledGtkVersion();
	virtual ::java::awt::image::BufferedImage* getGTKIcon($String* filename);
	static ::sun::awt::UNIXToolkit$GtkVersions* getGtkVersion();
	virtual ::java::awt::image::BufferedImage* getStockIcon(int32_t widgetType, $String* stockId, int32_t iconSize, int32_t direction, $String* detail);
	static int32_t get_gtk_version();
	bool gtkCheckVersionImpl(int32_t major, int32_t minor, int32_t micro);
	static bool isGtkVerbose();
	virtual bool isNativeGTKAvailable() override;
	static $String* lambda$getDesktop$0();
	static $String* lambda$getDesktop$1();
	static ::java::lang::Boolean* lambda$isGtkVerbose$2();
	virtual $Object* lazilyLoadDesktopProperty($String* name) override;
	virtual $Object* lazilyLoadGTKIcon($String* longname);
	virtual bool loadGTK();
	virtual void loadIconCallback($bytes* data, int32_t width, int32_t height, int32_t rowStride, int32_t bps, int32_t channels, bool alpha);
	static bool load_gtk(int32_t version, bool verbose);
	bool load_gtk_icon($String* filename);
	bool load_stock_icon(int32_t widget_type, $String* stock_id, int32_t iconSize, int32_t textDirection, $String* detail);
	void nativeSync();
	virtual void sync() override;
	static bool unload_gtk();
	static $Object* GTK_LOCK;
	static $ints* BAND_OFFSETS;
	static $ints* BAND_OFFSETS_ALPHA;
	static const int32_t DEFAULT_DATATRANSFER_TIMEOUT = 10000;
	::java::lang::Boolean* nativeGTKAvailable = nullptr;
	::java::lang::Boolean* nativeGTKLoaded = nullptr;
	::java::awt::image::BufferedImage* tmpImage = nullptr;
	static $String* FONTCONFIGAAHINT;
};

	} // awt
} // sun

#pragma pop_macro("BAND_OFFSETS")
#pragma pop_macro("BAND_OFFSETS_ALPHA")
#pragma pop_macro("DEFAULT_DATATRANSFER_TIMEOUT")
#pragma pop_macro("FONTCONFIGAAHINT")
#pragma pop_macro("GTK_LOCK")

#endif // _sun_awt_UNIXToolkit_h_