#include <sun/awt/UNIXToolkit.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants$TextDirection.h>
#include <java/awt/Point.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/security/action/GetIntegerAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ANY
#undef BAND_OFFSETS
#undef BAND_OFFSETS_ALPHA
#undef DEFAULT_DATATRANSFER_TIMEOUT
#undef FONTCONFIGAAHINT
#undef GTK2
#undef GTK3
#undef GTK_LOCK
#undef KEY_TEXT_ANTIALIASING
#undef LTR
#undef RTL
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_ON

using $GTKConstants$TextDirection = ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection;
using $Point = ::java::awt::Point;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Toolkit = ::java::awt::Toolkit;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit$GtkVersions = ::sun::awt::UNIXToolkit$GtkVersions;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {

class UNIXToolkit$$Lambda$lambda$getDesktop$0 : public $PrivilegedAction {
	$class(UNIXToolkit$$Lambda$lambda$getDesktop$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(UNIXToolkit::lambda$getDesktop$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UNIXToolkit$$Lambda$lambda$getDesktop$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UNIXToolkit$$Lambda$lambda$getDesktop$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UNIXToolkit$$Lambda$lambda$getDesktop$0::*)()>(&UNIXToolkit$$Lambda$lambda$getDesktop$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UNIXToolkit$$Lambda$lambda$getDesktop$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.UNIXToolkit$$Lambda$lambda$getDesktop$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* UNIXToolkit$$Lambda$lambda$getDesktop$0::load$($String* name, bool initialize) {
	$loadClass(UNIXToolkit$$Lambda$lambda$getDesktop$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UNIXToolkit$$Lambda$lambda$getDesktop$0::class$ = nullptr;

class UNIXToolkit$$Lambda$lambda$getDesktop$1$1 : public $PrivilegedAction {
	$class(UNIXToolkit$$Lambda$lambda$getDesktop$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(UNIXToolkit::lambda$getDesktop$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UNIXToolkit$$Lambda$lambda$getDesktop$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UNIXToolkit$$Lambda$lambda$getDesktop$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UNIXToolkit$$Lambda$lambda$getDesktop$1$1::*)()>(&UNIXToolkit$$Lambda$lambda$getDesktop$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UNIXToolkit$$Lambda$lambda$getDesktop$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.UNIXToolkit$$Lambda$lambda$getDesktop$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* UNIXToolkit$$Lambda$lambda$getDesktop$1$1::load$($String* name, bool initialize) {
	$loadClass(UNIXToolkit$$Lambda$lambda$getDesktop$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UNIXToolkit$$Lambda$lambda$getDesktop$1$1::class$ = nullptr;

class UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2 : public $PrivilegedAction {
	$class(UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(UNIXToolkit::lambda$isGtkVerbose$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::*)()>(&UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::load$($String* name, bool initialize) {
	$loadClass(UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::class$ = nullptr;

$FieldInfo _UNIXToolkit_FieldInfo_[] = {
	{"GTK_LOCK", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UNIXToolkit, GTK_LOCK)},
	{"BAND_OFFSETS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UNIXToolkit, BAND_OFFSETS)},
	{"BAND_OFFSETS_ALPHA", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UNIXToolkit, BAND_OFFSETS_ALPHA)},
	{"DEFAULT_DATATRANSFER_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UNIXToolkit, DEFAULT_DATATRANSFER_TIMEOUT)},
	{"nativeGTKAvailable", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(UNIXToolkit, nativeGTKAvailable)},
	{"nativeGTKLoaded", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(UNIXToolkit, nativeGTKLoaded)},
	{"tmpImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(UNIXToolkit, tmpImage)},
	{"FONTCONFIGAAHINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UNIXToolkit, FONTCONFIGAAHINT)},
	{}
};

$MethodInfo _UNIXToolkit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UNIXToolkit::*)()>(&UNIXToolkit::init$))},
	{"checkGtkVersion", "(III)Z", nullptr, $PUBLIC},
	{"check_gtk", "(I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t)>(&UNIXToolkit::check_gtk))},
	{"getDatatransferTimeout", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&UNIXToolkit::getDatatransferTimeout))},
	{"getDesktop", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDesktopAAHints", "()Ljava/awt/RenderingHints;", nullptr, $PROTECTED},
	{"getEnabledGtkVersion", "()Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UNIXToolkit$GtkVersions*(*)()>(&UNIXToolkit::getEnabledGtkVersion))},
	{"getGTKIcon", "(Ljava/lang/String;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getGtkVersion", "()Lsun/awt/UNIXToolkit$GtkVersions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UNIXToolkit$GtkVersions*(*)()>(&UNIXToolkit::getGtkVersion))},
	{"getStockIcon", "(ILjava/lang/String;IILjava/lang/String;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"get_gtk_version", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&UNIXToolkit::get_gtk_version))},
	{"gtkCheckVersionImpl", "(III)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(UNIXToolkit::*)(int32_t,int32_t,int32_t)>(&UNIXToolkit::gtkCheckVersionImpl))},
	{"isGtkVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&UNIXToolkit::isGtkVerbose))},
	{"isNativeGTKAvailable", "()Z", nullptr, $PUBLIC},
	{"lambda$getDesktop$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&UNIXToolkit::lambda$getDesktop$0))},
	{"lambda$getDesktop$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&UNIXToolkit::lambda$getDesktop$1))},
	{"lambda$isGtkVerbose$2", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&UNIXToolkit::lambda$isGtkVerbose$2))},
	{"lazilyLoadDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"lazilyLoadGTKIcon", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"loadGTK", "()Z", nullptr, $PUBLIC},
	{"loadIconCallback", "([BIIIIIZ)V", nullptr, $PUBLIC},
	{"load_gtk", "(IZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t,bool)>(&UNIXToolkit::load_gtk))},
	{"load_gtk_icon", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(UNIXToolkit::*)($String*)>(&UNIXToolkit::load_gtk_icon))},
	{"load_stock_icon", "(ILjava/lang/String;IILjava/lang/String;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(UNIXToolkit::*)(int32_t,$String*,int32_t,int32_t,$String*)>(&UNIXToolkit::load_stock_icon))},
	{"nativeSync", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(UNIXToolkit::*)()>(&UNIXToolkit::nativeSync))},
	{"sync", "()V", nullptr, $PUBLIC},
	{"unload_gtk", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&UNIXToolkit::unload_gtk))},
	{}
};

#define _METHOD_INDEX_check_gtk 2
#define _METHOD_INDEX_get_gtk_version 10
#define _METHOD_INDEX_gtkCheckVersionImpl 11
#define _METHOD_INDEX_load_gtk 21
#define _METHOD_INDEX_load_gtk_icon 22
#define _METHOD_INDEX_load_stock_icon 23
#define _METHOD_INDEX_nativeSync 24
#define _METHOD_INDEX_unload_gtk 26

$InnerClassInfo _UNIXToolkit_InnerClassesInfo_[] = {
	{"sun.awt.UNIXToolkit$GtkVersions", "sun.awt.UNIXToolkit", "GtkVersions", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UNIXToolkit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.UNIXToolkit",
	"sun.awt.SunToolkit",
	nullptr,
	_UNIXToolkit_FieldInfo_,
	_UNIXToolkit_MethodInfo_,
	nullptr,
	nullptr,
	_UNIXToolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.UNIXToolkit$GtkVersions,sun.awt.UNIXToolkit$GtkVersions$Constants"
};

$Object* allocate$UNIXToolkit($Class* clazz) {
	return $of($alloc(UNIXToolkit));
}

$Object* UNIXToolkit::GTK_LOCK = nullptr;
$ints* UNIXToolkit::BAND_OFFSETS = nullptr;
$ints* UNIXToolkit::BAND_OFFSETS_ALPHA = nullptr;
$String* UNIXToolkit::FONTCONFIGAAHINT = nullptr;

void UNIXToolkit::init$() {
	$SunToolkit::init$();
	$set(this, tmpImage, nullptr);
}

int32_t UNIXToolkit::getDatatransferTimeout() {
	$init(UNIXToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Integer, dt, $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetIntegerAction, "sun.awt.datatransfer.timeout"_s)))));
	if (dt == nullptr || $nc(dt)->intValue() <= 0) {
		return UNIXToolkit::DEFAULT_DATATRANSFER_TIMEOUT;
	} else {
		return dt->intValue();
	}
}

$String* UNIXToolkit::getDesktop() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, gnome, "gnome"_s);
	$var($String, gsi, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(UNIXToolkit$$Lambda$lambda$getDesktop$0)))));
	if (gsi != nullptr) {
		return gnome;
	}
	$var($String, desktop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(UNIXToolkit$$Lambda$lambda$getDesktop$1$1)))));
	return (desktop != nullptr && $(desktop->toLowerCase())->contains(gnome)) ? gnome : ($String*)nullptr;
}

bool UNIXToolkit::isNativeGTKAvailable() {
	$synchronized(UNIXToolkit::GTK_LOCK) {
		if (this->nativeGTKLoaded != nullptr) {
			return $nc(this->nativeGTKLoaded)->booleanValue();
		} else if (this->nativeGTKAvailable != nullptr) {
			return $nc(this->nativeGTKAvailable)->booleanValue();
		} else {
			bool success = check_gtk($nc($(getEnabledGtkVersion()))->getNumber());
			$set(this, nativeGTKAvailable, $Boolean::valueOf(success));
			return success;
		}
	}
}

bool UNIXToolkit::loadGTK() {
	$synchronized(UNIXToolkit::GTK_LOCK) {
		if (this->nativeGTKLoaded == nullptr) {
			int32_t var$0 = $nc($(getEnabledGtkVersion()))->getNumber();
			$set(this, nativeGTKLoaded, $Boolean::valueOf(load_gtk(var$0, isGtkVerbose())));
		}
	}
	return $nc(this->nativeGTKLoaded)->booleanValue();
}

$Object* UNIXToolkit::lazilyLoadDesktopProperty($String* name) {
	if ($nc(name)->startsWith("gtk.icon."_s)) {
		return $of(lazilyLoadGTKIcon(name));
	}
	return $of($SunToolkit::lazilyLoadDesktopProperty(name));
}

$Object* UNIXToolkit::lazilyLoadGTKIcon($String* longname) {
	$useLocalCurrentObjectStackCache();
	$var($Object, result, $nc(this->desktopProperties)->get(longname));
	if (result != nullptr) {
		return $of(result);
	}
	$var($StringArray, str, $nc(longname)->split("\\."_s));
	if (str->length != 5) {
		return $of(nullptr);
	}
	int32_t size = 0;
	try {
		size = $Integer::parseInt(str->get(3));
	} catch ($NumberFormatException& nfe) {
		return $of(nullptr);
	}
	$init($GTKConstants$TextDirection);
	$GTKConstants$TextDirection* dir = ("ltr"_s->equals(str->get(4)) ? $GTKConstants$TextDirection::LTR : $GTKConstants$TextDirection::RTL);
	$var($BufferedImage, img, getStockIcon(-1, str->get(2), size, $nc(dir)->ordinal(), nullptr));
	if (img != nullptr) {
		setDesktopProperty(longname, img);
	}
	return $of(img);
}

$BufferedImage* UNIXToolkit::getGTKIcon($String* filename) {
	if (!loadGTK()) {
		return nullptr;
	} else {
		$synchronized(UNIXToolkit::GTK_LOCK) {
			if (!load_gtk_icon(filename)) {
				$set(this, tmpImage, nullptr);
			}
		}
	}
	return this->tmpImage;
}

$BufferedImage* UNIXToolkit::getStockIcon(int32_t widgetType, $String* stockId, int32_t iconSize, int32_t direction, $String* detail) {
	if (!loadGTK()) {
		return nullptr;
	} else {
		$synchronized(UNIXToolkit::GTK_LOCK) {
			if (!load_stock_icon(widgetType, stockId, iconSize, direction, detail)) {
				$set(this, tmpImage, nullptr);
			}
		}
	}
	return this->tmpImage;
}

void UNIXToolkit::loadIconCallback($bytes* data, int32_t width, int32_t height, int32_t rowStride, int32_t bps, int32_t channels, bool alpha) {
	$useLocalCurrentObjectStackCache();
	$set(this, tmpImage, nullptr);
	$var($DataBuffer, dataBuf, $new($DataBufferByte, data, (rowStride * height)));
	$var($WritableRaster, raster, $Raster::createInterleavedRaster(dataBuf, width, height, rowStride, channels, (alpha ? UNIXToolkit::BAND_OFFSETS_ALPHA : UNIXToolkit::BAND_OFFSETS), ($Point*)nullptr));
	$var($ColorModel, colorModel, $new($ComponentColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), alpha, false, $ColorModel::TRANSLUCENT, $DataBuffer::TYPE_BYTE));
	$set(this, tmpImage, $new($BufferedImage, colorModel, raster, false, ($Hashtable*)nullptr));
}

bool UNIXToolkit::check_gtk(int32_t version) {
	$init(UNIXToolkit);
	bool $ret = false;
	$prepareNativeStatic(UNIXToolkit, check_gtk, bool, int32_t version);
	$ret = $invokeNativeStatic(UNIXToolkit, check_gtk, version);
	$finishNativeStatic();
	return $ret;
}

bool UNIXToolkit::load_gtk(int32_t version, bool verbose) {
	$init(UNIXToolkit);
	bool $ret = false;
	$prepareNativeStatic(UNIXToolkit, load_gtk, bool, int32_t version, bool verbose);
	$ret = $invokeNativeStatic(UNIXToolkit, load_gtk, version, verbose);
	$finishNativeStatic();
	return $ret;
}

bool UNIXToolkit::unload_gtk() {
	$init(UNIXToolkit);
	bool $ret = false;
	$prepareNativeStatic(UNIXToolkit, unload_gtk, bool);
	$ret = $invokeNativeStatic(UNIXToolkit, unload_gtk);
	$finishNativeStatic();
	return $ret;
}

bool UNIXToolkit::load_gtk_icon($String* filename) {
	bool $ret = false;
	$prepareNative(UNIXToolkit, load_gtk_icon, bool, $String* filename);
	$ret = $invokeNative(UNIXToolkit, load_gtk_icon, filename);
	$finishNative();
	return $ret;
}

bool UNIXToolkit::load_stock_icon(int32_t widget_type, $String* stock_id, int32_t iconSize, int32_t textDirection, $String* detail) {
	bool $ret = false;
	$prepareNative(UNIXToolkit, load_stock_icon, bool, int32_t widget_type, $String* stock_id, int32_t iconSize, int32_t textDirection, $String* detail);
	$ret = $invokeNative(UNIXToolkit, load_stock_icon, widget_type, stock_id, iconSize, textDirection, detail);
	$finishNative();
	return $ret;
}

void UNIXToolkit::nativeSync() {
	$prepareNative(UNIXToolkit, nativeSync, void);
	$invokeNative(UNIXToolkit, nativeSync);
	$finishNative();
}

int32_t UNIXToolkit::get_gtk_version() {
	$init(UNIXToolkit);
	int32_t $ret = 0;
	$prepareNativeStatic(UNIXToolkit, get_gtk_version, int32_t);
	$ret = $invokeNativeStatic(UNIXToolkit, get_gtk_version);
	$finishNativeStatic();
	return $ret;
}

void UNIXToolkit::sync() {
	nativeSync();
	$OGLRenderQueue::sync();
}

$RenderingHints* UNIXToolkit::getDesktopAAHints() {
	$useLocalCurrentObjectStackCache();
	$var($Object, aaValue, getDesktopProperty("gnome.Xft/Antialias"_s));
	if (aaValue == nullptr) {
		$assign(aaValue, getDesktopProperty(UNIXToolkit::FONTCONFIGAAHINT));
		if (aaValue != nullptr) {
			$init($RenderingHints);
			return $new($RenderingHints, $RenderingHints::KEY_TEXT_ANTIALIASING, aaValue);
		} else {
			return nullptr;
		}
	}
	bool aa = (($instanceOf($Number, aaValue)) && $nc(($cast($Number, aaValue)))->intValue() != 0);
	$var($Object, aaHint, nullptr);
	if (aa) {
		$var($String, subpixOrder, $cast($String, getDesktopProperty("gnome.Xft/RGBA"_s)));
		if (subpixOrder == nullptr || $nc(subpixOrder)->equals("none"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
		} else if (subpixOrder->equals("rgb"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB);
		} else if (subpixOrder->equals("bgr"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR);
		} else if (subpixOrder->equals("vrgb"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB);
		} else if (subpixOrder->equals("vbgr"_s)) {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR);
		} else {
			$init($RenderingHints);
			$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
		}
	} else {
		$init($RenderingHints);
		$assign(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
	}
	$init($RenderingHints);
	return $new($RenderingHints, $RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
}

bool UNIXToolkit::gtkCheckVersionImpl(int32_t major, int32_t minor, int32_t micro) {
	bool $ret = false;
	$prepareNative(UNIXToolkit, gtkCheckVersionImpl, bool, int32_t major, int32_t minor, int32_t micro);
	$ret = $invokeNative(UNIXToolkit, gtkCheckVersionImpl, major, minor, micro);
	$finishNative();
	return $ret;
}

bool UNIXToolkit::checkGtkVersion(int32_t major, int32_t minor, int32_t micro) {
	if (loadGTK()) {
		return gtkCheckVersionImpl(major, minor, micro);
	}
	return false;
}

$UNIXToolkit$GtkVersions* UNIXToolkit::getEnabledGtkVersion() {
	$init(UNIXToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, version, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jdk.gtk.version"_s)))));
	if (version == nullptr) {
		$init($UNIXToolkit$GtkVersions);
		return $UNIXToolkit$GtkVersions::ANY;
	} else if ($nc(version)->startsWith("2"_s)) {
		$init($UNIXToolkit$GtkVersions);
		return $UNIXToolkit$GtkVersions::GTK2;
	} else if ("3"_s->equals(version)) {
		$init($UNIXToolkit$GtkVersions);
		return $UNIXToolkit$GtkVersions::GTK3;
	}
	$init($UNIXToolkit$GtkVersions);
	return $UNIXToolkit$GtkVersions::ANY;
}

$UNIXToolkit$GtkVersions* UNIXToolkit::getGtkVersion() {
	$init(UNIXToolkit);
	return $UNIXToolkit$GtkVersions::getVersion(get_gtk_version());
}

bool UNIXToolkit::isGtkVerbose() {
	$init(UNIXToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2)))))))->booleanValue();
}

$Boolean* UNIXToolkit::lambda$isGtkVerbose$2() {
	$init(UNIXToolkit);
	return $Boolean::valueOf($Boolean::getBoolean("jdk.gtk.verbose"_s));
}

$String* UNIXToolkit::lambda$getDesktop$1() {
	$init(UNIXToolkit);
	return $System::getenv("XDG_CURRENT_DESKTOP"_s);
}

$String* UNIXToolkit::lambda$getDesktop$0() {
	$init(UNIXToolkit);
	return $System::getenv("GNOME_DESKTOP_SESSION_ID"_s);
}

void clinit$UNIXToolkit($Class* class$) {
	$assignStatic(UNIXToolkit::FONTCONFIGAAHINT, "fontconfig/Antialias"_s);
	$assignStatic(UNIXToolkit::GTK_LOCK, $new($Object));
	$assignStatic(UNIXToolkit::BAND_OFFSETS, $new($ints, {
		0,
		1,
		2
	}));
	$assignStatic(UNIXToolkit::BAND_OFFSETS_ALPHA, $new($ints, {
		0,
		1,
		2,
		3
	}));
}

UNIXToolkit::UNIXToolkit() {
}

$Class* UNIXToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UNIXToolkit$$Lambda$lambda$getDesktop$0::classInfo$.name)) {
			return UNIXToolkit$$Lambda$lambda$getDesktop$0::load$(name, initialize);
		}
		if (name->equals(UNIXToolkit$$Lambda$lambda$getDesktop$1$1::classInfo$.name)) {
			return UNIXToolkit$$Lambda$lambda$getDesktop$1$1::load$(name, initialize);
		}
		if (name->equals(UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::classInfo$.name)) {
			return UNIXToolkit$$Lambda$lambda$isGtkVerbose$2$2::load$(name, initialize);
		}
	}
	$loadClass(UNIXToolkit, name, initialize, &_UNIXToolkit_ClassInfo_, clinit$UNIXToolkit, allocate$UNIXToolkit);
	return class$;
}

$Class* UNIXToolkit::class$ = nullptr;

	} // awt
} // sun